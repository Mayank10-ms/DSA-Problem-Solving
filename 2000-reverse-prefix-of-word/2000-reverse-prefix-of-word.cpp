class Solution {
public:
    string reversePrefix(string word, char ch) {
       int idx = word.find(ch);
       reverse(word.begin(),word.begin()+idx+1);
       return word;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna