


#include <iostream>

using namespace std;


int isPalindrome(char str[], int start, int end)
{
    if(start >= end){
        return 1;
    }
    if(str[start] != str[end]){
        return 0;
    }
    return isPalindrome(str, start+1, end-1);
}





int main(){
    
    char A[] = "ABCD";
    char B[] = "WEEW";
    cout << "ABCD is plindrome: " << isPalindrome(A,0,3) << endl;

    
    cout << "WEEW is plindrome: " << isPalindrome(B,0,3) << endl;

    return 0;   
}
