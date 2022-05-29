
#include<stdio.h>
  
int search(int arr[], int N, int key)
{
    for(int i =0; i < N; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main()
{
    int N;
    printf("\n\rEnter size of array: ");
    scanf("%d",&N);

    int i, arr[N], key;

   for(i = 0; i < N; i++){
        printf("\n\rEnter element for index %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n\rEnter element to search: ");
    scanf("%d",&key); 

    int  result = search(arr,N,key);
    if(result != -1){
        printf("Element is found at index: %d",result);
    }
    else{
         printf("Element is not found");
    }
   

    return 0;
}


