class Solution {
public:
    
    long long minimumMaxValue(int n, int index, int value) {
        if(n==1) return value;
        if(value<=1) return -1;

        long long p =value;

        if(value % 2==0) p = 2;
        else {
            for(long long i =3;i<=value/i;i+=2){
                if(value % i == 0){
                    p=i;
                    break;
                }
            }
        }
        if(index > 0){
            long long left = value - p - 2LL * (index -1);

            if(left <=0) return -1;
        }
        if(index == n-1) return value;

        return value+ p + 2LL * ( n- index - 2);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna