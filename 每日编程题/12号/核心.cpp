#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define len 10000

void substitute(char a[][len],char* q,char* t1,char* r1,int i);
void dele(char a[][len],int i)
{
    int j=0;
    int k=0;
    int count=0;
    char temp[]="  ";
  /*�����׵Ŀո�ȫ��ɾ��*/
     count=strlen(a[i]);
     for(;;)
     {
         if(a[i][0]==32)
			for(j=0;j<count;++j)
				a[i][j]=a[i][j+1];
         else
			break;
     }
     /*�����ڵ��ʼ�Ķ���ո񻻳� 1 ���ո�*/
     for(;;)
     {
         if(strstr(a[i],temp)!=NULL)
         {
            for(j=(strstr(a[i],temp)-a[i]);j<count;++j)
                a[i][j]=a[i][j+1];
         }
         else
           break;
     }
	     /*�ѱ�����ǰ��Ŀո�ɾ��*/
     j=0;
     for(;j<count;++j)
        if(ispunct(a[i][j+1])!=0&&a[i][j]==32)
        {
             for(k=j;k<count;++k)
                a[i][k]=a[i][k+1];
             --j;
        }
    /*����β�Ŀո�ȫ��ɾ��*/
    for(;;)
    {
        count=strlen(a[i]);
        if(a[i][count-1]==32)
            a[i][count-1]=0;
        else
            break;
    }
    return;
}
/*��ԭ�������ж�����can you could you ��Ӧ�ػ��� I can��I could���� �����������ָ���ո������ŷָ����ĵ���,��ԭ�������ж����� I �� me ���� you*/
void replace(char a[][len],int i)
{
    char t1[]="can you";
    char t2[]="could you";
    char r1[]="i can";
    char r2[]="i could";

	char t3[]="I";
    char t4[]="me";
    char r3[]="you";
	char *q=a[i];
       
	/*can you*/    
	substitute(a,a[i],t1,r1,i);
   
    /*could you*/
	substitute(a,a[i],t2,r2,i);

	/*I*/
	substitute(a,a[i],t3,r3,i);

	/*me*/
	substitute(a,a[i],t4,r3,i);

	/* i���I*/
	while(strstr(a[i],r1)!=NULL)
	{
		q=strstr(a[i],r1);
		*q='I';
	}
	/* i���I*/
	while(strstr(a[i],r2)!=NULL)
	{
		q=strstr(a[i],r2);
		*q='I';
	}
    return;
}

/*��ԭ�������д�дӢ����ĸ���Сд������ I����ԭ�������е��ʺ� ? ���ɾ�̾�� !��*/
void lower(char a[][len],int i)
{
    int j=0;
     /*��̾���滻*/
    for(j=0;a[i][j]!=0;++j)
      if(a[i][j]=='?')
        a[i][j]='!';
    /*��Сд*/
    for(j=0;a[i][j]!=0;++j)
      if(a[i][j]!='I')
         a[i][j]=tolower(a[i][j]);
    return;
}

void substitute(char a[][len],char* q,char* t1,char* r1,int i)
{
	char temp1[len]={0};
    char temp2[len]={0};
	int count=0;
	int leap=0;
	leap=strlen(t1);
	for(;;)
    {
        if(strstr(q,t1)!=NULL)
        {
            q=strstr(q,t1);
            if((isalnum(*(q-1))!=0&&q!=a[i])||isalnum(*(q+leap))!=0)
                q=q+leap;
            else
			{
				count=q-a[i];
				strncpy(temp2,a[i],count);
				strcat(temp2,r1);
				strcpy(temp1,q+leap);
				strcat(temp2,temp1);
				strcpy(a[i],temp2);
                memset(temp1,0,len);
                memset(temp2,0,len);
			}
		}
		else
			break;
	}
	return;
}

int main(void)
{
    char a[11][len]={0};
    int i=0;
    int n=0;

    scanf("%d",&n);
    getchar();
    for(i=0;i<n;++i)
        gets(a[i]);
	for(i=0;i<n;++i)
	{
		printf("%s\n",a[i]);
		dele(a,i);
		lower(a,i);
		replace(a,i);
		printf("AI: %s\n",a[i]);
	}
    return 0;
}

