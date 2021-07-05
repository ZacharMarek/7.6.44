#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

float aritmeticky_priemer(float *data, int l)
{
	float medzisucet = 0.0;
	float priemer;
	int m= 0;

	for(int m=0;m<l;m++)
	{
		data[m]=rand()%10;
		medzisucet = ((medzisucet*(m))+data[m])/(m+1);
		medzisucet = medzisucet;
	}
	
	
	return medzisucet;
}

main()
{
	srand(time(0));
	int j= 3;		
    float *dat;	
    
    dat=(float*) malloc(sizeof(float) * j);

	printf(" priemer = %f",aritmeticky_priemer(dat,j));

	free(dat);
	}






