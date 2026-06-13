class Solution {
public:
    string decodeString(string s) {
        stack<int> numberStack;
        stack<string> stringStack;

        string curr = "";
        int num = 0;

        for(char ch : s) {
            if(isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }
            else if(ch == '[') {
                numberStack.push(num);
                stringStack.push(curr);

                num = 0;
                curr = "";
            }
            else if(ch == ']') {

                int repeat = numberStack.top();
                numberStack.pop();

                string prev = stringStack.top();
                stringStack.pop();

                string temp = "";

                while(repeat--) {
                    temp += curr;
                }
                curr = prev + temp;
            }
            else {
                curr += ch;
            }
        }
        return curr;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(n)
