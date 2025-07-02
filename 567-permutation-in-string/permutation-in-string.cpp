class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        //     int l , h;

        //     sort(s1.begin(),s1.end());

        // int n = s1.size();
        // for(int i=0; i<s2.size(); i++){

        //         string s = s2.substr(i,s1.size());
        //         sort(s.begin(),s.end());

        //         if(s1 == s )
        //             return true;

        // }
        // return false;

        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);

        for (char c : s1) {
            freq1[c - 'a']++;
        }

        int i = 0;
        int windowSize = s1.size();

        // Pre-fill first window of size 'windowSize - 1'
        for (int j = 0; j < windowSize - 1 && j < s2.size(); j++) {
            freq2[s2[j] - 'a']++;
        }

        for (int j = windowSize - 1; j < s2.size(); j++) {

            freq2[s2[j] - 'a']++; // Add new character to window

            if (freq1 == freq2)
                return true;

            freq2[s2[i] - 'a']--; // Remove character going out of window
            i++;
        }

        return false;
    }
};