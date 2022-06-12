#include <iostream>



//Brian Kernighan Algorithm 

int countBits(int number){
    int count  = 0;

    while(number > 0){
        
        number = number&(number -1);
        count++;

    }

    return count;
}



int main(){

    int number  = 8;


    
    printf("set bits in: %d, are: %d\n\r", number, countBits(number));
    
    number  = 10;
    printf("set bits in: %d, are: %d\n\r", number, countBits(number));

    number  = 11;
    printf("set bits in: %d, are: %d\n\r", number, countBits(number));

    number  = 2;
    printf("set bits in: %d, are: %d\n\r", number, countBits(number));
    




}
