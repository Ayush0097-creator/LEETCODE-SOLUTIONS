class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> f;
        int i;
        int maxi = INT_MIN;
        int n = nums.size();
        for (i = 0; i < n; i++) {
            f[nums[i]]++;
        }

        for (auto it : f) {
            if (it.second > n / 2) {
                maxi = it.first;
                break;
            }
            
        }
        return maxi;
    }
};