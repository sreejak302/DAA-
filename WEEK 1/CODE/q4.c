#include<stdio.h>
int fact(int x){
if(x==0) return 1;
if(x==1) return 1;
else{ 
return x*fact(x-1);
}
}
int main(){
int x ;
printf("enter the no.: ");
scanf("%d",&x);
printf("%d",fact(x));
printf("\n");
}
