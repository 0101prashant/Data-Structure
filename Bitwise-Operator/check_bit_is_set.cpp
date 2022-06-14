#include <iostream>


int bitIsSet(int val, int n){

    if( ((val >> n)&1) == 1){
        return 1;
    }
    else{
        return 0;
    }

}


int main(){

    int number  = 9;

    int n = 0;
    printf("number :%d 's %d th bis is %d\n\r",number,n,bitIsSet(number,n));

    n = 1;
    printf("number :%d 's %d th bis is %d\n\r",number,n,bitIsSet(number,n));

    n = 2;
    printf("number :%d 's %d th bis is %d\n\r",number,n,bitIsSet(number,n));
    
    n = 3;
    printf("number :%d 's %d th bis is %d\n\r",number,n,bitIsSet(number,n));
    
    n = 4;
    printf("number :%d 's %d th bis is %d\n\r",number,n,bitIsSet(number,n));


}

