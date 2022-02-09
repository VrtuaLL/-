#include <stdio.h>
#include <string.h>
int main(){
	int n,i,j;
	int len,flagA,flagB;
	int count,pos;
	char s[101];
	scanf("%d",&n);
	getchar();	//接收回车字符 
	for(i=0;i<n;i++){
		len=0,flagA=0,flagB=0,count=0;
		gets(s);
		len=strlen(s);	//头文件<string.h>
		for(j=0;j<len;j++){
			if(s[j]==','&&s[j-3]=='o'&&s[j-2]=='n'&&s[j-1]=='g')
				flagA=1;
			if(s[j]=='.'&&s[j-3]=='o'&&s[j-2]=='n'&&s[j-1]=='g')
				flagB=1;
		}
		if(flagA==1&&flagB==1){
			for(j=len-1;j>=0;j--){	//倒序遍历字符
				if(s[j]==' ')		//判断空格
					count++;
				if(count==3){
					pos=j;	//将第三个空格的下标进行存储
					break;
				}
			}
			for(j=0;j<=pos;j++){
				printf("%c",s[j]);
			}
			printf("qiao ben zhong.\n");
		}else{
			printf("Skipped\n");
		}
	}
	return 0;
} 

