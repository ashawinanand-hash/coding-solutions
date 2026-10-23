class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        int prev = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == 'I') {
                if (1 < prev) {
                    ans = ans - 1;
                    prev = 1;
                } else {
                    ans = ans + 1;
                    prev = 1;
                }
            } else if (s[i] == 'V') {
                if (5 < prev) {
                    ans = ans - 5;
                    prev = 5;
                } else {
                    ans = ans + 5;
                    prev = 5;
                }
            } else if (s[i] == 'X') {
                if (10 < prev) {
                    ans = ans - 10;
                    prev = 10;
                } else {
                    ans = ans + 10;
                    prev = 10;
                }
            } else if (s[i] == 'L') {
                if (50 < prev) {
                    ans = ans - 50;
                    prev = 50;
                } else {
                    ans = ans + 50;
                    prev = 50;
                }
            } else if (s[i] == 'C') {
                if (100 < prev) {
                    ans = ans - 100;
                    prev = 100;
                } else {
                    ans = ans + 100;
                    prev = 100;
                }
            } else if (s[i] == 'D') {
                if (500 < prev) {
                    ans = ans - 500;
                    prev = 500;
                } else {
                    ans = ans + 500;
                    prev = 500;
                }
            } else {
                if (1000 < prev) {
                    ans = ans - 1000;
                    prev = 1000;
                } else {
                    ans = ans + 1000;
                    prev = 1000;
                }
            }
        }
        return ans;
    }
};