#include <iostream>
#include <vector>
using namespace std;

int isArrayIsSorted(int arr[], int n){

    for(int i =0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            return 0;
        }
    }

    return 1;

}


int main(){

    int n;
    cout << "Enter length of arrary" << endl;
    cin >> n;
    

    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Is sorted  " << isArrayIsSorted(arr,n);


}
