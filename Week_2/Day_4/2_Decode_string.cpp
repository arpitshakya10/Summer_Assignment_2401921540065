class Solution {
public:
    string decodeString(string s) {
        stack<int> nums;
        stack<string> strs;
        string curr = "";
        int num = 0;
        for(char ch : s) {
            if(isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }
            else if(ch == '[') {
                nums.push(num);
                strs.push(curr);
                num = 0;
                curr = "";
            }
            else if(ch == ']') {
                int k = nums.top();
                nums.pop();

                string temp = curr;
                curr = strs.top();
                strs.pop();

                while(k--) {
                    curr += temp;
                }
            }
            else {
                curr += ch;
            }
        }

        return curr;
    }
};
