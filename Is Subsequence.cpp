class Solution {
public:
    bool isSubsequence(string s, string t) {
         int j = 0; 
        for (int i = 0; i < t.length(); i++) {
            if (j < s.length() && t[i] == s[j]) {
                j++; 
            }
        }
       
        return j == s.length();
    }
};