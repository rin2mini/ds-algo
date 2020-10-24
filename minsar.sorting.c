#include<stdio.h>
int main(){
    int arr[5],i=0,n=0,temp=0;
    printf("Enter the elements : \n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
printf("The array you have entered is : \n");
    for(i=0;i<5;i++){
        printf("%d  ",arr[i]);
    }
    for(i=0;i<5-1;i++){
        for(i=0;i<5-1-1;i++,n++){
            if(arr[n]>arr[n+1]){
                temp=arr[n];
                arr[n]=arr[n+1];
                arr[n+1]=temp;
            }
        }
    }
    printf("\nThe sorted array are : \n");
    for(i=0;i<5;i++){
        printf("%d  ",arr[i]);
    }
    
}