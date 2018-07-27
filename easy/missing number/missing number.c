// use an array to record the numbers
// AC: 4 ms

int missingNumber(int* nums, int numsSize) {
    int all_num = numsSize+1;
    int check_list[all_num];
    
    for(int i = 0 ; i < all_num ; i++) check_list[i] = 0;
    
    for(int i = 0 ; i < numsSize ; i++) check_list[nums[i]] = 1;
    
    for(int i = 0 ; i < all_num ; i++){
        if(!check_list[i]) return i;
    }
    return 0;
}
