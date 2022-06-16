#include <iostream>

using namespace std;

void printSubset(string s, string curr, int i){


     if(i == s.length()){
        cout << curr << endl;
        return;
     }

     printSubset(s,curr,i+1);
     printSubset(s, curr+s[i], i+1);

}



int main(){
   
    string s;

    cout << "Enter string:" ;
    cin >>s;

    cout << "=============";
    cout << endl;

    printSubset(s,"",0);

    return 0;   
}
