#include<stdio.h>
int main(){

    int m;
    printf("Enter the number of row 1st matrix : ");
    scanf("%d",&m);
    int n;
    printf("Enter the number of colums 1st matrix : ");
    scanf("%d",&n);

    int arr[m][n];
    printf("Enter element of 1st matrix :\n");
    for(int i=0;i<m;i++){ 
        for(int j=0;j<n;j++){ 
            scanf("%d", &arr[i][j]);
        }
    }

    int p;
    printf("Enter the number of rows 2nd matrix : ");
    scanf("%d",&p);
    int q;
    printf("Enter the number of colums 2nd matrix : ");
    scanf("%d",&q);

    int brr[p][q];
    printf("Enter element of 2nd matrix :\n");
    for(int i=0;i<p;i++){ 
        for(int j=0;j<q;j++){ 
            scanf("%d", &brr[i][j]);
        }
    }

    if(n!=p){ 
        printf("The matrix can not be multiplied");
    } else { 
        int res[m][q];
        for(int i=0;i<m;i++){ 
            for(int j=0;j<q;j++){ 
                res[i][j] = 0;
                for(int k=0;k<n;k++){ 
                    res[i][j] += arr[i][k]*brr[k][j];
                }
            }
        }

        printf("The resultant matrix is : \n");
        for(int i=0;i<m;i++){ 
            for(int j=0;j<q;j++){ 
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
        //return 0;
    }
    return 0;
}