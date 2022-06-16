


#include<iostream>

using namespace std;

int strLength(char str[], int index)
{
    if(str[index] == '\0'){
        
       // cout << "is zero index "<< index << endl; used to debug 
        return index;

    }
        
    return strLength(str, index+1);
}


int main(){

    char b[] = "";

    int a = strLength(b,0);

    cout << a ;

    return 0;
}
