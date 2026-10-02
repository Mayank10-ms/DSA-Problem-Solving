class Solution {
public:
    void generate(string current,int open,int closed,int n, vector<string>& ans){
        if(open == n && closed == n){
            ans.push_back(current);
            return;
        }
        if(open<n){
            generate(current+'(',open+1,closed,n,ans);
        }
        if(closed<open){
            generate(current+')',open,closed+1,n,ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        generate("",0,0,n,ans);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna