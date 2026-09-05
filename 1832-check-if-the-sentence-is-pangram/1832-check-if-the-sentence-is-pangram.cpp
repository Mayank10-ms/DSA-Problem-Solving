class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>arr(26,0);
        for(char ch : sentence){
            int idx = ch-'a';
            arr[idx]++;
        }
        for( auto count : arr){
            if(count == 0) return false;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna