// if n = 10, then n = 1010 in binary. Therefore: x^10 = x^(2^3) * x^(2^1)
// AC: 4 ms

double myPow(double x, int n) {
    if(x == 1) return 1.0;
    if(x == -1) return (n%2)? -1.0:1.0;
    double ans = 1;
    long long int abs_n = n;
    if(abs_n < 0) abs_n = -abs_n;
    while(abs_n>0){
        if((abs_n & 1) == 1) ans *= x;
            abs_n >>= 1;
            x*=x;
        }
    return (n<0)? 1/ans:ans;
}
