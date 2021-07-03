#include <stdio.h>
#include <stdlib.h>

float aritmeticky_priemer(float *data, int l)
{
	float *medzisucet;
	medzisucet = (float*) malloc(sizeof(float) * l);
	
	//medzisucet= malloc(l* sizeof(int));

	for(int m=0;m<l;m++)
	{
		data[m]=rand()%10;
		medzisucet+= data[m];
	}
	float priemer = medzisucet/l;
	return priemer;
free(medzisucet);
}

main()
{
	int j= 10;		
	
    float *dat;	
    
    dat=(float*) malloc(sizeof(float) * j);
    
//	for(int i=0;i<j;i++)
//	{
//		dat[i]= rand()%10;
//	}

	aritmeticky_priemer(dat,j);
	printf("%.f",aritmeticky_priemer(dat,j));

free(dat);
	}





