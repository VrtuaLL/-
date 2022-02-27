#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct stu{
	char s[10];
	int num;
};
int cmp(const void *a,const void *b){
	char *s1 = (char*)a;
	char *s2 = (char*)b;
	return strcmp(s1,s2);
}
int main(int argc, char *argv[]) {
	struct stu p[10005];
	int n,m,i,j;
	scanf("%d",&n);
	char s1[n][10];
	for(i=0;i<n;i++){
		scanf("%s",s1[i]);
	}
	qsort(s1,n,sizeof(s1[0]),cmp); //先对s1进行排序，用来二分查找 
	int avg = 0;
	scanf("%d",&m);
	char s2[m][10];
	for(i=0;i<m;i++){
		scanf("%s%d",p[i].s,&p[i].num);
		avg += p[i].num;
	}
	avg /= m;
	int count = 0; 
	for(i=0;i<m;i++){
		if(p[i].num>avg){
			int flat = 0; //标记 
			int left = 0,right = n-1;
			if(strcmp(s1[left],p[i].s)<=0&&strcmp(s1[right],p[i].s)>=0) {
				while(1){//二分查找 
					if(strcmp(s1[left],p[i].s)==0){ 
						flat = 1;
						break; 
					}
					if(strcmp(s1[right],p[i].s)==0){ 
						flat = 1;
						break; 
					}
					if(right-left==1){
						flat = 0;
						break;
					}
					int mid = (right+left)/2;
					if(strcmp(s1[mid],p[i].s)==0){
						flat = 1;
						break;
					}
					if(strcmp(s1[mid],p[i].s)>0){
						right = mid;
					}else{
						left = mid;
					}
				}
			}
			if(flat==0){
				strcpy(s2[count++],p[i].s);
			} 
		}		
	}
	qsort(s2,count,sizeof(s2[0]),cmp);
	if(count==0){
		printf("Bing Mei You");
	}else{
		for(i=0;i<count;i++){
			printf("%s\n",s2[i]);
		}
	}	
	return 0;
}

