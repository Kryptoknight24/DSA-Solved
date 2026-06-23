class Solution {
public:
    int trap(vector<int>& height) {
     int n=height.size();
        int water=0;
        int l=0;int r=n-1;
        int lmax=height[0];
        int rmax=height[n-1];
        
        while(l<=r){
            if(lmax>=rmax){
                water+=rmax-height[r];
                r--;
            if(r>=0){
                rmax=max(rmax,height[r]);
            }
            }
            else{
                water+=lmax-height[l];
                l++;
            if(l<=n-1){
                lmax=max(lmax,height[l]);
            }
            }
        }
        return water;
           
    }
};