// count the consecutive 1, and assign maximum value simultaniously
// AC: 12 ms

int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int max = 0;
    int sum = 0;
    for(int i = 0 ; i < numsSize ; i++){
        if(nums[i]) sum++;
        
        if(!nums[i]) sum = 0;
        
        if(sum > max) max = sum;
    }
    return max;
}
