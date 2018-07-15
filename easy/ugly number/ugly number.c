// AC: 4 ms

bool isUgly(int num) {
    if(num<=0) return false;
    
    while(!(num%5)) num/=5;
    while(!(num%3)) num/=3;
    while(!(num%2)) num/=2;
    
    return (num==1);
}
