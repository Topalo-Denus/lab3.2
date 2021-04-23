#include <stdio.h>
#include <math.h>
int main(void){
float A,B,C;
float a,b,c;

printf("edit a=");
scanf("%f",&a);

printf("edit b=");
scanf("%f",&b);

printf("edit c=");
scanf("%f",&c);

if(a<b<c)
A=a*2,B=b*2,C=c*2;

if (a>b)
A=1/a,B=1/b,C=1/c;

else if (b>c)
A=1/a,B=1/b,C=1/c;

printf("\n A=%.2f",A);
printf("\n B=%.2f",B);
printf("\n C=%.2f",C);

return 0;
}

