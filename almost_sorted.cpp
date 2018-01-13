#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {

    int n,i,t=0,a[100002],d=0,u=0,di,ui=-1;
    scanf("%d",&n);
    a[0]=0;
    for(i=1;i<=n;i++){
         scanf("%d",&a[i]);
    }
    a[n+1]=1000001;
    for(i=1;i<=n;i++){
       
        if(a[i]>a[i-1]&&a[i]>a[i+1]){
            u++;
            if(ui==-1)
            ui=i;
    }
        else if(a[i]<a[i-1]&&a[i]<a[i+1]){
            d++;
            di=i;
    }
   }
    
    if(d==1&&u==1&&di-ui>2){
        if((di<n&&a[ui]>a[di+1])||(ui>1&&a[di]<a[ui-1]))
        printf("no");
        else
        printf("yes\nreverse %d %d",ui,di);
}
       
    else if(d==2&&u==2||(d==1&&u==1&&di-ui<3))
        if(di-ui<3&&(di<n&&a[ui]>a[di+1])||(ui>1&&a[di]<a[ui-1]))
        printf("no");
        else
        printf("yes\nswap %d %d",ui,di);
    else
        printf("no");
   
    return 0;
}

