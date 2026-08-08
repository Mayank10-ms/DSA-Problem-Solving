class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        int left = 0;
        long long window = 0;
        long long ans = 0;

        unordered_set<int> st;

        for (int right = 0; right < nums.size(); right++) {

            while (st.count(nums[right])) {
                st.erase(nums[left]);
                window -= nums[left];
                left++;
            }

            st.insert(nums[right]);
            window += nums[right];

            if (right - left + 1 == k) {

                ans = max(ans, window);

                st.erase(nums[left]);
                window -= nums[left];
                left++;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna