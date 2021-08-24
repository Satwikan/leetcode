class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        store = { 2:['a', 'b', 'c'], 3:['d', 'e', 'f'], 4:['g', 'h', 'i'], 5:['j', 'k', 'l'], 6:['m', 'n', 'o'], 7: ['p', 'q', 'r', 's'], 8:['t', 'u', 'v'], 9:['w', 'x', 'y', 'z']}
        lst = []
        def backtrack(i, curStr):
            if (len(curStr) == len(digits)):
                lst.append(curStr)
                return
            
            for ch in store[int(digits[i])]:
                backtrack(i + 1, curStr + ch)
                
        if digits: backtrack(0, "")
        
        return lst