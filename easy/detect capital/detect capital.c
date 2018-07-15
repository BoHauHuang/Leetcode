// check first two letters
//because only word that first two letters are "All captials", "Capital + not capitals", "All not capitals" are right
// AC: 4 ms

bool detectCapitalUse(char* word) {
    bool all_capital = false;
    bool head_capital = false;
    bool all_not_capital = false;
    
    if('A' <= *word && *word <= 'Z'){
        word++;
        if('a' <= *word && *word <= 'z') head_capital = true;
        else all_capital = true;
    }
    else if('a' <= *word && *word <= 'z'){
        word++;
        if('a' <= *word && *word <= 'z') all_not_capital = true;
        else if('A' <= *word && *word <= 'Z') return false;
    }
    else return false;
    
    word++;

    while(*word){
        
        if(all_not_capital && 'A' <= *word && *word <= 'Z') return false;
        if(head_capital && 'A' <= *word && *word <= 'Z') return false;
        if(all_capital && 'a' <= *word && *word <= 'z') return false;
        
        word++;
    }
    return true;
}
