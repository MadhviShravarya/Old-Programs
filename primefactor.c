main()
{
	int n,i;
	printf("enter a number\n");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
		if(n%i==0)
		printf("%d\n",i);
	getch();	
}
