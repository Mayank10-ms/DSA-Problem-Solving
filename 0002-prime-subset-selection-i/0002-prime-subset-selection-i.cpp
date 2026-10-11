class Solution {
public:
    vector<int> maxPrimes(int n, int s) {
        
        vector<bool>isPrime(n+1,true);
        isPrime[0]=isPrime[1]=false;
        for(int i =2;i*i<=n;i++){
            if(isPrime[i]){

            for(int j =i*i;j<=n;j+=i){
                 isPrime[j]=false;
                }
            }
        }
        vector<int>ans;
        int sum =0;
        for(int i =2;i<=n;i++){
            if(!isPrime[i]) continue;
                if(sum+i>s) break;
                ans.push_back(i);
                sum+=i;    
                
        }
           return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna