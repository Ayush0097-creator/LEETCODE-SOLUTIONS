class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int even=0;
        int odd=1;
        
        int n=nums.size();
        int temp=0;
        while(odd<n && even<n)
        {
            if(nums[even]%2==0)
            {
                even+=2;
            }
            else if(nums[odd]%2==1)
            odd+=2;
            else
            {
                temp=nums[even];
                nums[even]=nums[odd];
                nums[odd]=temp;
                even+=2;
                odd+=2;
            }
        }
        return nums;
    }
};