#include<unistd.h>

void	ft_ultimate_ft(int *********nbr);

int main()
{
	
	int     *nbr1=0;
        int     **nbr2=0;
        int     ***nbr3=0;
        int     ****nbr4=0;
        int     *****nbr5=0;
        int     ******nbr6=0;
        int     *******nbr7=0;
        int     ********nbr8=0;
	int	*********nbr=0;

        int     k =0;

        nbr1=&k;
        nbr2=&nbr1;
        nbr3=&nbr2;
        nbr4=&nbr3;
        nbr5=&nbr4;
        nbr6=&nbr5;
        nbr7=&nbr6;
        nbr8=&nbr7;
        nbr =&nbr8;
          
        char c;
        char z;
 	

	ft_ultimate_ft(nbr);
	
	int x=*nbr1;
        int y=*nbr1;

        c=48 + x/10;
        z=48 + y%10;
        write(1,&c,1);
        write(1,&z,1);


		
	

}

void	ft_ultimate_ft(int *********nbr)
{
	 *********nbr = 42;
	
}




