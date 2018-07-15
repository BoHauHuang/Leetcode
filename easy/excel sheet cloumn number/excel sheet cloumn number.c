// AC: 4ms

int titleToNumber(char* s) {
    int sum = 0;
	int len = strlen(s)-1;
	while(*s){
		sum += pow(26, len--)*(*s-'A'+1);
		s++;
	}
    return sum;
}
