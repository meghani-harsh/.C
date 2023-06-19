#include<stdio.h>
calc(int c,int a,int b)
{
	int ans=0;
	switch(c)
	{
		case 1:
			ans+=a+b;
			printf("sum of %d and %d is=>",a,b);
			break;
			
		case 2:
			ans+=a-b;
			printf("div of %d and %d is=>",a,b);
			break;
			
		case 3:
			ans+=a*b;
			printf("mul of %d and %d is=>",a,b);
			break;
			
		case 4:
			ans+=a/b;
			printf("sub of %d and %d is=>",a,b);
			break;
			
		case 5:
			ans+=a%b;
			printf("mod of %d and %d is=>",a,b);
			break;
						
	}
	
	return(ans);
	
}
main()
{
	int c,n1,n2,i;
	
	for(i=1;i!=0;i++)
	{
		printf("\nPress 1 for +"); 
	printf("\nPress 2 for -");
	printf("\nPress 3 for *");
	printf("\nPress 4 for /");
	printf("\nPress 5 for %%");
	printf("\nPress 0 for exit\n");
	
	printf("Enter your choice:");
	scanf("%d",&c);
	
	if(c>0)
	{
	    printf("Enter the first number:");
    	scanf("%d",&n1);
	
    	printf("Enter the second number:");
    	scanf("%d",&n2);
	
    	printf("%d",calc(c,n1,n2));
    }
    else
    {
    	break;
	}
	}
	
}

