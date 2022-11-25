#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void fill(int array[], int n){
    int s=1,r,k=0, l;
     while(1){
         r=rand()%15+1;
             for(int i=0; i<s; i++){
                 l=s;
                 if(r!=array[i]){
                     k++;
                 }
                 if(k==s){
                 array[i]=r;
                 l++;
                 }
             }
             s=l;
             if(s==n+1)
             break;
             k=0;
    }
}
void output(int array[], int n){
    for(int i=0; i<n; i++){
        printf("%d ",array[i]);
    }
}
int main(){
    srand(time(0));
    int n;
    scanf("%d",&n);
    int a[n];
    fill(a,n);
    output(a,n);
                          //j12-misol
    return 0;
}
