#include <iostream>

using namespace std;

bool isPowerOf2(int num){
    
    return  ( (num != 0) &&  ( (num & (num-1)) == 0) ) ;
}


int main(){

    int n = 0;

    cout << n <<" is power of 2: " << isPowerOf2(n) << endl;


    n = 4;

    cout << n <<" is power of 2: " << isPowerOf2(n) << endl;

    n = 10;
    cout << n <<" is power of 2: " << isPowerOf2(n) << endl;

    n =16;
    cout << n <<" is power of 2: " << isPowerOf2(n) << endl;

   
    return 0;

}
