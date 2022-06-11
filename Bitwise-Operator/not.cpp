#include <iostream>

int main(){
    //here he use char because 
    //it has only 8bit
    //so it is easy to understand
    char a =  0b10111110; 

    a = ~a;
    // after not 
    //it became 0b01000001
    printf("%c",a);
    
    return 0;
}

