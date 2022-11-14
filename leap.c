main()
{
	int year;
	printf("enter year\n");
	scanf("%d",&year);
	if(year%100==0)
	   if(year%400==0)
	   printf("leap year");
	   else
	   printf("not a leap year");
	else 
	   if(year%4==0)
	   printf("leap year");
	   else
	   printf("not a leap year");   
}
