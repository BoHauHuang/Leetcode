// use exclusive or, and then count the bits of 1
// AC: 4 ms

int hammingDistance(int x, int y) {
    return bitCount(x^y);
}

int bitCount(int n){
    int count = 0;
    while(n){
        count += (n & 1);
        n >>= 1;
    }
    return count;
}
