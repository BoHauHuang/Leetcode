// put each digits into array, then compare from front and from end.
// AC: 112ms
bool isPalindrome(int x) {
    if(x<0) return false;
    else if(x >= 0 && x <= 9) return true;
    else{
        int num[10]={0}, index = -1;
        for(int i = 0 ; i < 10 ; i++){
            if(x){
                num[i] = x%10;
                x/=10;
                index++;
            }
            else break;
        }
        if((index+1)){
            int mid = ((index+1)%2)? index/2: (index-1)/2;
            if(mid == 0 && index == 1){
                if(num[0] != num[1]) return false;
                else return true;
            }
            else{
                for(int j = 0 ; j < mid ; j++){
                    if(num[j] != num[index-j]) return false;
                }
            	if((index+1)%2) return true;
            	else{
            		if(num[mid] != num[mid+1]) return false;
            		else return true;
				}
			}
        }
    }
    return 0;
}
