#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char A[10001];
	char B[10001];
	gets(A);
	gets(B);
	
	char *p;
	
	char t[10001];
	
	int i,len1=strlen(A),len2=strlen(B),j;
	for(i=0;i<len2;i++){
		for(j=0;j<len1;)
		{
			if(B[i]==A[j]){ 
				p=&A[j+1];
				A[j]='\0';
				strcat(A,p);
				j=0;
				
				
			}
			else j++;
		}
	}
	
	puts(A);
	
	
	
	
	
}
