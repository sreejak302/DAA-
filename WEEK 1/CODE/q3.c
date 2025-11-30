#include<stdio.h>
int sumcube(int n){
    int s =0 ;
    for(int i=0;i<=n;i++){
        s+=(i*i*i);
    }
    printf("%d\n",s);
    return s;
}
int main(){
    sumcube(6);
}
