class Solution {
public:
    int maxFreqSum(string s) {
        map<char, int> m1;
        map<char, int> m2;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {
                m1[s[i]]++;
            } else {
                m2[s[i]]++;
            }
        }

        int v = 0;
        int c = 0;

        for (auto it : m1) {
            v = max(v, it.second);
        }

        for (auto it : m2) {
            c = max(c, it.second);
        }

        return v + c;
    }
};