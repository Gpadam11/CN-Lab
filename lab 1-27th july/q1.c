#include <stdio.h>
int swapNos(int *n1, int *n2){
int temp=*n1;
*n1=*n2;
*n2=temp;
}
int main(){
int n1,n2;
printf("Enter the numbers");
scanf("%d", &n1);
scanf("%d", &n2);
swapNos(&n1, &n2);
printf("Swapped numbers are:%d , %d", n1,n2);
return 0;
}