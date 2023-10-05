//Code to swap the first and last digit of a given number using array

#include<stdio.h>
#include<conio.h>

void main(){
    int num;
    printf("enter a number\n");
    scanf("%d ",&num);
    int arr[10];
    int length=sizeof(arr);
    int temp;

    while(num!=0){
        for(int i=3;i>=0;i--){
            int b = num%10;
            arr[i]=b;
            num=num/10;
        }
    }
 
    temp=arr[0];
    arr[0]=arr[3];
    arr[3]=temp;

    for(int i=0;i<4;i++){
        printf("%d",arr[i]);
    }
    getch();
}