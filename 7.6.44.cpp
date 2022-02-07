#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

float aritmeticky_priemer(float *dat, int l)
{
	float medzisucet = 0.0;

	for(int m=0;m<l;m++)
	{
		medzisucet = ((medzisucet*(m))+dat[m])/(m+1);	
	}
	
	
	return medzisucet;
}

main()
{
	srand(time(0));
	int j= 3;		
    	float *dat;	
    	dat=(float*) malloc(sizeof(float) * j);

	for(int i =0;i<j;i++)
   	{
    	dat[i]=rand()%10;
	}
	
	printf(" priemer = %f",aritmeticky_priemer(dat,j));

	free(dat);
	}






