#include<stdio.h>
int main(){

    int m;
    printf("Enter the number of row matrix : ");
    scanf("%d",&m);
    int n;
    printf("Enter the number of colums matrix : ");
    scanf("%d",&n);

    int arr[m][n];
    printf("Enter element of matrix :\n");
    for(int i=0;i<m;i++){ 
        for(int j=0;j<n;j++){ 
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    int minr = 0;
    int maxr = m-1;
    int minc = 0;
    int maxc = n-1;
    int total_num_element = m*n;
    int count = 0;

    while(count<total_num_element){ 
        //print the minium row
        for(int j=minc;j<=maxc;j++){   //for(int j=minc;j<=maxc && count<total_num_element;j++)
            printf("%d ",arr[minr][j]);
            count++;
        }
        minr++;
        if(count>=total_num_element) break;
        //print the maxmum coloum
        for(int i=minr;i<=maxr;i++){   //for(int i=minr;i<=maxr && count<total_num_element;j++)
            printf("%d ",arr[i][maxc]);
            count++;
        }
        maxc--;
        if(count>=total_num_element) break;
        //print the maxcimun row
        for(int j=maxc;j>=minc;j--){   //for(int j=maxc;j>=minc && count<total_num_element;j--)
            printf("%d ",arr[maxr][j]);
            count++;
        }
        maxr--;
        if(count>=total_num_element) break;
        //print the minimum coloum
        for(int i=maxr;i>=minr;i--){   //for(int i=maxc;i>=minc && count<total_num_element;i--)
            printf("%d ",arr[i][minc]);
            count++;
        }
        minc++;
        if(count>=total_num_element) break;
    }
    return 0;    
}