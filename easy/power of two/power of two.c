// if n is not even, but it is 1, then will return true  => (n==1)
// if n can be divided by 2, but it is zero, then return false  => ((!n)? false : isPowerOfTwo(n/2))
// if n can be divided by 2, but it is not zero , then n divided by 2 and call the function again
// AC: 4 ms

bool isPowerOfTwo(int n) {
    return (n%2)? n==1 : (!n)? false : isPowerOfTwo(n/2);
}
