#include <stdio.h>

int arr[100], size, i,  sum = 0, option;
void reverse(int arr[],int i);
void printSum(int arr[],int i);


int main()  {
    printf("Enter array size : ");
    scanf("%d",&size);

    if(size>100){
        printf("not a valid input");
        return 0;
    }
    printf("enter the array elements : \n");
    for(i = 0; i<size;i++){
     scanf("%d", &arr[i]);  
    }

printf("enter what you want to do \n 1.sum of elements \n2.reverse of array \n3.both");
scanf("%d", &option);

if(option == 2){
reverse(arr,size);
}
else if(option == 1){
printSum(arr,size);
}
else if (option == 3){
reverse(arr,size);
    printSum(arr,size);
}
else{
    printf("wrong entry");
}    
    return 0;
}
void printSum(int arr[],int i){
 
    for(i = 0; i < size; i++) {
          sum = sum + arr[i]; }
    
    printf("Sum of the array is %d\n",sum);
}
void reverse(int arr[],int size) {
    for(int i = size - 1; i>=0;i--){
      printf("%d\t", arr[i]);
    }
}
