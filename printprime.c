main()
{
	int i,j,n;
	printf("enter the number\n");
	scanf("%d",&n);
	for(j=2;j<n;j++)
	{

		for(i=2;i<j;i++)
			if(j%i==0)
			break;
	if(i==j)
	printf("%d ",j);
	}	
	getch();
}
