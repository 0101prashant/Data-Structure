#include <iostream>
#include <math.h>

using namespace std;



void printPowerSet(string s){
    int len = s.length();

    int powsize = pow(2,len);

    for(int cnt = 0; cnt < powsize; cnt++){
        for(int j =0; j < len; j++){
            if(  (cnt & ( 1 << j)) != 0){
                cout << s[j];
            }
        }
        cout << endl;

    }

}


int main(){
    string  s = "ABC";
    printPowerSet(s);
    return 0;
}
