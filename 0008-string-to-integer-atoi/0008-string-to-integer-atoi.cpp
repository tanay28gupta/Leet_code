class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int i = 0;
        long result = 0;   // use long to handle overflow
        int sign = 1;

        // 1. Skip spaces
        while (i < n && s[i] == ' ') {
            i++;
        }

        // 2. Check sign
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') sign = -1;
            i++;
        }

        // 3. Build the number
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';
            result = result * 10 + digit;

            // 4. Clamp if overflow
            if (sign == 1 && result > INT_MAX) return INT_MAX;
            if (sign == -1 && -result < INT_MIN) return INT_MIN;

            i++;
        }

        return (int)(sign * result);
    }
};
