// put all digit into array, then use pow function in math.h library    
// AC: 12ms
int reverse(int x) {
    // initial array
	int num[11], i;
    for(i = 0; i < 11 ; i++) num[i] = -2;
    
    // avoid overflow when dealing with negative number
    long long int input = x;
    
    // set the sign of number
    if(input < 0) num[0] = -1;
    else num[0] = 1;
    input /= num[0];
    
    long long int ans = num[0];
    int count = 0;
    
    // is a number with zero in the end? such as: 12300, 1230, etc.
    int zero_end = (input%10)? 0:1;
    
	while(input){
    	if(zero_end && input/10) zero_end = 0;
        if(!zero_end){
            num[count] = input%10;
            count++;
        }
        input/=10;
    }
    
	long long int total = 0, number;
    int exp = count-1, j;
    
    // do reverse process
    for(j = 0; j < count ; j++){
        number = num[j]*pow(10,exp);
        total+=number;
        exp--;
    }
    ans*=total;
    
    // check if the answer is overflow
    if(ans > pow(2,31)-1 || ans < -1*pow(2,31)) return 0;
    else return ans;
}
