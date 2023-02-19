class Solution {
public:
    bool isPowerOfTwo(int n) {
        long num=4294967296;
        if(n==0) return false;
        else if(num%n!=0) return false;
        else return true;
        
    }
};