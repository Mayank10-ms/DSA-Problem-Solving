class Solution {
public:
    int solve(int i, vector<string>& words, vector<int>& cnt, vector<int>& score) {
        if (i == words.size()) return 0;

        int ans = solve(i + 1, words, cnt, score); // Skip

        vector<int> temp = cnt;
        int cur = 0;
        bool ok = true;

        for (char c : words[i]) {
            if (--temp[c - 'a'] < 0) {
                ok = false;
                break;
            }
            cur += score[c - 'a'];
        }

        if (ok)
            ans = max(ans, cur + solve(i + 1, words, temp, score));

        return ans;
    }

    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        vector<int> cnt(26);
        for (char c : letters) cnt[c - 'a']++;
        return solve(0, words, cnt, score);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna