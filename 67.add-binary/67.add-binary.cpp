        while (k >= 0) {
            int A = i < 0 ? 0 : a[i] & 1; // '0' & 1 = 0, '1' & 1 = 1
            int B = j < 0 ? 0 : b[j] & 1; //

            int S = (A ^ B) ^ C; 
            int C_out = ((A ^ B) & C) | (A & B);

            res[k] = S + '0'; //char conversion

            C = C_out;
            i--; j--; k--; //decrement pointers

        int k = res.size() - 1;
        int C = 0;
        string &res = (a.size() >= b.size()) ? a : b; //choose larger string as output
        int i = a.size() - 1, j = b.size() - 1;
class Solution {
public:
    string addBinary(string a, string b) {

