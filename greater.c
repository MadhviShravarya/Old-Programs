main()
{
	int a,b,c;
	printf("enter three number\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("\n%d",a>b? a>c?a:c : b>c?b:c); 
	getch();		    
}
