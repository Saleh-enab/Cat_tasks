class Solution {
    #include<map>
    #include<string>
public:
    vector<string> findWords(vector<string>& words) {
        bool state;
        vector<string> result;

        string s1="qwertyuiopQWERTYUIOP";
        string s2="asdfghjklASDFGHJKL";
        string s3="zxcvbnmZXCVBNM";

        string test1 ="asdfghjklASDFGHJKLzxcvbnmZXCVBNM";
        string test2="qwertyuiopQWERTYUIOPzxcvbnmZXCVBNM";
        string test3="qwertyuiopQWERTYUIOPasdfghjklASDFGHJKL";

        for(int i=0;i<words.size();i++)
        {

            if(s1.find(words[i][0])!=string::npos)
            {
                for(char c:words[i])
                {
                    if(test1.find(c)!=string::npos)
                    {
                        state=false;
                        break;
                    }
                    else
                    {
                        state=true;
                    }
                }
            }
            else if(s2.find(words[i][0])!=string::npos)
            {
                for(char c:words[i])
                {
                    if(test2.find(c)!=string::npos)
                    {
                        state=false;
                        break;
                    }
                    else
                    {
                        state=true;
                    }
                }
            }
            else
            {
                for(char c:words[i])
                {
                    if(test3.find(c)!=string::npos)
                    {
                        state=false;
                        break;
                    }
                    else
                    {
                        state=true;
                    }
                }
            }
            if(state==true)
            {
                result.push_back(words[i]);
            }
        }

        return result;
    }
};