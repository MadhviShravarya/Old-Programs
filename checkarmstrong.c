
main()
{
	printArmstrong(1, 10000);
	getch();
}
void printArmstrong(int l, int u)
{
	int x;
	for(x=l;x<=u;x++)
		if(checkArmstrong(x))
		printf("%d",x);
}
int checkArmstrong(int n)
{
	int s,d;
	d=countDigit(d);
	s=sum(n,d);
	if(s==n)
		return 1;
    else
    	return 0;
}
int sum(int n,int d)
{
	int i,p,s=0,digit;
	while(n)
	{
		digit=n%10;
		for(i=1,p=1;i<=d;i++)
			p=p*digit;
		s=s+p;
		n/=10;
	}
	return s;
}

int countDigit(int n)
{
	int count=0;
	while(n)
	{
		n=n/10;
		count++;
	}
	return count;
}

