#include<unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int a = 9 , b = 2;
	ft_ultimate_div_mod(&a , &b);
	char c = 48 + a, d = 48 + b; 
	write(1,&c,1);
	write(1,"\n",1);
	write(1,&d,1);
	write(1,"\n",1);
}

void    ft_ultimate_div_mod(int *a, int *b)
{
	int k = *a;
	*a = *a / *b;
	*b = k % *b;
}
