// calculate its number in binary, and represent it in decimal
// AC: 0 ms

class Solution {
public:
    int findComplement(int num) {
        int binary = 0;
        int exp = 0;
        while(num){
            binary += pow(2,exp)*((num%2)? 0:1);
            exp++;
            num/=2;
        }
        return binary;
    }
};
