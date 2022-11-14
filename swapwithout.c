main()
{
	int a,b;
	printf("enter the two numbers\n");
	scanf("%d%d",&a,&b);
	b=a+b;
	a=b-a;
	b=b-a;
	printf("a=%d and b=%d",a,b);
	getch();
}
