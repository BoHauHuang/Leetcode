// check list
// AC: 0 ms

bool isAnagram(char* s, char* t) {
    if(strlen(s) != strlen(t)) return false;
    
    int list[26]={0};
    while(*s){
        list[*s-'a']++;
        list[*t-'a']--;
        s++;
        t++;
    }
    int i;
    for(i = 0 ; i < 26 ; i++){
        if(list[i] != 0) return false;
    }
    return true;
}
