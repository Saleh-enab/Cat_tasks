class Solution {
    #include <map>
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> s_map,t_map;

        for(int i=0;i<s.size();i++)
        {
            if(s_map.count(s[i])&&s_map[s[i]]!=t[i])
            {
                return false;
            }
            s_map[s[i]]=t[i];

            if(t_map.count(t[i])&&t_map[t[i]]!=s[i])
            {
                return false;
            }
            t_map[t[i]]=s[i];
        }
        return true;
    }
};