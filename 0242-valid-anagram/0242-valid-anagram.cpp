class Solution{	
	public:
		bool isAnagram(string &s,string &t){
			if(s.size()!=t.size()){
                return false;
            }
            unordered_map <char,int> count;
            for(char c : s){
                count[c]++;
            }
            for(char c: t){
                if(count[c]==0){
                    return false;
                }
                count[c]--;
            }
            return true;
		}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna