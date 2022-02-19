#include <stdio.h>
#include "ex00/ft_strlen.c"
#include "ex01/ft_putstr.c"
#include "ex02/ft_putnbr.c"
#include "ex03/ft_atoi.c"

int	main()
{
	printf("\n---- ft_strlen --- ex00:\n");
	//entradas
	char *str1 = "vai passar!";
	char *str2 = "eu não vou dormir em cima do teclç$n@256+-.";
	char *str3 = "1234567";
	char *str4 = "";
	int x;
	x = ft_strlen(str1);
	printf("1 - %s: %d\n", str1, x);
	x = ft_strlen(str2);
	printf("2 - %s: %d\n", str2, x);
	x = ft_strlen(str3);
	printf("3 - %s: %d\n", str3, x);
	x = ft_strlen(str4);
	printf("4 - %s: %d\n", str4, x);
	//--------------------------------------------------
	printf("\n---- ft_putstr --- ex01:\n");
	ft_putstr(str1);
	printf("\n");
	ft_putstr(str2);
	printf("\n");
	ft_putstr(str3);
	printf("\n");
	ft_putstr(str4);
	//--------------------------------------------------
	printf("\n---- ft_putnbr --- ex02:\n");
	ft_putnbr(42);
	printf("\n");
	ft_putnbr(-42);
	printf("\n");
	ft_putnbr(1);
	printf("\n");
	ft_putnbr(-1);
	printf("\n");
	ft_putnbr(2);
	printf("\n");
	ft_putnbr(-2);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(-0);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	//--------------------------------------------------
	printf("\n---- ft_atoi --- ex03:\n");
	printf("1 Negativo (E+S):\t %d\n", ft_atoi(" \r\t\v\n\f ---+--+1234ab567"));
	printf("2 Positivo (E+S):\t %d\n", ft_atoi("  \r\t\v\n\f  --+--+1234ab567"));
	printf("3 Negativo (S):\t\t %d\n", ft_atoi("---+--+1234ab567"));
	printf("4 Positivo (S):\t\t %d\n", ft_atoi("++-+-+1234ab567"));
	printf("5 Positivo:\t\t %d\n", ft_atoi("1234ab567"));
	printf("6 Negativo (E+S+E):\t %d\n", ft_atoi("  \r\t\v\n\f  ---+--+ 1234ab567"));
	printf("7 Positivo (E+S+E):\t %d\n", ft_atoi("  \r\t\v\n\f  --+--+ A1234+b567"));
	printf("8 Letra apenas:\t\t %d\n", ft_atoi("A"));
	printf("9 Zero:\t\t\t %d\n", ft_atoi("0"));
	printf("10 Menos Zero:\t\t %d\n", ft_atoi("-0"));
	printf("11 MIN inteiro:\t\t %d\n", ft_atoi(" \r\t\v\n\f  -+--2147483648asf"));
	printf("12 MAX inteiro:\t\t %d\n", ft_atoi(" \r\t\v\n\f  -+-2147483647zxc55"));
}
