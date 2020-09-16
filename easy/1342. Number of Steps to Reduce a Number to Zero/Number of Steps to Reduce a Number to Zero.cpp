class Solution {
public:
    int numberOfSteps (int num) {
        int ans = 0;
        if(num == 0) return 0;
        while(num != 1){
            ans += (num%2);
            num>>=1;
            ans++;
        }
        ans++;
        return ans;
    }
};
