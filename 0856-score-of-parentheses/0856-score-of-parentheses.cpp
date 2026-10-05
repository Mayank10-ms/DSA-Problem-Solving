class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);
        int score = 0;
        for(auto c:s){
           if(c=='('){
            st.push(0);
           }
           else{
            int inside = st.top();
                st.pop();

                int current = max(2 * inside, 1);

                st.top() += current;
            }
        }
        return st.top();   
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna