#include<stdio.h>
#include<string.h>
int a[100000]={0},n,m;
int Insert (int i);
int zhaobaba (int s);
 
int main(void) {
	int i,x,y;
	char str1[100],str2[100],str3[100],str4[100];
	scanf ("%d %d",&n,&m);
	for (i=1;i<=n;i++) {
		scanf ("%d",&a[i]);
		if (i!=1)  Insert (i);
	}
	getchar ();
	for (i=0;i<m;i++) {
		scanf ("%d %s",&x,str1);
		if (strcmp (str1,"and")==0) {
			scanf ("%d %s %s",&y,str2,str3);
		if (zhaobaba (x)==zhaobaba(y)) printf ("T\n");
		else printf ("F\n");
		}
		else {
			scanf ("%s %s",str2,str3);
			if (strcmp (str3,"root")==0) {
				if (x==a[1]) printf ("T\n");
				else printf ("F\n");
			}
			else if (strcmp (str3,"parent")==0) {
				scanf ("%s %d",str4,&y);
				if (zhaobaba (y)==x) printf ("T\n");
				else printf ("F\n");
			}
			else {
				scanf ("%s %d",str4,&y);
				if (zhaobaba (x)==y)  printf ("T\n");
				else printf ("F\n");
			}
		}
	}
	return 0;
} 
int Insert (int i) {
	int item;
	while (1) {
		if (i==1) break;
		else if (a[i]<a[i/2]) {
			item = a[i];
			a[i] = a[i/2];
			a[i/2] = item;
			i = i/2;
		}
		else break;
	}
}
int zhaobaba (int s) {
	int i;
	for (i=1;i<=n;i++) {
		if (a[i]==s) break;
	}
	return a[i/2];
}
