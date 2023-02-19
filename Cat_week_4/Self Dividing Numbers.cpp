class Solution {
    #include<string>
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        int div,num,c;
        for(int i=left;i<=right;i++)
        {
            c=0;
            num=i;
            while(num>0)
            {
                div=num%10;
                if(div==0||i%div!=0)
                {
                    c++;
                    break;
                }Self Dividing Numbers
                num/=10;
            }
            if(c==0)
            {
                res.push_back(i);
            }
        }
        return res;
    }
};