class Solution {
public:
    bool isIsomorphic(string s, string t) {
    	if(s.size()!=t.size()) return false;
        unordered_map<char, char> s_to_t;
        unordered_map<char, char> t_to_s;

        for (size_t i = 0; i < s.length(); ++i) {
            char cs = s[i], ct = t[i];

            if (s_to_t.count(cs)) {
                if (s_to_t[cs] != ct) return false;
            } else {
                s_to_t[cs] = ct;
            }

            
            if (t_to_s.count(ct)) {
                if (t_to_s[ct] != cs) return false;
            } else {
                t_to_s[ct] = cs;
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna