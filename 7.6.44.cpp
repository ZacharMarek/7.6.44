#include <stdio.h>
#include <stdlib.h>

float aritmeticky_priemer(float *data, int l)
{
	float medzisucet =0;
	
	for(int m=0;m<l;m++)
	{
		medzisucet+= data[m];
		//printf("%f ",medzisucet);
	}
	float priemer = medzisucet/l;
	printf("aritmeticky priemer pola velkosti %d s celkovym suctom %f je : %f",l,medzisucet,priemer);

}

main()
{
	int max_int = 518099;
	int j;
	
	
	printf("Zadajte dlzku pola : ");
	scanf("%d",&j);
	
	
	while(j > max_int)
	{
		printf("Maximalna dlzka pola je 518099. Zadajte velkost este raz :");
		scanf("%d",&j);
	}			
    
    float dat[j];	
	 
	
	for(int i=0;i<j;i++)
	{
		dat[i]= i+1;
		
	}
	
	aritmeticky_priemer(dat,j);
	
    
	
		
	}
	
	


