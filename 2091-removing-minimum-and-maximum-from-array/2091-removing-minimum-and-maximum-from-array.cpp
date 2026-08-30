class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int maxi = max_element(nums.begin(),nums.end()) -begin(nums);
        int mini = min_element(nums.begin(),nums.end())-begin(nums);

        int leftidx = min(mini,maxi);
        int rightidx = max(mini,maxi);
   
        return min({leftidx+1+n-rightidx,rightidx+1,n-leftidx});
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna