class Solution {
public:
    string reverseWords(string s) {

        // s.trim();
        int n = s.size();

        reverse(s.begin(), s.end());
        string ans = "";

        for (int i = 0; i < n; i++) {

            string word = "";
            while (i < n && s[i] != ' ') {
                word += s[i++];
            }
            reverse(word.begin(), word.end());

            

            if (word.size() > 0)
                ans += " " + word;
        }
        ans.erase(ans.begin());
        return ans;
    }
};