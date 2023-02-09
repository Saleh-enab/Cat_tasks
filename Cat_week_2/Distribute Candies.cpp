class Solution {
    #include <set>
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> s;
        for(int n:candyType)
        {
            s.insert(n);
        }
        return min(s.size(),candyType.size()/2);
    }
};