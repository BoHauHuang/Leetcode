// 3^19 is the largest number can fit in "int"
// any number can divide 3^19 without remainder is power of 3
// AC: 52 ms

bool isPowerOfThree(int n) {
    if(n <= 0) return false;
    return !(1162261467%n);
}
