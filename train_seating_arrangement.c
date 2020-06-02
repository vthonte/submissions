
#include<stdio.h>


int main()
{

	int t=0,i=0,num=0,num2=0,diff=0,inp=0;
	scanf("%d",&t);

	int arr[t];

	for(i=0;i<t;i++)
	{

		scanf("%d",&arr[i]);

		num=arr[i]%12;
		if(num==0)
		{
			num=12;
		}
		num2=13-num;
		diff=num2-num;
		printf("%d ",arr[i]+diff);

		if(num<7)
		{
			if(num<4)
			{
				if(num==1)
				{
					printf("WS");
				}
				else{
					if(num==2)
					{
						printf("MS");
					}
					else{
						printf("AS");
					}
				}
				
			}
			else{
				if(num==6)
				{
					printf("WS");
				}
				else{
					if(num==5)
					{
						printf("MS");
					}
					else{
						printf("AS");
					}
				}

			}
		}
		else{

			if(num<10)
			{
				if(num==7)
				{
					printf("WS");
				}
				else{
					if(num==8)
					{
						printf("MS");
					}
					else{
						printf("AS");
					}
				}
				
			}
			else{
				if(num==12)
				{
					printf("WS");
				}
				else{
					if(num==11)
					{
						printf("MS");
					}
					else{
						printf("AS");
					}
				}

			}



		}
		printf("\n");	

	}
}
