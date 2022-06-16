#include <iostream>

using namespace std;



int maximumCuts(int n, int a, int b, int c)
{
	if(n == 0)
		return 0;
	if(n <= -1)
		return -1;

	// int res = max( maximumCuts(n-a, a, b, c), 
	//           max(maximumCuts(n-b, a, b, c), 
	//           maximumCuts(n-c, a, b, c)));

    //or
    int r1 = maximumCuts(n-a, a, b, c);
    int r2 = maximumCuts(n-b, a, b, c);
    int r3 = maximumCuts(n-c, a, b, c);

    int res = max(r2,r3);
    res = max(r1,res);


    


	if(res == -1)
		return -1;

	return res + 1; 
}


int main() {
	
	int n = 5, a = 2, b = 3, c = 5;
	
	cout<<maximumCuts(n, a, b, c);
	
	return 0;
}
