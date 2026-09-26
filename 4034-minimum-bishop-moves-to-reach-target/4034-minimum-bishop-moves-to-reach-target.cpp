class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        int sr = source[0];
        int sc = source[1];
        int tr = target[0];
        int tc = target[1];

        if(sr==tr and sc == tc) {
            return 0;
        }
        
        if(abs(sr-tr)==abs(sc-tc)){
            return 1;
        }
        if((sr+sc)%2 == (tr+tc)%2){
            return 2;
        }
        return -1;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna