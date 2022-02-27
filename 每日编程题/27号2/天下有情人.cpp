#include<stdio.h>
typedef struct node{
	char sex;
	int fa;
	int mu;
}r; 
r a[100005];
int home[100005];

int init();
int find(int t);
void un(int a,int b);
int dfs(int p,int q,int age);
int main(){
	init();
	int n,k;
	int i;
	int x;
	scanf("%d",&n);
	char sex;
	int id,father,mather;
	for(i=0;i<n;i++){
		scanf("%d %c %d %d", &id, &sex, &father, &mather);
        a[id].fa = father;
        a[id].sex = sex;
        a[id].mu = mather;
        un(id, father);
        un(id, mather);
        if (father != -1)
            a[father].sex = 'M';
        if (mather != -1)
            a[mather].sex = 'F';	
	}
	int p,q;
	scanf("%d",&k);
	while(k--){
		scanf("%d %d",&p,&q);
		if(a[p].sex==a[q].sex){
			printf("Never Mind\n");
		}else{
			if(find(p)!=find(q)){
				printf("Yes\n");
			}else{
				if(dfs(p,q,1)){
					printf("Yes\n");
				}else{
					printf("No\n");
				}
			}
		}
	}
	
}
int init()
{
	for(int i=0;i<100005;i++){
		home[i]=i;
		a[i].fa=-1;
		a[i].mu=-1;
	}
}
int find(int t)
{
	if(t==home[t]){
		return t;
	}else{
		return home[t]=home[home[t]];
	}
}
void un(int a,int b)
{
	if(b==-1){
		return;
	}
	a=find(a);
	b=find(b);
	if(a>b){
		home[a]=b;
	}else{
		home[b]=a;
	}
	
}
int dfs(int p,int q,int age)
{
	if(p==-1||q==-1){
		return 1;
	}
	if(age>5){
		return 1;
	}
	if(p==q){
		return 0;
	}else{
		return dfs(a[p].fa,a[q].fa,age+1)&&dfs(a[p].fa,a[q].mu,age+1)&&dfs(a[q].fa,a[p].mu,age+1)&&dfs(a[p].mu,a[q].mu,age+1);
	}
}

