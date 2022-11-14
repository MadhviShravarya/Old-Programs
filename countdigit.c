main()
{
	int a,count=0;
	printf("enter the number\n");
	scanf("%d",&a);
	while(a!=0)
	{
		a=a/10;
		count++;
	}
    printf("total digit is %d",count);
	getch();
}

