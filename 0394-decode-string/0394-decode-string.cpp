class Solution {
public:
    string decodeString(string s) {
        stack<int> counts;
        stack<string> strings;

        string current = "";
        int num = 0;

        for (char ch : s) {

            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }

            else if (ch == '[') {
                counts.push(num);
                strings.push(current);

                current = "";
                num = 0;
            }

            else if (ch == ']') {
                int repeat = counts.top();
                counts.pop();

                string prev = strings.top();
                strings.pop();

                string temp = prev;

                while (repeat--) {
                    temp += current;
                }

                current = temp;
            }

            else {
                current += ch;
            }
        }

        return current;
    }
};