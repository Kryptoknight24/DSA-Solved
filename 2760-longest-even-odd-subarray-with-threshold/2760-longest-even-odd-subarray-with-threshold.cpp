
class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int t) {
        int n=nums.size();
        int cur{0},ans{0};
        int l{0};
        while(l<n){
            if(nums[l]%2==0&&nums[l]<=t){
                int r=l+1;
                if(r<n&&nums[l]%2==nums[r]%2){
                    ans=max(ans,1);
                    l++;
                    continue;
                }
                int cur{1};
                while(r<n && nums[r]<=t){
                    cur++;
                    if(r+1<n &&nums[r]%2==nums[r+1]%2){
                        break;
                    }
                    r++;
                }

                ans=max(ans,cur);
                l=r;
            }else{
                l++;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna