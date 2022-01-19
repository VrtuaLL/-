#include <stdio.h>
#include<string.h>
int main(){
	int num1[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char num3[18];
	char num4[11]={'1','0','X','9','8','7','6','5','4','3','2'};
	int N=0,sum=0,flag=0,n=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		sum=0;       
		scanf("%s",num3);
		for(int j=0;j<17;j++){           
			sum+=(num3[j]-'0')*num1[j];
		}
		n=sum%11;   
		if(num3[17]!=num4[n]){
			flag=1;
			printf("%s\n",num3); 
		}
		}
	if(flag==0) printf("All passed\n");
	return 0;
}

