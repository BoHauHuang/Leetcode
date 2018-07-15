// AC: 8 ms 

int majorityElement(int* nums, int numsSize) {
    int max = 0;
    int max_index = 0;
    int count[numsSize];
    int i, j, init;
    
    for(init = 0 ; init < numsSize ; init++) count[init] = 1;
    
    for(i = 0 ; i < numsSize ; i++){
        if(count[i] == 1){
            for(j = i ; j < numsSize ; j++){
                if(nums[i] == nums[j]) count[i]++;
            }
            if(count[i] > max){
                max = count[i];
                max_index = i;
            }
            int k;
            for(k = i ; k < numsSize ; k++){
                if(nums[k] == nums[i]) count[k] = count[i];
            }
        }
    }
    return nums[max_index];
}
