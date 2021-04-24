#include<unistd.h>
#include<stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod);

int main ()
{
	int a = 5 , b = 2;
	int div;
	int mod;
	ft_div_mod(a, b,&div,&mod);
	
}

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div=a/b;
	*mod=a%b;
	
	char c = 48 + *div;
	char j = 48 + *mod;

	write(1,&c,1);
	write(1,"\n",1);
	write(1,&j,1);
	write(1,"\n",1);
}
