main()
{
	int j,i;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
			printf(" ");
		for(j=1;j<=8-(2*i-1);j++)
			printf("*");
		printf("\n");
	}
}
