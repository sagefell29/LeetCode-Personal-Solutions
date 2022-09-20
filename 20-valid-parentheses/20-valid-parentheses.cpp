class Solution {
public:
    bool isValid(string s) {
         stack<char> stk;
        map<char, char> charMap;
        charMap['}'] = '{';
        charMap[')'] = '(';
        charMap[']'] = '[';
        for(int i = 0; i < s.length(); ++i) {
            switch(s[i]) {
                case '(':
                case '{':
                case '[':
                    stk.push(s[i]);
                    break;
                case '}':
                case ']':
                case ')':
                    if(!stk.empty() && stk.top() == charMap[s[i]]) stk.pop();
                    else return false;
                    break;
                default: false;
        }
      }
      if(stk.empty()) return true;
      return false;
    }
};