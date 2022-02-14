#include<stdio.h>
int Max(int x,int y){
    if(x>y) return x;
    else return y;
}
int main(){
    int m[6],max,cnt=0,flag;
    for(int i=0;i<6;i++){
        scanf("%d",&m[i]);
    }
    max=Max(Max(Max(m[0],m[1]),m[2]),m[3]);
    for(int i=0;i<4;i++){
        if(max-m[i]>m[5]||m[i]<m[4]){
            cnt++;
            flag=i+1;
        }
    }
    if(cnt==0){
        printf("Normal\n");
    }
    else if(cnt==1){
        printf("Warning: please check #%d!\n",flag);
    }
    else printf("Warning: please check all the tires!\n");
    return 0;
}

