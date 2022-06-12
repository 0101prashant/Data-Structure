#include <iostream>


int bitIsSet(int val, int n){

    if( ((val >> n)&1) == 1){
        return 1;
    }
    else{
        return 0;
    }

}


int countBits(int number){
    int count  = 0;

    for(int i =0; i < sizeof(int)*8; i++){
        if(bitIsSet(number, i) == 1){
            count++;
        }
        
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
