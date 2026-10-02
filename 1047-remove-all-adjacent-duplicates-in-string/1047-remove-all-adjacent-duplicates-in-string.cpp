class Solution {
public:
    string removeDuplicates(string s) {
        vector<char>ans;
         for(auto c : s){
            if(ans.empty()){
                ans.push_back(c);
            }
            else if(c != ans.back()){
                ans.push_back(c);
            }
            else {
                ans.pop_back();
            }
         }
      return string(ans.begin(),ans.end());
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna