#include <iostream>
using namespace std;




//a, e, i, o, u,



int isVovel(char c){
    
    if(c == 'a' || c == 'e' ||  c == 'i' ||  c == 'o' || c == 'u'){
        return 1;
    }
    else{
        return 0;
    }
    
    
}


int countVowels(char str[], int n)
{
   if(n < 0){
       return 0;
   }
   return isVovel(str[n]) + countVowels(str,n-1);
}




int main(){
    
    char A[] = "abeio";
    char B[] = "ieroiwqu";
    cout << "Voval count in "<< A << " : " << countVowels(A,4) << endl;

    
    cout << "Voval count in "<< B << " : " << countVowels(B,7) << endl;

    return 0;   
}
