class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int nodelete=arr[0];
        int res=arr[0];
        int onedelete=INT_MIN;
      
        for(int i=1;i<arr.size();i++)
        {
        int prev_nodelete=nodelete;
        int prev_onedelete=onedelete;

            nodelete=max(prev_nodelete + arr[i],arr[i]);
            onedelete = max(prev_nodelete,
                prev_onedelete == INT_MIN? INT_MIN : prev_onedelete + arr[i]);
                    
                   
           
            res=max(res,max(onedelete,nodelete));
        }
        return res;
    }
};