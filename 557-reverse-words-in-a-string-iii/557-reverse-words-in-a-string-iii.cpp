class Solution {
public:
    string reverseString(string s) {
        int i=0,j=s.length()-1;
        while (i<=j)
        {
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
        }
        return s;
    }
    
    string reverseWords(string s) {
        string ans="";
        string temp="";
        for (char i:s)
        {
            if (i==' ')
            {
                ans= ans+reverseString(temp);
                ans=ans+" ";
                temp="";
            }
            else temp+=i;
        }
        ans=ans+reverseString(temp);
        return ans;
    }
};