#include<stdio.h>
#include<string.h>
int main()
{
 char str[10];
 int k, n = 0;
 scanf("%d", &k);
 while (scanf("%s", str))
 {
  if (strcmp(str, "End") == 0)break;
  if (n != k)//�ж��Ƿ���K��
  {
   if (strcmp(str, "ChuiZi") == 0)puts("Bu");
   else if (strcmp(str, "JianDao") == 0)puts("ChuiZi");
   else if (strcmp(str, "Bu") == 0)puts("JianDao");
   n++;//������
  }
  else { puts(str); n = 0; }//ƽ�ֺ��������ѭ��
 }
 return 0;
}
