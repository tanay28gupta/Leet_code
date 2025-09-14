class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        for ass in t:
            if t.count(ass) != s.count(ass):
                return ass