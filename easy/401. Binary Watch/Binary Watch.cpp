class Solution {
public:
    int count_bits(int n){
        int b = 0;
        while(n){
            b += (n&0x1);
            n >>= 1;
        }
        return b;
    }
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans;
        for(int h = 0 ; h < 12 ; h++){
            string tmp = "";
            for(int m = 0 ; m < 60 ; m++){
                if(count_bits(h)+count_bits(m) == turnedOn){
                    tmp = to_string(h);

                    tmp += ":";
                    
                    if(m <= 9) tmp +="0";
                    
                    tmp += to_string(m);
                    
                    ans.push_back(tmp);
                }
            }
        }
        return ans;
    }
};
