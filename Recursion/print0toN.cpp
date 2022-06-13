#include <iostream>

using namespace std;

void functionPrint(int number){
    
    if(number == 0){
        cout << number << " ";
        return;
    }
    
    functionPrint(number-1);

    cout << number << " ";

}



int main(){

    functionPrint(5);
    return 0;   
}
