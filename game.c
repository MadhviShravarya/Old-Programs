main()
{
	int x,i;
	for(i=1;i<=3;i++)
	{
		printf("enter an even number\n");
		scanf("%d",&x);
		      if(x%2==0)
		         break;
	}
	if(i==4)
      	printf("GAME OVER");
    else
	    printf("YOU WIN");
	getch();
}
