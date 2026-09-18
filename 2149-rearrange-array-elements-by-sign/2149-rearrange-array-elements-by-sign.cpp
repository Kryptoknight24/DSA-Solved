class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> result(nums.size());
        int posIndex = 0, negIndex = 1;

        for(int num : nums){
            if(num > 0){
                result[posIndex] = num;
                posIndex += 2;
            }else{
                result[negIndex] = num;
                negIndex += 2;
            }
        }

        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna