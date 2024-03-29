class Solution {
public:
    int lengthOfLastWord(std::string s) {
        int siz = s.length();
        int count = 0;

        // Iterate from the end of the string to find the last word
        for (int i = siz - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                count++;
            } else if (count > 0) {
                // If a space is encountered after the last word, break the loop
                return count;
            }
        }

        return count;
    }
};

APPROACH-2:

class Solution {
public:
    int lengthOfLastWord(string s) {
        int siz=s.size(),counts=0,flag=0;
        for(int i=siz-1;i>=0;i--){
            if(s[i]==' '&&flag)break;
            if(s[i]!=' '){
                flag=1;
                counts++;
            }
        }
        return counts;
    }
};
