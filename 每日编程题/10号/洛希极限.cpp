#include<stdio.h>
int main(){
    double rate,r,roche,result,s;
    int R;
    scanf("%lf %d %lf",&rate,&R,&s);
    if(R==0){
        result=2.455*rate;
        if(result>s){
            printf("%.2f T_T\n",result);
        }
        else printf("%.2f ^_^\n",result);
    }
    if(R==1){
        result=1.26*rate;
        if(result>s){
            printf("%.2f T_T\n",result);
        }
        else printf("%.2f ^_^\n",result);
    }
    return 0;
}

