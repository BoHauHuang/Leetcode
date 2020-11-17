class Solution {
public:
    bool good(int n){
        return (n == 2 || n == 5 || n == 6 || n == 9);
    }
    bool invalid(int n){
        return (n == 3 || n == 4 || n == 7);
    }
    int rotatedDigits(int N) {
        int ans = 0;
        for(int i = 1 ; i <= N ; i++){
            int tmp = i;
            bool ok = false, first = true;
            while(tmp > 0){
                if(invalid(tmp%10)){
                    ok = false;
                    break;
                }
                ok |= good(tmp%10);
                tmp /= 10;
            }
            ans += ok;
        }
        
        return ans;
    }
};
