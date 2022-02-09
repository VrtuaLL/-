#include <stdio.h>
#include <string.h>
int main(){
	char c[1001];
	gets(c);
	int i,num=0,j;
	for(i=0;i<strlen(c);i++){
		if(c[i]=='6'){
			num++;
		}else{
			if(num<=3){
				for(j=0;j<num;j++){
					printf("6");
				}
			}else if(num>3 && num<=9){
					printf("9");
			}else{
				printf("27");
			}
			num=0;
			printf("%c",c[i]);
		}
	}
	if(num>0){
		if(num<=3){
			for(j=0;j<num;j++){
				printf("6");
			}
		}else if(num>3 && num<=9){
				printf("9");
		}else{
			printf("27");
		}
	}
	return 0;
} 

