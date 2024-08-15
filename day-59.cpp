//coding ninja (encode the message) 
#include <bits/stdc++.h> 
string encode(string &message)
{
    //   Write your code here.
    int count =1;
    string encode = "";
    for(int i=1; i<= message.length(); i++){
        if (message[i]==message[i-1]){
            count++;
        }
        else{
            encode += message[i-1];
            encode += to_string(count);
            count=1;

        }
    }
    return encode;
}
