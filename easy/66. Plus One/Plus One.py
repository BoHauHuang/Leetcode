class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        input_len = len(digits)
        num = ""
        ans = []
        
        for d in digits:
            num += str(d)
        
        result = int(num)+1
        add_one = "0"*(input_len-len(str(result)))+str(result)
        
        for d in add_one:
            ans.append(d)
        
        
        return ans