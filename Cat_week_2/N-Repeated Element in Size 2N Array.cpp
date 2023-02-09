class Solution {
    #include <map>
public:
    int repeatedNTimes(vector<int>& nums) {
        
        int n=nums.size()/2;
        map <int,int> numbers;
        for(int i=0;i<nums.size();i++)
        {
            numbers[nums[i]]+=1;   
        }
        
        for(auto itr=numbers.begin();itr!=numbers.end();itr++)
        {
            if(itr->second==n)
            {
                return itr->first;
                break;
            }
        }
        return 0;
    }
};