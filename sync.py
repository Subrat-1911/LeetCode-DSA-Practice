import csv
import urllib.request
import os

# Yahan apna wahi purana Google Sheet ID paste karo
SHEET_ID = '1CEC3UxH0Jy42Dr9jal8UO1FxiL4XQ0Qu1GyblmcGiSk'
URL = f"https://docs.google.com/spreadsheets/d/{SHEET_ID}/export?format=csv&gid=0"

def get_folder_name(problem_str):
    # Sheet ke naam "88. Merge Sorted Array" ko folder ke naam "88.merge-sorted-array" mein convert karna
    parts = problem_str.split('.', 1)
    if len(parts) == 2:
        num = parts[0].strip()
        name = parts[1].strip().lower()
        # Special characters hata kar spaces ko dash (-) se replace karna
        name = ''.join(e for e in name if e.isalnum() or e.isspace())
        name = name.replace(' ', '-')
        # Agar double dash aa jaye toh single kar do
        while '--' in name:
            name = name.replace('--', '-')
        return f"{num}.{name}"
    return problem_str.strip().lower().replace(' ', '-')

def fetch_and_sync():
    print("Fetching data from Google Sheets...")
    response = urllib.request.urlopen(URL)
    lines = [l.decode('utf-8') for l in response.readlines()]
    reader = list(csv.reader(lines))
    
    for row in reader[3:]: # Row 4 se data start ho raha hai
        if not row or not row[1].strip(): 
            continue # Khali rows ko ignore karo
            
        date_solved = row[0].strip()
        problem_name = row[1].strip()
        difficulty = row[3].strip()
        importance = row[4].strip()
        solve_status = row[5].strip()
        time_taken = row[6].strip()
        first_approach = row[7].strip()
        failure_reason = row[8].strip()
        correct_pattern = row[9].strip()
        final_complexity = row[10].strip()
        
        # Confidence column index 13 par hai
        confidence = row[13].strip() if len(row) > 13 else ""
        
        # Folder ka exact naam generate karna
        folder_name = get_folder_name(problem_name)
        
        # Agar folder nahi hai toh bot khud naya bana dega
        os.makedirs(folder_name, exist_ok=True)
        readme_path = os.path.join(folder_name, "README.md")
        
        # 📱 Mobile-Friendly Markdown Formatting
        md_content = f"# {problem_name}\n\n"
        
        # Table for short data (No horizontal scrolling)
        md_content += "## 📝 Problem Details\n\n"
        md_content += "| Category | Details |\n"
        md_content += "|---|---|\n"
        md_content += f"| **Date Solved** | `{date_solved}` |\n"
        md_content += f"| **Difficulty** | `{difficulty}` |\n"
        md_content += f"| **Importance** | `{importance}` |\n"
        md_content += f"| **Solve Status** | `{solve_status}` |\n"
        md_content += f"| **Time Taken** | `{time_taken} Minutes` |\n"
        md_content += f"| **Complexity** | `{final_complexity}` |\n"
        if confidence:
            md_content += f"| **Confidence** | `{confidence}` |\n"
        
        # Sections for long text data 
        md_content += "\n## 🧠 Approach & Notes\n\n"
        if first_approach:
            md_content += f"### 1️⃣ First Approach\n> {first_approach}\n\n"
        if failure_reason:
            md_content += f"### ❌ Failure Reason / Mistake\n> {failure_reason}\n\n"
        if correct_pattern:
            md_content += f"### ✅ Correct Pattern\n> {correct_pattern}\n\n"
            
        # File save karna
        with open(readme_path, 'w', encoding='utf-8') as f:
            f.write(md_content)
            
    print("All problem folders updated successfully!")

if __name__ == "__main__":
    fetch_and_sync()
