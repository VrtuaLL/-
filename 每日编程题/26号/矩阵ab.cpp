#include <stdio.h>
int main()
{
	int n1,m1,n2,m2,a[1000][1000],b[1000][1000];
	scanf("%d %d",&n1,&m1);
	for(int i=1;i<=n1;i++){
		for(int j=1;j<=m1;j++) scanf("%d",&a[i][j]);
	}
	scanf("%d %d",&n2,&m2);
	for(int i=1;i<=n2;i++){
		for(int j=1;j<=m2;j++) scanf("%d",&b[i][j]);
	}
	if(m1!=n2) printf("Error: %d != %d",m1,n2);
	else{
		printf("%d %d\n",n1,m2);
		for(int i=1;i<=n1;i++){
			for(int j=1;j<=m2;j++){
				int s=0;
				for(int k=1;k<=m1;k++) s+=a[i][k]*b[k][j];
				printf("%d",s);
				if(j!=m2) printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}

