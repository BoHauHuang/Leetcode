class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        int i, j, k, n = arr.size(), ans = 0;
        for(i = 0 ; i < n ; i++){
            for(j = i+1 ; j < n ; j++){
                for(k = j+1 ; k < n ; k++){
                    if(abs(arr[i]-arr[j]) <= a && abs(arr[j]-arr[k]) <= b && abs(arr[k]-arr[i]) <= c) ans++;
                }
            }
        }
        return ans;
    }
};
