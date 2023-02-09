class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        int res=0;
        for(int i=0;i<words.size();i++)
        {
            res++;
            for(char c: words[i])
            {
                if(allowed.find(c)==string::npos)
                {
                    res--;
                    break;
                }
            }
        }
        return res;
    }
};