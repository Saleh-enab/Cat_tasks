class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int num=1,max=0;

        for(int i=0;i<sentences.size();i++)
        {
            for(char c:sentences[i])
            {
                if(c==' ')
                {
                    num++;
                }
            }
            if(num>max)
            {
                max=num;
            }
            num=1;
        }
        return max;
    }
};