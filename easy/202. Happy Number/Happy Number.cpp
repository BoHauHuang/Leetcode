class Solution {
public:
    bool isHappy(int n) {
        map<int, int> vis;
        while(n > 1){
            int x = n;
            if(!vis[x]) vis[x] = 1;
            else return false;
            n = 0;
            while(x){
                n += ((x%10)*(x%10));
                x /= 10;
            }
        }
        return (n==1);
    }
};
