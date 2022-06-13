#include <iostream>

using namespace std;

bool isPalindrome(string str, int start, int end){
    
    
    if(start >= end)
        return true;

    return ( (str[start] == str[end]) && isPalindrome(str, start+1, end-1) );

}


int reverseNumber(int num, int rs){
    if(num == 0)
      return rs;
     
    rs = rs *10 + num%10;
    //cout << rs << endl;
    return reverseNumber(num/10, rs);
}


bool isPalindrome(int n){
    int rev = reverseNumber(n,0);
    return (rev == n);
}





int main(){
    string test;

    cout << "Enter String:" ;
    cin >>test;
    cout << "is palindrome: " << isPalindrome(test,0, test.length()-1);

    int n;
    cout << "\n\rEnter Integer:" ;
    cin >>n;
    cout << "is palindrome: " << isPalindrome(n);

    return 0;   
}
