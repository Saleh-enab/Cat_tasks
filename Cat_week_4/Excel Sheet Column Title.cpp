class Solution {
public:
    string convertToTitle(int columnNumber) {
        int rem=0;
        string res="";
        while(columnNumber--)
        {
            rem=columnNumber%26;
            res=char('A'+rem)+res;
            columnNumber/=26;
        }
        return res;
    }
};