#include <stdio.h>
// khoi khai bao
 int maxmax(int a,int b,int c);
// khoi khai bao han main
int main(){
   int a,b,c;
  printf("nhap a:");
  scanf("%d",&a);
  printf("nhap b:");
  scanf("%d",&b);
  printf("nhap c:");
  scanf("%d",&c);
  int d=maxmax(a,b,c);
  printf("so lon nhat trong 3 chu so la %d %d %d  : %d",a,b,c,d);

}
