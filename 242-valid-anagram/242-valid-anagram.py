class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s1=Counter(s)
        t1=Counter(t)
        if s1==t1: return True
        else: return False