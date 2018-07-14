// if the current bit is 1, it and next bit can be represented by 10 or 11, so we add two to index
// otherwise, it can only represented by 0, so we add one to index
// and we check the final two bits, if the current bit is 0, then it can be represented by one 0

// AC: 4 ms 

bool isOneBitCharacter(int* bits, int bitsSize) {
    int i;
    for(i = 0 ; i < bitsSize-2 ;){
        i += (bits[i]==1)? 2:1;
    }
    return bits[i]==0;
}
