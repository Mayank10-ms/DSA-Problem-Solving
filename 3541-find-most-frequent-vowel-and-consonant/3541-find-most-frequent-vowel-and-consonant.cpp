class Solution {
public:
    int maxFreqSum(string s) {
        int vowlcnt[26]={0};
        int constcnt[26] ={0};
        for(auto x : s){
            if(x=='a'||x=='e'||x=='i'||x=='u'||x=='o'){
                vowlcnt[x-'a']++;
            }
            else{
                constcnt[x-'a']++;
            }  
        }
        int maxv=0;
        int maxc=0;
        for(int i =0;i<26;i++){
            maxv=max(maxv,vowlcnt[i]);
            maxc=max(maxc,constcnt[i]);
        }
        return maxc+maxv;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna