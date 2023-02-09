class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        bool state=false;
        if(strs.size()==1)
        {
            res=strs[0];
        }
        else
        {
            for(int i=0;i<strs[0].size();i++)
        {
            for(int j=1;j<strs.size();j++)
            {
                if(strs[0][i]!=strs[j][i])
                {
                    state=false;
                    break;
                }
                else
                {
                    state=true;
                }
            }
            if(state)
            {
                res+=strs[0][i];
            }
            else
            {
                break;
            }
        }
        }
        
        return res;
    }
};