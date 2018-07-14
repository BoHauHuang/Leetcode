// e.g. a = 123
// 1*100 + 2*10 + 3*1
// 100, 10 and 1 divided by 9 will remain 1
// so we use (1*100 + 2*10 + 3*1) / 9 to have the result of remain (1*1 + 2*1 + 3*1) = (1 + 2 + 3) = 6

// AC: 4 ms

int addDigits(int num) {
    if(!num) return 0;
    return (num%9)? num%9 : 9;
}
