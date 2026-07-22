class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
         int prev = 0;
        int ans = 0;

        for (string row : bank) {

            int curr = 0;

            for (char ch : row) {
                if (ch == '1')
                    curr++;
            }

            if (curr == 0)
                continue;

            ans += prev * curr;
            prev = curr;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna