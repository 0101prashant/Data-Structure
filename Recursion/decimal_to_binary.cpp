#include<iostream>



void decimalToBinary(int num)
{   
    if(num == 0)
        return;
        
    
    decimalToBinary(num >> 1);
    printf("%d",(num&1));
    
}

int main(){

    decimalToBinary(10);
    return 0;
}
