class Solution {
public:
    void exchange(vector<char>& s,int i,int j)
    {
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    
    void reverseString(vector<char>& s) {
        int i=0,j=s.size()-1;
        while (i<=j)
        {
            exchange(s,i,j);
            i++;
            j--;
        }
    }
};