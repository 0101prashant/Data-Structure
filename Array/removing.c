
#include<stdio.h>
  
void remove_element(int arr[], int * N, int index)
{   
    for(int i = index; i < *N; i++){
        arr[i] = arr[i+1];
    }
    *N = *N-1;
}


int main()
{
    int N;
    printf("\n\rEnter size of array: ");
    scanf("%d",&N);

    int i, arr[N], index;

   for(i = 0; i < N; i++){
        printf("\n\rEnter element for index %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n\rEnter element index to remove: ");
    scanf("%d",&index); 

    remove_element(arr, &N, index);

    for(i = 0; i < N; i++)
        printf("%d ",arr[i]);

    return 0;
}
