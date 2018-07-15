// by binary search, limited with maximum sqare 46340*46340 in the range of "int"
// AC: 12 ms

int mySqrt(int x) {
    if(!x) return 0;
    int left = 1;
    int right = (x>46340)? 46341:x;
    while(left <= right){
        int mid = (left + right) / 2;
        if(left == right-1) return left;
        if(mid*mid > x) right = mid;
        if(mid*mid < x) left = mid;
        if(mid*mid == x) return mid;
    }
    return left;
}
