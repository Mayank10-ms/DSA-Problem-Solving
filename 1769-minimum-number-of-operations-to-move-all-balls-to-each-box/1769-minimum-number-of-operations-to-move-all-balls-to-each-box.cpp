class Solution {
public:
    vector<int> minOperations(string boxes) {
         int n = boxes.size();
         vector<int> ans(n, 0);
        for (int i = 0; i < n; i++){ 
             for (int j = 0; j < n; j++) {
                   if (boxes[j] == '1') {
                         ans[i] += abs(i - j);
                    }
             }
    }
    return ans;                                                                                
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna