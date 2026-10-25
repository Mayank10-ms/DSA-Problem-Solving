class StockSpanner {
public:
vector<int>prices;
    StockSpanner() {
        
    }
    
    int next(int price) {
       prices.push_back(price);
       int span = 0;
       for(int i = prices.size()-1;i>=0;i--){
        if(prices[i]<=price){
            span++;
        }
        else{
            break;
        }
       } 
       return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna