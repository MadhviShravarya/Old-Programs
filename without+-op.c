main()
{
	int a,b;
	printf("enter a number\n");
	scanf("%d%d",&a,&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("\n%d\n%d",a,b);
	getch();
}
