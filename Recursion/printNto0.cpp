#include <iostream>

using namespace std;

// this is also called tail recursion because
// it has nothing to do after recursiv call
void functionPrint(int number){
    
    if(number == 0){
        cout << number << " ";
        return;
    }

    cout << number << " ";
    functionPrint(number-1);

}



int main(){

    functionPrint(5);
    return 0;   
}
