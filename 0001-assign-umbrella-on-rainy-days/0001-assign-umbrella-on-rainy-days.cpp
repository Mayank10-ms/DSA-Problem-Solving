class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int n = rain.size();

        vector<string> ans(n,"None");

        int a = 0,b=0;

        for(int i =0;i<n;i++){
            if(rain[i]==0) continue;

            bool aliceNeeds = (i<n-1 && rain[i+1] == 1);
                if(aliceNeeds){
                    if(a<=b) { ans[i] = "Alice"; a++;}
                    else      { ans[i]= "Bob"; b++;}
                } else {
                    ans[i] = "Bob";
                    b++;
                }
            }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna