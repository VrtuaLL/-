#include<stdio.h>
int main()
{
 float A,B;
 float C;
 scanf("%f%f",&A,&B);
 C=A/B;
 if(B<0)
 printf("%.0f/(%.0f)=%.2f",A,B,C);
 else if(B>0)
 printf("%.0f/%.0f=%.2f",A,B,C);
 else
 printf("%.0f/%.0f=Error",A,B);
 return 0;
}
