main()
{
	int i=1,f=1,n;
	printf("enter the number\n");
	scanf("%d",&n);
	while(i<=n)
	{
     	f=f*i;
	    i++;
	}
	printf("factorial of %d is %d",n,f);
	getch();
}
