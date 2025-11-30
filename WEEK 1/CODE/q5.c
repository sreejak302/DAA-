#include<stdio.h>
int main(){
int arr[3][3] = {{0, 1, 2}, {4, 5, 6}, {8, 9, 10}} ;
printf ("MATRIX\n");
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 3; j++) {
printf("%d ",arr[i][j]);
}
printf("\n");
}
printf ("TRANSPOSE\n");
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 3; j++) {
printf("%d ",arr[j][i]);
}
printf("\n");
}
}
