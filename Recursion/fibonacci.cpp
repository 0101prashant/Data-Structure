#include <iostream>

using namespace std;

int fibonacci(int num){
    
    if(num <= 1){
        return num;
    }

    return fibonacci(num-1)+fibonacci(num-2);

}



int main(){
    int num=0;

    cout << "Enter number:" ;
    cin >>num;

    cout << "Fibonacci is: " << fibonacci(num);

    return 0;   
}
