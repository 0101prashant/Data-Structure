#include<iostream>

using namespace std;

void reverse(char str[], int i, int n)
{
    if(i >= n-1){
        return;
    }

    char temp  = str[i];
    str[i] = str[n-1];
    str[n-1] = temp;

    
    reverse(str,i+1,n-1);
}


int main(){

    char b[] = {'a','b','c','d'};

    int n = 4;

    reverse(b,0,n);

    for(int i =0; i < n; i++){
        cout << b[i];
    }
    

    return 0;
}
