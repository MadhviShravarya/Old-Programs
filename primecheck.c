main()
{
	int n,i=2;
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
		if(n%i==0)
			break;
	if(i==n)
		printf("prime");
	else
	printf("not a prime");			
	getch();	
}
