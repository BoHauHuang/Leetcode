// solved by brute force  152ms
int* twoSum(int* nums, int numsSize, int target) {
	static int ans[2];
    int i = 0,j;
    for(; i < numsSize ; i++){
        for(j = i+1 ; (j < numsSize && j != i) ; j++){
            if(nums[i]+nums[j] == target){
                ans[0] = i;
                ans[1] = j;
                return ans;
            }
        }
    }
    return 0;
}
