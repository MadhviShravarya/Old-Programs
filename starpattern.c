main()
{
	int i,j;
	for(i=1;i<=12;i++)
	{
		for(j=1;j<=12;j++)
		{
			if(j<=i)
				printf("*");
			else
				printf(" ");	
	    }
		printf("\n");
	}

	getch();
}
