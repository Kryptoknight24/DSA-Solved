class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int res=0;int count =1;
        // First pass: Boyer-Moore voting to find a candidate.
        for(int i=1;i<n;i++){
            if(nums[res]==nums[i]){
                count++;
            }
            else{
                count--;
            }
            if(count==0){
                count=1;
                res=i;
            }
        }
        count=0;
        for(int i=0;i<n;i++){
            if(nums[res]==nums[i]){
                count++;
            }
        }
        if(count<=n/2){
            return -1; 
        }
         return nums[res];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna