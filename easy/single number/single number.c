// use bit wise exclusive or.
// only the one appears one time will remain.

// e.g. 1010 and 1010 and 0110
// 1.  1010 ^ 1010 = 0000    and then   0000 ^ 0110 = 0110 (answer)
// 2.  0110 ^ 1010 = 1100    and then   1100 ^ 1010 = 0110 (answer)

// AC: 4 ms

int singleNumber(int* nums, int numsSize) {
    int ans = 0;
    for(int i = 0 ; i < numsSize ; i++){
        ans ^= nums[i];
    }
    return ans;
}
