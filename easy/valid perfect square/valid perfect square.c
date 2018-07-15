// brutal force
// AC: 0 ms

bool isPerfectSquare(int num) {
    for(int i = 1 ; i <= 46340 ; i++){
        if(num == i*i) return true;
    }
    return false;
}
