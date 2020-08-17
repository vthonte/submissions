

#include <stdio.h>

int main()
{
    int a[3][4],i,j;
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            a[i][j]=2*i+3*j+4;
        }
    }
    
    printf("%d %d %d \n",*a[2]+2,*(a[2]+2),*(a[1]+7));
    printf("%d %d %d \n",*(*a+3),**(a+2),*(&a[1][3]+4));
    
    
    
    return 0;
    
}
