// use log function and floor function
// AC: 4 ms
bool isPowerOfFour(int num) {
    if(num == 1) return true;
    if(num <= 3) return false;
    
    int exp = floor(log(num)/log(4));
    if(exp - log(num)/log(4)) return false;
    return true;
}
