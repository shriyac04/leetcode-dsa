class Solution {
public:
    bool isValid(string s) {
             stack<char> stack;

        for (char current : s) {
            if (current == '(' || current == '{' || current == '[') {
                stack.push(current);
            } else {
                if (stack.empty()) {
                    return false; // No matching opening parenthesis
                 }

                char top = stack.top();
                stack.pop();

                switch (current) {
                    case ')':
                        if (top != '(') return false;
                        break;
                    case ']':
                        if (top != '[') return false;
                        break;
                    case '}':
                        if (top != '{') return false;
                        break;
                    default:
                        return false; // Invalid character
                }
            }
        }

        return stack.empty(); // Check if there are unmatched opening parentheses
    }
};
