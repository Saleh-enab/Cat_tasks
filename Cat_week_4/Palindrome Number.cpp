class Solution {
public:
    bool isPalindrome(int x) {
        long rev=0;
        int rem=0,num=x;
        if(x<0)
        {
            return false;
        }
        else
        {
            while(num!=0)
            {
                rem=num%10;
                rev=rev*10+rem;
                num/=10;
            }
        }
        if(x==rev) return true;
        else return false;
    }
};