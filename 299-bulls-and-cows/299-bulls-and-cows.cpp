class Solution {
public:
    string getHint(string secret, string guess) {
        int x=0,y=0;
        string xs,ys,ans;
        unordered_map<char,int> s,g,bulls;
        for (int i=0;i<secret.size();i++) if (secret[i]==guess[i]) 
        {
            x++;
            bulls[secret[i]]++;
            cout<<secret[i]<<" is a bull with count "<<bulls[secret[i]]<<endl;
        }
        cout<<"End of loop 1"<<endl;
        for (char i:secret) s[i]++;
        for (char i:guess) g[i]++;
        for (auto i:s) 
        {
            if (s[i.first]>0 && g[i.first]>0 && bulls[i.first]==0) 
            {
                if (s[i.first]>g[i.first]) y+=g[i.first];
                else y+=s[i.first];
                cout<<i.first<<" is cow with a count "<<s[i.first]<<endl;
            }
            else if (s[i.first]>=1 && g[i.first]>=1 && bulls[i.first]>=1) 
            {
                if (s[i.first]>g[i.first]) y+=g[i.first]-bulls[i.first];
                else y+=s[i.first]-bulls[i.first];
                cout<<i.first<<" is cow with a count "<<i.second-bulls[i.first]<<endl;
            }
        }
        xs=to_string(x);
        ys=to_string(y);
        ans=xs+"A"+ys+"B";
        return ans;
    }
};