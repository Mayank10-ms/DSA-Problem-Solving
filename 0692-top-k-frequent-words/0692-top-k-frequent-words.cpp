class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        for(auto& x : words) mp[x]++;

        // auto cmp = [](const pair<int,string>& a, const pair<int,string>& b) {
        //     if (a.first != b.first) return a.first > b.first;
        //     return a.second < b.second;
        // };
        // priority_queue<pair<int,string>,vector<pair<int,string>>,decltype(cmp)>pq;

        priority_queue<pair<int,string>>pq;

        for(auto& [word,f]:mp){
            pq.push({-f,word});
            if(pq.size()>k){
            pq.pop();
           }
        }

        vector<string>res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna