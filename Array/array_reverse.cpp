#include <iostream>
#include <vector>
using namespace std;

void reverseAnArray(int arr[], int n){
    int s =0,e =n-1;
    while (s <= e )
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;      
        s++;
        e--;
    }

}


void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){

    int n;
    cout << "Enter length of arrary" << endl;
    cin >> n;
    

    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

   

    cout << "before reverse :";
    printArray(arr,n);


    reverseAnArray(arr,n);

    cout << "after reverse :";
    printArray(arr,n);


}
