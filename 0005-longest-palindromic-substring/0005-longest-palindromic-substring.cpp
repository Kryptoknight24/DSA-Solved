class Solution {
public:
    int expandaroundcentre(string &s,int left,int right){
            while(left>=0 && right<s.length()&& s[left]==s[right]){
                left--;
                right++;
            }
            return right-left-1;
        }
    string longestPalindrome(string s) {
        if(s.empty()) return "";
        int start=0;
        int max_len=0;
        for(int i=0;i<s.length();i++){
            int len1=expandaroundcentre(s,i,i);
            int len2=expandaroundcentre(s,i,i+1);
            int current_len=max(len1,len2);
            if(current_len>max_len){
            max_len=current_len;
            start=i-(current_len-1)/2;
            }
        }

        return s.substr(start,max_len);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna