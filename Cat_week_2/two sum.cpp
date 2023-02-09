class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2,0);
        if(nums.size()==2)
        {
            res[0]=0;
            res[1]=1;
        }
        else
        {
            for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<=nums.size()-1;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    res[0]=i;
                    res[1]=j;
                    break;
                }
            }
        }
        }
        return res;
    }
};