class Solution {
public:
    void reverseString(vector<char>& s) {
        char ch;
        int num=s.size()/2;
        for(int i=0;i<num;i++)
        {
            ch=s[i];
            s[i]=s[s.size()-i-1];
            s[s.size()-i-1]=ch;
        }
    }
};