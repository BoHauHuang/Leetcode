// AC: 0 ms
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int* ans = (int*)malloc((right-left+2)*sizeof(int));
    int* start = ans;
    int base, div, i;
    for(base = left ; base <= right ; base++){
        for(i = base ; i > 0 ; i /= 10){
            div = i % 10;
            if(div == 0 || base % div != 0) break;
        }
        if(i==0){
            *ans = base;
            ans++;
        }
    }
    *returnSize = ans-start;
    return start;
}
