//codingninja-Beautiful String
int makeBeautiful(string& str) { 
    int n = str.size();
    int countPattern1 = 0; 
    int countPattern2 = 0;  

    for (int i = 0; i < n; ++i) {
      
        if (i % 2 == 0 && str[i] != '0') countPattern1++;
        if (i % 2 == 1 && str[i] != '1') countPattern1++;

       
        if (i % 2 == 0 && str[i] != '1') countPattern2++;
        if (i % 2 == 1 && str[i] != '0') countPattern2++;
    }


    return min(countPattern1, countPattern2);


}
