class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int prev = 0;
        int val = 0;
        for(int i =0;i<target.size();i++){
            if(target[i]>prev){
                val += target[i]-prev;
                
            }
            prev=target[i];
        }
        return val;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna