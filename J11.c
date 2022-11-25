#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void input(int array[]){
    for(int i=0; i<10; i++){
        scanf("%d",&array[i]);
    }
}
void second_min(int array[]){
    int temp,temp1;
    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(array[i]>array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    temp1=array[0];
    for(int i=0; i<10; i++){
        if(temp1<array[i]){
            printf("%d ",array[i]);
            break;
        }
    }
}

            // j11-misol
int main(){
    int a[10];
    input(a);
    second_min(a);
   
    return 0;
}
