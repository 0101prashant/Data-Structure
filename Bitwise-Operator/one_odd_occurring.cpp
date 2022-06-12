#include <iostream>

using namespace std;

int findOdd(int arr[], int n){
    int res = 0;

    for(int i =0; i < n; i++){
        res =  res ^ arr[i];
    }

    return res;
}


int main(){

    int n = 9;

    int arr[9] = {2, 2, 3, 3, 5, 6, 6, 5, 7};

    int rs = findOdd(arr,n);

    cout << "odd " << rs;


    return 0;

}
