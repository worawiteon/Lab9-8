#include <stdio.h>
#include <math.h>
int choose,a,b,i,ansi=1;
float ansf=1,c;
int input() {
  printf("Please Enter Number 1 : "); scanf("%d",&a);
  printf("Please Enter Number 2 : "); scanf("%d",&b);
  return a & b;
}
void pow_positive() {
  input();
  for(i=1;i<=b;i++) ansi *= a;
  printf("\nX power Y is %d\n\n",ansi);
}
void pow_negative() {
  input();
  b *= -1;
  for(i=1;i<=b;i++) ansf *= a;
  printf("\nX power Y is %.4f\n\n",1/ansf);
}
void pow_float() {
  printf("Please Enter Number 1 : ");
  scanf("%d",&a);
  printf("Please Enter Number 2 : ");
  scanf("%f",&c);
  ansf = pow(a,c);
  printf("\nX power Y is %.4f\n\n",ansf);
}
int main(void) {
  do {
    printf("\n----------------------------------------\n");
    printf("\t\t\t   Menu Program\n");
    printf("1.Calculate X Power Y ( y is positive )\n");
    printf("2.Calculate X Power Y ( y is negative )\n");
    printf("3.Calculate X Power Y ( y is float\n");
    printf("4.Exit Program\n");
    printf("----------------------------------------\n");
    printf("Please Enter Number [ 1 - 4 ] : ");
    scanf("%d",&choose);
    printf("\n");
    switch(choose) {
      case 1 : pow_positive(); break;
      case 2 : pow_negative(); break;
      case 3 : pow_float(); break;
      case 4 : break;
    }
  }while(choose<1 || choose>4);
  return 0;
}