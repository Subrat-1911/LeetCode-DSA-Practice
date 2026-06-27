import csv
import urllib.request

# 1. Yahan apna Google Sheet ID paste karo
SHEET_ID = '1CEC3UxH0Jy42Dr9jal8UO1FxiL4XQ0Qu1GyblmcGiSk'
URL = f"https://docs.google.com/spreadsheets/d/{SHEET_ID}/export?format=csv&gid=0"

def fetch_and_sync():
    print("Fetching data from Google Sheets...")
    response = urllib.request.urlopen(URL)
    lines = [l.decode('utf-8') for l in response.readlines()]
    reader = list(csv.reader(lines))
    
    # 2. Markdown file start karna
    md_content = "# 📊 DSA Progress Tracker\n\n"
    md_content += "Auto-synced from Google Sheets.\n\n"
    
    # Mobile view ke liye sirf chote columns (Date, Problem, Diff, Status, Complexity)
    md_content += "| Date | Problem | Difficulty | Status | Complexity |\n"
    md_content += "|---|---|---|---|---|\n"
    
    # 3. Data extract karna (Row 4 se start, kyunki upar headings hain)
    for row in reader[3:]: 
        if not row or not row[1].strip(): 
            continue # Khali rows ignore karo
            
        date = row[0].strip()
        problem = row[1].strip()
        difficulty = row[3].strip()
        status = row[5].strip()
        complexity = row[10].strip().replace('\n', ' ') 
        
        # Markdown table row add karna
        md_content += f"| {date} | {problem} | {difficulty} | {status} | {complexity} |\n"
        
    # 4. File save karna
    with open('DSA_Report.md', 'w', encoding='utf-8') as f:
        f.write(md_content)
    print("DSA_Report.md successfully updated!")

if __name__ == "__main__":
    fetch_and_sync()
