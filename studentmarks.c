#include<stdio.h>
#include<stdlib.h>
void main()
{
	freopen("test1.txt","r",stdin);
	int s[50],i=0;
	while(i<50)
	{
		printf("enter %d student marks :",i);
		scanf("%d",&s[i]);
		i++;
	}
	for(i=0;i<50;i++)
	{
		printf("%d student marks %d\t",i,s[i]);
	}
	for(i=0;i<50;i++)
	{
		if(s[i]>=37)
		{
			if(s[i]>=80)
			{
				printf("%d student marks %d\n",i,s[i]);
			}
			else{
				while(s[i]%5!=0)
					s[i]=s[i]+1;
				printf("%d student marks %d\n",i,s[i]);
			}
		}
		else{
			if((37-s[i])<5)
			{
				while(s[i]!=37)
					s[i]=s[i]+1;
				printf("%d student marks %d\n",i,s[i]);
			}
			else
				printf("%d student marks %d\n",i,s[i]);
		}
	}
}
