#include <string>

class Solution {
public:
    bool halvesAreAlike(std::string s) {
        int len = s.length();
        int count = 0;
        int counts = 0;

        for (int i = 0; i < len / 2; ++i) {
            // Use equality (==) for each character separately
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
                s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                count += 1;
            }
        }

        for (int j = len / 2; j < len; ++j) {
            // Use equality (==) for each character separately
            if (s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U' ||
                s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u') {
                counts += 1;
            }
        }

        // Move the return statement outside of the for loop
        return (count == counts);
    }
};
