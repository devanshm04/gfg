class Solution {
public:
    string minWindow(string& s1, string& s2) {
        int n = s1.size(), m = s2.size();
        int minLen = INT_MAX, start = -1;
        int i = 0, j = 0;

        while (i < n) {
            // Step 1: move forward to match s2
            if (s1[i] == s2[j]) {
                j++;
                if (j == m) {
                    // Step 2: found a subsequence, backtrack
                    int end = i;
                    j--; // move back in s2
                    while (j >= 0) {
                        if (s1[i] == s2[j]) j--;
                        i--;
                    }
                    i++; j++; // adjust indices after backtrack
                    
                    // Step 3: check window size
                    int winLen = end - i + 1;
                    if (winLen < minLen) {
                        minLen = winLen;
                        start = i;
                    }
                }
            }
            i++;
        }

        if (start == -1) return "";
        return s1.substr(start, minLen);
    }
};
