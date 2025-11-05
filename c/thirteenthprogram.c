#include<Stdio.h>

int main(){
    
    int m,n,j,k,p,q,i;

    int a[10][10],b[10][10],res[10][10];

    printf("Enter order of first matrix: ");
    scanf("%d %d",&m,&n);

    printf("Enter order of second matrix: ");
    scanf("%d %d",&p,&q);

    if (n!=p){
        printf("Matrix is incompatible for multiplication");
    }else{
        printf("Enter elements of Matrix A: \n");
 
        for(i=0;i<m;i++){
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        printf("Enter elements of Matrix B: \n");
 
        for(i=0;i<p;i++){
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }

        printf("Enter elements of Matrix A: \n");
 
        for (i = 0; i < m; i++) 
        { 
            for (j = 0; j < q; j++) 
            {  
                res[i][j] = 0;  
                for (k = 0; k < p; k++) 
                {
                    res[i][j] += a[i][k] * b[k][j];  
                }  
            }  
        }

        printf("product of two matrices is:\n ");
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                printf("%d\t",res[i][j]);
            }
            printf("\n");
        }

    }

 
    return 0;
}