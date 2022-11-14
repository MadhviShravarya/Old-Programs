main()
{
	int a,b,c,n;
	printf("enter the number\n");
	scanf("%d",&n);
	for(a=-1,b=1;n;n--)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
    } 
	getch();	
}
		
