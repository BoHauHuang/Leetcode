// use an array to record the letters
// AC: 0 ms

char findTheDifference(char* s, char* t) {
    int len_s = strlen(s);
    int len_t = strlen(t);
    int list[26];
    for(int i = 0 ; i < 26 ; i++) list[i] = 0;
    
	for(int i = 0 ; i < len_s ; i++){
		int index = s[i] - 'a';
		list[index]++;
	}
	for(int i = 0 ; i < len_t ; i++){
		int index = t[i] - 'a';
		list[index]--;
	}
	for(int i = 0 ; i < 26 ; i++){
		if(list[i] != 0) return i+'a';
	}
    return 0;
}
