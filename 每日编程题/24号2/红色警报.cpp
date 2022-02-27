#include<stdio.h>
int city[550];
int f[5500];
int x[5500],y[5500];
void init(int n);
int find(int x);
void bing(int a,int b);
int n,m;

int main()
{
	scanf("%d %d",&n,&m);
	init(n);
	for(int i=0;i<m;i++){
		scanf("%d %d",&x[i],&y[i]);
		bing(x[i],y[i]);
	}
	int count=0;
	for(int i=0;i<n;i++){
		if(city[i]==i){
			count++;
		}
	}
	int k;
	int cnt=0;
	scanf("%d",&k);
	int t=k;
	while(k--){
		int z;
		scanf("%d",&z);
		f[z]=1;
		init(n);
		for(int j=0;j<m;j++){
			if(f[x[j]]||f[y[j]]){
				continue;
			}
			bing(x[j],y[j]);
		}
		int cnt=0;
		for(int i=0;i<n;i++){
			if(city[i]==i){
				cnt++;
			}
		}
		if(count==cnt||cnt==count+1){
			printf("City %d is lost.\n", z);
		}else{
			printf("Red Alert: City %d is lost!\n", z);
		}
		count=cnt;
		
	}
	if(t==n){
		printf("Game Over.\n");
	}
	return 0;	
} 
void init(int n)
{
	for(int i=0;i<n;i++){
		city[i]=i;
	}
}
int find(int x)
{
	while(x!=city[x]){
		x=city[x];
	}
	return x;
}
void bing(int a,int b)
{
	a=find(a);
	b=find(b);
	if(a>b){
		city[a]=b;
	}else{
		city[b]=a;
	}
}

