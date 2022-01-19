#include<stdio.h>
#include<math.h>
int main()
{
	int N,i;
	int H,W,z;
    scanf("%d",&N);
	for(i=1;i<=N;i++){
    scanf("%d%d",&H,&W);
    z=(H-100)*1.8;
	if(fabs(z-W)<(z*0.1))
	printf("You are wan mei!\n");
	else if(z>W)
	printf("You are tai shou le!\n");
	else	
	printf("You are tai pang le!\n");
	}
 } 

