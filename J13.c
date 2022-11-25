#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void input(int arr[], int n){
    for(int i=0; i<n; i++){
        arr[i]=rand()%41-20;
    }
}
void output(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    puts("");
}
int max(int arr[],int n){
    int temp1; 
    temp1=arr[0]; 
    for(int i=0; i<n; i++){
        if(temp1<arr[i]){
            temp1=arr[i];
        }
    }
    return temp1;
}
int min(int arr[],int n){
    int temp2; 
    temp2=arr[0]; 
    for(int i=0; i<n; i++){
        if(temp2>arr[i]){
            temp2=arr[i];
        }
    }
    return temp2;
}
void middle_sum(int arr[],int n){
    int a,b,sum=0;
    for(int i=0; i<n; i++){
        if(max(arr,n)==arr[i]){
            a=i;
            break;
        }
    }
    for(int i=0; i<n; i++){
        if(min(arr,n)==arr[i]){
            b=i;
            break;
        }
    }
    if(b>a){
        b=b+a;
        a=b-a;
        b=b-a;
    }
    for(int i=0; i<n; i++){
            if(i>b&&i<a){
                sum++;
            }
    }
    printf("%d",sum);
}
    
    //13-misol
    
int main(){
    srand(time(0));
    int n;
    scanf("%d",&n);
    int a[n];
    input(a,n);
    output(a,n);
    max(a,n);
    min(a,n);
    middle_sum(a,n);
    return 0;
}
