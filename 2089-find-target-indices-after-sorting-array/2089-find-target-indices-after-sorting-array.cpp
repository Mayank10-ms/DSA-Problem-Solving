class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        // int low =0;
        // int high = nums.size()-1;
        // while(low<high){
        //     int mid = low+(high-low)/2;
        //     if(nums[mid]==target){
        //         ans.push_back(mid);
        //     }
        //     else if(nums[mid]<target){
        //         low=mid+1;
        //     }
        //     else{
        //         high =mid-1;
        //     }
        // }
        //     return ans;
        
        for(int i =0;i<nums.size();i++){
            if(nums[i]==target){
                ans.push_back(i);
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna