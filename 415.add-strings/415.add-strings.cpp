class Solution {
public:
    string addStrings(string num1, string num2) {
        long long x=stoll(num1);
        long long y=stoll(num2);

        long long sum =x+y;
        string s=std::to_string(sum);

        return s;
    }
   
};

