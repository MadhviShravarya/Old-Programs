main()
{
	int n=1,i=1;
	printf("enter a number\n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("\n%d * %d = %d",n,i,n*i);
	}
	getch();
}
