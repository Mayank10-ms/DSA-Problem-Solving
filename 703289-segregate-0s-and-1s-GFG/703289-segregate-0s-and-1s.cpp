class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        // Current Approach: Using sort()
        // Time Complexity: O(N log N)
        // Space Complexity: O(1)
        // Optimal Complexity: O(N) time and O(1) space.
        
        // Hint: Since the array only contains 0s and 1s, you don't need a full sort.
        // You can use a Two-Pointer approach (which you started commenting out!) 
        // or a single pass to count the number of zeros.
        
        // Try to implement the Two-Pointer logic:
        // 1. Keep 'left' at the start and 'right' at the end.
        // 2. Move 'left' forward while arr[left] == 0.
        // 3. Move 'right' backward while arr[right] == 1.
        // 4. If left < right, swap them and repeat.

        // int left =0;
        // int right = arr.size()-1;
        
        // while(left<right){
        //     if()
        // }
        //sort(arr.begin(),arr.end());
        int count = 0;
        for(int x:arr){
            if(x==0){
                count++;
            }
        }
        for(int i =0;i<count;i++){
            arr[i]=0;
        }
        for(int i = count;i<arr.size();i++){
            arr[i]=1;
        }
        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna