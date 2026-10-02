class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        vector<char>ch(256,0);
        
        string ans="";
        
        for(auto c : s){
            if(ch[c]==0){
                ans.push_back(c);
                
                ch[c]++;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna