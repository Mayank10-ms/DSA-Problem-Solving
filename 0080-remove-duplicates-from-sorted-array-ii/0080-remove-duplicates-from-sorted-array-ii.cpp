class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();

        if (n <= 2)
            return n;

        int write = 2;

        for (int read = 2; read < n; read++) {

            if (nums[read] != nums[write - 2]) {

                nums[write] = nums[read];
                write++;
            }
        }

        return write;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna