#include<stdio.h>
int common(int a,int b);
int main(){
    int i,a,b,a1,b1,n;
    int v,t,x;
    scanf("%d",&n);
        scanf("%d/%d",&a,&b);
    for(i=1;i<n;i++){
    	scanf("%d/%d",&a1,&b1);
    	a=a*b1+b*a1;
    	b=b*b1;
    	v=common(a,b);
    	a=a/v;
    	b=b/v;
	}
    if(b==1) printf("%d",a);
    
    else if(a>b){
    	t=a%b;
    	x=a/b;
    	if(t==0) printf("%d",x);
    	else printf("%d %d/%d",x,t,b);
	}
	else printf("%d/%d",a,b);
	return 0;
}
int common(int a,int b){
	int t;
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
	}
	return a;
}

