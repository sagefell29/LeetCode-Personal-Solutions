class Solution {
public:
    string stgen(string s)
    {
        int i=0;
        string ans="";
        stack<char> ss;
        while (i<s.length())
        {
            if (s[i]=='#' && !ss.empty()) ss.pop();
            else if (s[i]!='#') ss.push(s[i]);
            i+=1;
        }
        while (!ss.empty())
        {
            if (ss.top()!='#')
            {
                ans+=ss.top();
                ss.pop();
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    
    bool backspaceCompare(string s, string t) {
        string s1=stgen(s),t1=stgen(t);
        cout<<s1<<" "<<t1<<endl;
        return s1==t1;
    }
};