class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m=t.size(),n=s.size(),i=0,j=0;
        while(i<m&&j<n)
        {
            if(t[i]==s[j])
            {
                j++;
            }
            i++;
        }
        if(j==n) return true;
        else return false;
    }
};