// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int r = n, l = 0, mid;
        while(l <= r){
            mid = l+(r-l)/2;
            if(!isBadVersion(mid)) l = mid+1;
            else r = mid-1;
        }
        return l;
    }
};
