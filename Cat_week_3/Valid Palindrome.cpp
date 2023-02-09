class Solution {
    #include<ctype.h>
    #include<string.h>
public:
    bool isPalindrome(string s) {
        if (s==" ") return true; 
        string s_new = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (isalnum(s[i]))
        {
            s_new += tolower(s[i]);
        }
    }

    if (s_new.size() % 2 != 0)
        s_new.erase(s_new.size() / 2, 1);

    string s1 = "", s2 = "";
    s1 = s_new.substr(0, s_new.size() / 2 );
    s2 = s_new.substr(s_new.size() / 2 , s_new.size() - 1);
    reverse(s2.begin(), s2.end());
        if(s1==s2) return true;
        else return false;
        
    }
};