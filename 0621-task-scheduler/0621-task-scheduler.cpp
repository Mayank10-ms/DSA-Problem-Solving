class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int m = tasks.size();
        vector<int>freq(26,0);
        for(auto x : tasks){
            freq[x-'A']++;
        }
        int maxF = *max_element(freq.begin(),freq.end());
        int maxC = count(freq.begin(),freq.end(),maxF);

        int ans = (maxF-1) * (n+1) + maxC;

        return max(ans,m);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna