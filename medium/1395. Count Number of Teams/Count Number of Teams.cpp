class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n = rating.size(), ans = 0;
        int rmin[n], rmax[n];
        memset(rmin, 0, sizeof(rmin));
        memset(rmax, 0, sizeof(rmax));
        for(int i = n-2 ; i >= 0 ; i--){
            for(int j = i+1 ; j < n ; j++){
                if(rating[i] < rating[j]){
                    ans += rmax[j];
                    rmax[i]++;
                }
                else if(rating[i] > rating[j]){
                    ans += rmin[j];
                    rmin[i]++;
                }
            }
        }
        return ans;
    }
};
