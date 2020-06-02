
#include<stdio.h>

int main()
{

int n=0,i=0,j=0,k=0,count=0,sum1=0,num=0,h=1,x=0;

scanf("%d",&n);

int arr[n];

for(i=0;i<n;i++)
{
    
    scanf("%d",&arr[i]);
}


for(i=0;i<n;i++)
{
    num=arr[i];
    sum1=0;
    
    for(j=1;j<=num;j++)
    {
        
        count=0;
        h=1;
        x=j;
        
        
        
        while(h*h<=x)
        {
            if(x%h==0)
            {
                count+=1;
                if(x/h!=h)
                {
                    count+=1;
                }
            }
            h++;
        }
        
        /*
        for(k=1;k<=j;k++)
        {
            if(j%k==0)
            {
             count++;   
            }
        }
        */
        
        sum1=sum1+count;
        if(sum1>=num)
        {
            printf("%d\n",j);
            break;
            
        }
        
    }
    
}

return 0;

}
