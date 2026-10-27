class Solution {
public:
    string removeKdigits(string num, int k) {
        string st = "";
        for (char c : num) {
            while (k > 0 && st.size() > 0 && st.back() > c) {
                st.pop_back();
                k--;
            }
            st += c;
        }
        while (k > 0) {
            st.pop_back();
            k--;
        }
        while (st.size() > 0 && st[0] == '0') {
            st.erase(0, 1);
        }
        if (st == "") return "0";

        return st;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna