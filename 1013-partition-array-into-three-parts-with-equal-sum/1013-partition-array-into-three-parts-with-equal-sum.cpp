class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n=arr.size();
        int rs=0;
        for(int i=0;i<n;i++){
            rs+=arr[i];
        }
        if(rs%3!=0){
            return false;
        }
        int target=rs/3;
        int currentSum = 0;
        int count = 0;
        
        for (int num : arr) {
            currentSum += num;
            if (currentSum == target) {
                count++;
                currentSum = 0;
            }
        }
        
        return count >= 3;
    }
};