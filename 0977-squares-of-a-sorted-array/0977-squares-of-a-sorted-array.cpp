class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> a; // negative numbers
        vector<int> b; // positive numbers

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] >= 0)
                b.push_back(nums[i]);
            else
                a.push_back(nums[i]);
        }

        // Square negative numbers
        for(int i = 0; i < a.size(); i++)
        {
            a[i] = a[i] * a[i];
        }

        // Reverse because negative numbers were sorted
        // from most negative to least negative
        reverse(a.begin(), a.end());

        // Square positive numbers
        for(int i = 0; i < b.size(); i++)
        {
            b[i] = b[i] * b[i];
        }

        int i = 0;
        int j = 0;
        int id = 0;

        int m = a.size();
        int n = b.size();

        vector<int> res(m + n);

        // Merge a and b
        while(i < m && j < n)
        {
            if(a[i] <= b[j])
            {
                res[id] = a[i];
                i++;
            }
            else
            {
                res[id] = b[j];
                j++;
            }

            id++;
        }

        // Remaining elements of a
        while(i < m)
        {
            res[id] = a[i];
            id++;
            i++;
        }

        // Remaining elements of b
        while(j < n)
        {
            res[id] = b[j];
            id++;
            j++;
        }

        return res;
    }
};