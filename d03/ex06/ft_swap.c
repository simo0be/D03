#include<unistd.h>

void 	ft_swap(int *a, int *b);

int 	main()
{
	int a = 1 , b = 2 ;
	ft_swap(&a,&b);
	
	char c = 48 + a;
	char d = 48 + b;
	
	write(1,&c,1);
	write(1,&d,1);
}

void	ft_swap(int *a, int *b)
{
	int k = *a;
	*a = *b;
	*b = k;
}
