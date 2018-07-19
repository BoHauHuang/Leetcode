// AC: 4 ms

char* reverseString(char* s) {
    int len=strlen(s);
    
    char* ans=NULL;
    ans = (char*)calloc(len+1, sizeof(char));
    
    for(int i=0; i< len; i++)
        ans[i]=s[len-1-i];
    
    
    return ans;
}
