main()
{
	int max,i,a[10];
	printf("enter 10 number\n");
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
	max=a[0];
	for(i=1;i<=9;i++)
		if(a[i]>max)
			max=a[i];
	printf("the greatest number is %d",max);
	getch();			
}
