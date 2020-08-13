#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j,k,l,p,q,m,w;
    scanf("%d ", &k);
    
    n=k+(k-1);
    l=k;
    m=n;
    for(i=1;i<=(n/2)+1;i++){
        k=l;
        for(j=1;j<=i;j++){
            printf("%d ",k);
            k--;
        }
        if(k==0){
            k=k+2;
        }
        else{
        k=k+1;
        }
        for(p=j;p<m;p++){
            printf("%d ",k);
        }
        m--;
        for(q=p;q<=n;q++){
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }

    for(w=i;w<=n;w++){
        k=l;
        for(j=1;j<=(n-w)+1;j++){
            printf("%d ",k);
            k--;
        }
        k=k+1;
        for(p=j;p<w;p++){
            printf("%d ",k);
        }
        for(q=p;q<=n;q++){
            printf("%d ",k);
            k++;
        }
    printf("\n");
    }
    return 0;
}