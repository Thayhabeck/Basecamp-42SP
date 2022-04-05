//-----------------------------------------------------------------------------------
//Basecamp Reloaded ex20
#include<stdio.h>
#include<string.h>
 
int main()
{
    char source[] = "Teste strdup";
	char source2[] = "Teste ft_strdup weeeeee";
 
    char* target = strdup(source);
	char* target2 = ft_strdup(source2);
 
    printf("%s\n%s\n", target, target2);
    return 0;
}

//-----------------------------------------------------------------------------------
//Basecamp Reloaded ex21
#include<stdio.h>
#include<string.h>
 
int main()
{
    int *vetor;
	int max = 4, min = 2, i = 0;
 
    vetor = ft_range(min, max);
	while (i < (max - min))
	{
    printf("%d ", vetor[i]);
	i++;
	}
    return 0;
}

//-----------------------------------------------------------------------------------
//Basecamp Reloaded ex22
#include<stdio.h>
#include "ft_abs.h"
 
int main()
{
    int a = 0;
	int b = -42;
	int c = 42;
	int d = -8;
	int e = -154896;
 
    printf("%d\n%d\n%d\n%d\n%d\n", ABS(a), ABS(b), ABS(c), ABS(d), ABS(e));
    return 0;
}

//-----------------------------------------------------------------------------------
//Basecamp Reloaded ex23
#include<stdio.h>
#include "ft_point.h"

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}
 
int main()
{
    t_point point;
	t_point batata;
	
	set_point(&point);
	set_point(&batata);
    printf("Primeito t_point: x= %d\ty= %d\n", point.x, point.y);
	printf("Segundo t_point: x= %d\ty= %d\n", batata.x, batata.y);
    return 0;
}

//-----------------------------------------------------------------------------------
//Basecamp Reloaded ex25
#include<stdio.h>
#include<unistd.h>
#include "ft_foreach.c"

int	ft_count_base(int nbr)
{
	int	base;

	base = 1;
	while (nbr > 9 || nbr < -9)
	{
		base = base * 10;
		nbr = nbr / 10;
	}
	return (base);
}

void	ft_putnbr(int nb)
{
	int		nbr;
	int		base;
	char	out_nbr;

	nbr = nb;
	base = ft_count_base(nbr);
	if (nb < 0)
	{
		write(1, "-", 1);
		nbr = nb / base;
		nbr *= (-1);
		out_nbr = nbr + '0';
		write(1, &out_nbr, 1);
		nb = nb % base;
		nb *= (-1);
		base = base / 10;
	}
	while (base >= 1)
	{
		nbr = nb / base;
		out_nbr = nbr + '0';
		write(1, &out_nbr, 1);
		nb = nb % base;
		base = base / 10;
	}
}

int main()
{
	int arr_80[] = {69, 123, 2, 59, 4, 45, 6, 0, 8, -123};
	int size_80 = sizeof(arr_80)/sizeof(int);
    ft_foreach(arr_80, size_80, &ft_putnbr);
    return 0;
}

//-----------------------------------------------------------------------------------
//Basecamp Reloaded ex26
#include<stdio.h>
#include "ft_count_if.c"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main()
{
	int		(*f)(char*);
	char	*tab[5] = {"e","s","t","e", 0};
	char	*tab2[7] = {"este", "vai", "retornar", "dois", "!", "!", 0};

	f = &ft_strlen;	
	printf("Primeiro array: %d\n", ft_count_if(tab, f));
	printf("Segundo array: %d\n", ft_count_if(tab2, f));
}