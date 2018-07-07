// find its index in array or find the index of num where num > target
// AC: 0 ms
int searchInsert(int* nums, int numsSize, int target) {
    for(int i = 0 ; i < numsSize ; i++){
        if(target == nums[i]) return i;
    }
    for(int i = 0 ; i < numsSize ; i++){
        if(target < nums[i]) return i;
    }
    return numsSize;
}
