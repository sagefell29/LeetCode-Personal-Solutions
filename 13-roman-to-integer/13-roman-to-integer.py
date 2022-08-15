class Solution:
    def romanToInt(self, s: str) -> int:
        r={'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        t,i=0,0
        while i<len(s)-1:
            if r.get(s[i+1])>r.get(s[i]):
                t+=(r.get(s[i+1])-r.get(s[i]))
                i+=2
            else:
                t+=r.get(s[i])
                i+=1
        if len(s)>=2:
            if r.get(s[-1])<=r.get(s[-2]):
                t+=r.get(s[-1])
        if len(s)==1:
            t=+r.get(s[0])
        return(t)