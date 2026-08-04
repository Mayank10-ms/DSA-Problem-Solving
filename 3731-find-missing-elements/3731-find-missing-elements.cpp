class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<int>ans;
        for(int j =1;j<n;j++){
        for(int i = nums[j-1]+1;i<nums[j];i++){
            ans.push_back(i);
        }
     }
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna