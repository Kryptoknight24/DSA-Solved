class Solution {
  public:
    bool armstrongNumber(int n) {
        int sum=0;
        int temp=n;
        while(n!=0){
            sum+=(n%10)*(n%10)*(n%10);
            n/=10;
        }
        if(sum==temp){
            return true;
        }
        else{
            return false;
        }
        
    }
};