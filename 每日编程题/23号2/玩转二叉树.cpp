#include <stdio.h>
#include <stdlib.h>
typedef struct node* bintree;
typedef struct node{
	bintree left;
	bintree right;
	int data;
}tree;
bintree create(int n,int *pre,int *mid){
	//a前序遍历 b中序遍历 
	bintree p;
	int i;
	if(n==0){
		return NULL;
	}else{
		p=(bintree)malloc(sizeof(tree));
		p->data=pre[0];
		for(i=0;i<n;i++){
			if(mid[i]==pre[0]){
				break;
			}
		}
		p->left=create(i,pre+1,mid);
		p->right=create(n-1-i,pre+1+i,mid+i+1);
	}
	return p;
}
void jx(bintree bt){
	bintree p;
	if(bt!=NULL){
		if(bt->left!=NULL || bt->right!=NULL){
			p=bt->right;
			bt->right=bt->left;
			bt->left=p;
		}
	}else{
		return;
	}
	jx(bt->left);
	jx(bt->right);
}
void pp(bintree bt){
	int front=0,rear=1;
	bintree t[60];
	t[0]=bt;
	while(front<rear){
		if(t[front]!=NULL){
			if(t[front]==bt){
				printf("%d",t[front]->data);
			}else{
				printf(" %d",t[front]->data);
			}
			t[rear++]=t[front]->left;
			t[rear++]=t[front]->right;
		}
		front++;
	}
}
int main(){
	int n,pre[30],mid[30],i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&mid[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&pre[i]);
	}
	bintree bt;
	bt=create(n,pre,mid);
	jx(bt);
	pp(bt);
	return 0;
} 

