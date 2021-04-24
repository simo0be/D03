#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void	ft_sort_integer_table(int *tab,int size);

int 	main()
{

	int tab[10] = {0,2,1,6,8,9,5,7,6,8};
	int size=10;
	
	ft_sort_integer_table(tab,size);
	
	printf("%d %d %d %d %d %d %d %d %d %d",tab[0],tab[1],tab[2],tab[3],tab[4],tab[5],tab[6],tab[7],tab[8],tab[9]);
}

void	ft_sort_integer_table(int *tab,int size)
{
	int i =0,j=0,k=0;

	for(i=0 ; i < size; i++)
	{
		for(j=0; j<size; j++)
			{
				if(tab[j] > tab[j+1]  )
				{
					k=tab[j];
					tab[j]=tab[j+1];
					tab[j+1]=k;
				}
				
					
				
			}
	}
}	
