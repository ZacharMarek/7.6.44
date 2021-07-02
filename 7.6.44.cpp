#include <stdio.h>
#include <stdlib.h>

float aritmeticky_priemer(float *data, int l)
{
	float medzisucet =0;
	
	for(int m=0;m<l;m++)
	{
		if(medzisucet > INT_MAX+medzisucet)
			printf("pretieklo to");
		else if(medzisucet < INT_MIN-medzisucet)
			printf("podtieklo to");
		else
			medzisucet+= data[m];
			printf("%f ",medzisucet);
	}
	float priemer = medzisucet/l;
	printf("aritmeticky priemer pola velkosti %d s celkovym suctom %f je : %f",l,medzisucet,priemer);

}

main()
{
	
	int j;
	float *dat;
	dat=(float *)malloc(INT_MAX);
	
	printf("Zadajte dlzku pola : ");
	scanf("%d",&j);
	
	
	while(j > max_int)
	{
		printf("Maximalna dlzka pola je 518099. Zadajte velkost este raz :");
		scanf("%d",&j);
	}			
	 
	for(int i=0;i<j;i++)
	{
		dat[i]= i+1;
		
	}
	
	aritmeticky_priemer(dat,j);
	
    
	free(dat);
		
	}
	
	


