class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";


        sort(strs.begin(), strs.end());

        string first = strs[0];
        string last = strs[strs.size() - 1];

        string result = "";
        int minLen = min(first.size(), last.size());

        for (int i = 0; i < minLen; i++) {
            if (first[i] != last[i]) break;
            result += first[i];
        }

        return result;
    }
};
