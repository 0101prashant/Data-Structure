#include<stdio.h>
  
void insert(int arr[], int *N, int pos, int element)
{
    for(int i = *N; i >= pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = element;
    *N = *N+1;
}

int main()
{
    int N;
    printf("\n\rInseritng into array");
    printf("\n\rEnter size of array: ");
    scanf("%d",&N);

    int i, arr[N], pos, element;

    for(i = 0; i < N; i++){
        printf("\n\rEnter element for index %d: ",i);
        scanf("%d",&arr[i]);
    }
       
    
    printf("\n\rEnter position & element: ");
    scanf("%d%d",&pos, &element);

    insert(arr, &N, pos, element);

    for(i = 0; i < N; i++)
        printf("%d ",arr[i]);

    return 0;
}
