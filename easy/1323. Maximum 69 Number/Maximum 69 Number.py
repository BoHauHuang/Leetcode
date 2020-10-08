class Solution(object):
    def maximum69Number (self, num):
        """
        :type num: int
        :rtype: int
        """
        sn = list(str(num))
        idx = len(sn)-1
        for n in range(len(sn)):
            if sn[n] == '6':
                idx = min(n, idx)
        sn[idx] = "9"
        
        return "".join(sn)