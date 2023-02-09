class Solution {
    #include <map>
public:
    bool canConstruct(string ransomNote, string magazine) {

        map<char,int> ransom,maga;
        for(char c:magazine)
        {
            maga[c]++;
        }
        for(char c:ransomNote)
        {
            ransom[c]++;
        }
        for(char c:ransomNote)
        {
            if(ransom[c]>maga[c])
            {
                return false;
                break;
            }
        }
        return true;
}
};