// AC: 0 ms

bool checkRecord(char* s) {
    int absent = 0;
    int continuous_late = 0;
    int late = 0;
    
    while(*s != '\0'){
    	if(*s == 'P'){
            late = 0;
            continuous_late = 1;
        }
        if(*s == 'A'){
            late = 0;
			absent++;
        	continuous_late = 1;
		}
        if(*s == 'L' && !continuous_late){
        	late = 1;
			continuous_late = 1;	
		}
        else if(*s == 'L' && continuous_late) late++;
        if(late > 2) return false;
        if(absent > 1) return false;
        s++; 
    }
    return true;
}
