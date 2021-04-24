#include<unistd.h>

void	ft_ft(int *nbr);

int main()

{
	int a =42;

	ft_ft(&a);
	
	return (0);

}


void	ft_ft(int *nbr)

{	
	char c;
	
	
	
	c=48+ *nbr/10;
	write(1,&c,1);
	
	*nbr % 10;
	c= 48 + *nbr%10;
	write(1,&c,1);
}
