#include<unistd.h>

char	*ft_strrev(char *str);

int main()
{
	char str[] = {'h','e','e','e','e','e','e','y'};
	ft_strrev(str);
}

char	*ft_strrev(char *str)
{
	int i=0;
	int y=0; 
	while(str[i])
	{  i++;}
  	
	while(i>y)
	{	
		i--;


	 char c = str[i];
		 write(1,&c,1);
	}
}
