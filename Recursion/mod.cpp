#include<iostream>

using namespace std;

// this is mod using recursion thats why i did not use % operator here.
int mod(int num, int den)
{  
    
    if(num-den < 0){
        return num;
    }

    return mod(num-den,den);
    
}

int main(){

    int a = mod(7,3);

    cout << a ;

    return 0;
}
