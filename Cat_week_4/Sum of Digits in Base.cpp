class Solution {
public:
    int sumBase(int n, int k) {
        int sum=0,rem=0;
        while(n>0)
        {
            rem=n%k;
            sum+=rem;
            n/=k;
        }
        return sum;
    }
};