        for(char ch : s){
            if(ch == '(' || ch =='{' || ch=='['){
        }

                temp.push_back(ch);
            }
            else{
                if(temp.empty()) return false;
            }
    }
                char top=temp.back();
                temp.pop_back();
                if((ch==')' && top!='(') ||(ch=='}' && top!='{') || (ch==']' && top!='[') ) return false;
        return temp.empty();
};
        string temp;
    bool isValid(string s) {
public:
class Solution {

