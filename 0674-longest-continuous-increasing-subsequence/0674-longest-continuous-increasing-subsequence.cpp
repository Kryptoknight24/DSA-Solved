class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size();
        int curr =0;
        int maxstep=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]<nums[i]){
                curr++;
            }
            else{
                maxstep=max(curr,maxstep);
                curr=0;
            }
        }
        maxstep=max(curr,maxstep);
        return maxstep+1;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna