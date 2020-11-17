class Solution {
public:
    string nums[10] = {"0", "1", "2", "3", "4", "5", "6"};
    string convertToBase7(int num) {
        bool neg = (num<0);
        if(num == 0) return "0";
        num = abs(num);
        
        string ans;
        
        while(num > 0){
            ans = nums[num%7] + ans;
            num /= 7;
        }
        if(neg) ans = "-" + ans;
        return ans;
    }
};
