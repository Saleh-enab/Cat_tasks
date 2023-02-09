class Solution {
    #include<map>
public:
    bool isHappy(int n) {
        int rem=0,x=0;
        map<int,int> numbers;
        while(1)
        {
            if(n==0)
            {
                if(rem==1)
                {
                    return true;
                    break;
                }
                else if(numbers[rem]>1)
                {
                    return false;
                    break;
                }
                else
                {
                    numbers[rem]++;
                    n=rem;
                    rem=0;
                }

            }
            else
            {
                x=n%10;
                rem+=(x*x);
                n/=10;
            }
        }

    }
};