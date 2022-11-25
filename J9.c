#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 void input(int arr[], int n){
     for(int i=0; i<n; i++){
         arr[i]=rand()%14+8;
     }
 }
 void output(int arr[], int n){
     for(int i=0; i<n; i++){
         printf("%d ",arr[i]);
     }
}
 void shift(int arr[], int n, int k){
     int temp[k];
     for(int i=0; i<k; i++){
         temp[i]=arr[i];
     }
     for(int i=k; i<n; i++){
         arr[i-k]=arr[i];
     }
     for(int i=n-k; i<n; i++){
         arr[i]=temp[i-n+k];
     }
     for(int i=0; i<n; i++){
         printf("%d ",arr[i]);
     }
     puts("");
}



int main(){
 srand(time(0));
 int n,k;
 scanf("%d",&n);
 int a[n];
 input(a,n);
 output(a,n);
 printf("nechtaga surasiz:"); scanf("%d",&k);
 shift(a,n,k);



 return 0;
}



