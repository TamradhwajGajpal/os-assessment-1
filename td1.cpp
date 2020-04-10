#include<conio.h>
#include<stdio.h>
int main()
{ int number;
	printf("\nEnter the number of children coming to the shop\n");
	scanf("%d",&number);
	int priority[number];
	for(int i=1;i<=number;i++)
	{printf("\nenter the number of gifts for %d child\n",i);
	scanf("%d",&priority[i]);	
	}
	for(int i=1;i<=number;i++)
	{ for(int j=1;j<i;j++)
	{if(priority[i]>priority[j])
	{int temp=0;
	 temp = priority[i];
	 priority[i] = priority[j];
	 priority[j] = temp;
	}
	}
	}
	for(int i=1;i<=number;i++)
	{printf("\nthe child with %d will be executed at %d position\n",priority[i],i);
	}
	
}
