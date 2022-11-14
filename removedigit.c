main()
{
	printf("%d",removedigit(24456,4));
	getch();
}
int removedigit(int x,int d)
{
	int y=0,r;
	while(x)
	{
		r=x%10;
		x/=10;
		if(r==d)
			continue;
		y=y*10+r;	
	}
	return reverse(y);
}
int reverse(int y)
{
	int n=0,r;
	while(y)
	{
	
	r=y%10;
	y/=10;
	n=n*10+r;
	}
	return (n);
}

