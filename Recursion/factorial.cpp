#include <iostream>

using namespace std;

int factorial(int number){
    
    if(number == 0){
        return 1;
    }
    
    return number* factorial(number-1);

}



int main(){
    int num=0;

    cout << "Enter number:" ;
    cin >>num;

    cout << "Factorial is: " << factorial(num);

    return 0;   
}
