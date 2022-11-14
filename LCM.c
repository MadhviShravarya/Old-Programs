main()
{
	int a,b,L;
	printf("enter the two number\n");
	scanf("%d%d",&a,&b);
	for(L=a>b?a:b;L<=a*b;L++)
		if(L%a==0 && L%b==0)
		break;
		printf("lcm of these two number is %d",L);
	getch();	
}
