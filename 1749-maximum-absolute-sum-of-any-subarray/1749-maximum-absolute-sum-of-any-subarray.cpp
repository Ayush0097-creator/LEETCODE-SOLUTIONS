class Solution {
public:
    int fun(vector<int>& nums)
    {
        int bestend=nums[0];
        int ans=nums[0];

        for(int i=1;i<nums.size();i++)
        {
            int v1=bestend+nums[i];
            int v2=nums[i];
            bestend=max(v1,v2);
            ans=max(bestend,ans);
        }
        return ans;
    }

    int fun2(vector<int>& nums)
    {
        int bestend=nums[0];
        int ans=nums[0];

        for(int i=1;i<nums.size();i++)
        {
            int v1=bestend+nums[i];
            int v2=nums[i];
            bestend=min(v1,v2);
            ans=min(bestend,ans);
        }
        return ans;
    }
    

    int maxAbsoluteSum(vector<int>& nums) {
        
        return max(abs(fun(nums)),abs(fun2(nums)));
    }
};