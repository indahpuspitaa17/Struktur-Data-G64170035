#include <stdio.h>
 
int main(){
    int c, i, n, x, a[1001]={0};
    scanf("%d", &c);
    for(;c!=-9;){
        a[c]=1;
        scanf("%d",&c);
    }
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &x);
        if(a[x]==1) printf("%d ada\n", x);
        else printf("%d tidak ada\n", x);
    }
    return 0;
}
