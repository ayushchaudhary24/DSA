class Solution {
public:
    int calculate(string s) {

        stringstream ss(s);

        stack<int> signs;

        int ans = 0;
        int sign = 1;

        char ch;

        while(ss >> ch) {

            if(isdigit(ch)) {

                ss.putback(ch);

                long long num;
                ss >> num;

                ans += sign * num;
            }

            else if(ch == '+') {
                sign = signs.empty() ? 1 : signs.top();
            }

            else if(ch == '-') {
                sign = signs.empty() ? -1 : -signs.top();
            }

            else if(ch == '(') {

                signs.push(sign);
            }

            else if(ch == ')') {

                signs.pop();
            }
        }

        return ans;
    }
};