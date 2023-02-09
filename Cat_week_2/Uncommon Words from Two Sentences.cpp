class Solution {
    #include <map>
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string s=s1+" "+s2;
        string word="";
        vector<string> result;
        map <string,int> freq;

        for(char c : s)
        {
            if(c ==' ')
            {
                freq[word]+=1;
                word="";
            }
                else
            {
                word+=c;
            }
        }
        freq[word]+=1;

        for(auto itr=freq.begin();itr!=freq.end();itr++)
        {
            if(itr->second==1)
            {
                result.push_back(itr->first);
            }
        }
        return result;
    }
};