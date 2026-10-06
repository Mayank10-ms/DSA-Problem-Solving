class Solution {
public:
    int minAddToMakeValid(string s) {
        int count = 0;
        int ans = 0;
        stack<int>st;
        for(auto c : s){
            if(c=='('){
                count++;
                st.push(c);
            }
            else{
                if(count>0){
                    count--;
                }
                else{
                    ans++;
                }
                
            }
        }
        return count+ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna