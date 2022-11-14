main()
{
int* combine(int A[],int size1,int B[],int size2)
{
	int i,k;
	int *p;
	p=(int*)calloc(size1+size2,sizeof(int));
	for(i=0,k=0;k<size1;k++,i++)
		p[i]=A[k];
	for(k=0;k<size2;k++,i++)
		p[i]=B[k];
	return p;		
}
}
