main()
{
	int a,x,y;
	while(1)
	{
		printf("\n1. Addition");
		printf("\n2. Subtraction");
		printf("\n3. Multiplication");
		printf("\n4. Division");
		printf("\n5. EXIT");
		printf("\n Enter your choice");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				printf("enter any two number");
				scanf("%d%d",&x,&y);
				printf("the sum is %d",x+y);
				break;
		}
	}
		getch();
}
