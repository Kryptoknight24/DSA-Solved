class Solution {
public:
int possible(vector<int> nums,int days,int k,int m){
    long long roses=0;
    long long bouquets=0;
    long long n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]<=days){
            roses++;
        }
        else{
            bouquets+=(roses/k);
            roses=0;
        }
    }
    bouquets+=roses/k;
    if(bouquets>=m){
        return true;
    }
    return false;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long n=bloomDay.size();
        if(n<(long long)m*k) return -1;
    long long low=*min_element(bloomDay.begin(),bloomDay.end());
    long long high=*max_element(bloomDay.begin(),bloomDay.end());
    long long ans=high;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(possible(bloomDay,mid,k,m)){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna