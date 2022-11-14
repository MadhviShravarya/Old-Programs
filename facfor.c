main()
{
	int i,f=1,n;
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
      f=f*i;  
	}
    printf("factorial of %d is %d",n,f);
	getch();
}

