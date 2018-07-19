// simple way
// AC: 20 ms

int arrangeCoins(int n) {
    int i = 1;
    while(1){
        if(n >= i){
            n-=i;
            i++;
        }
        else return i-1;
    }
    return 0;
}
