main()
{
	int p,t;
	float r,s;
	printf("enter principle amount time and rate \n");
	scanf("%d%d%f",&p,&t,&r);
	s=p*t*r/100;
	printf("simple interest is %f",s);
}
