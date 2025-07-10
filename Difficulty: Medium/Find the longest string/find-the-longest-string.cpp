class Solution {
public:
    string longestString(vector<string>& words) {
        unordered_set<string> wordSet(words.begin(), words.end());

        // Custom sort: longest first, then lexicographically
        sort(words.begin(), words.end(), [](const string& a, const string& b) {
            return a.length() == b.length() ? a < b : a.length() > b.length();
        });

        for (const string& word : words) {
            bool valid = true;
            for (int i = 1; i < word.length(); ++i) {
                if (wordSet.find(word.substr(0, i)) == wordSet.end()) {
                    valid = false;
                    break;
                }
            }
            if (valid)
                return word;
        }

        return "";
    }
};
