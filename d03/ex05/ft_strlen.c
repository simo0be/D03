#include<unistd.h>

int 	ft_strlen(char *str);

int 	main()
{
	char str[] = {'h','e','e','y'};
	ft_strlen(str);	
		

}

int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{i++;}
	char c = i + 48;
	write(1,&c,1);
	return (i);
}
