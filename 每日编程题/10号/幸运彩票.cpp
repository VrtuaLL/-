#include<stdio.h>
#include<math.h>
int main(){
	int n,x,i,j,sum1,sum2;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		j=0;sum1=sum2=0;//j���ڼ�¼λ�� 
		while(x!=0){
			j++;
			if(j<=3){
				sum1+=x%10;//����λ��� 
				x/=10;
			}
			else{
				sum2+=x%10;//ǰ��λ��� 
				x/=10;
			}
		}
		if(sum1==sum2){
			printf("You are lucky!\n");
		}
		else{
			printf("Wish you good luck.\n");
		}
	}
}
