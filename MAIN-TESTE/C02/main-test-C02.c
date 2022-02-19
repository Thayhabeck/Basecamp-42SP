#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <inttypes.h>
#include "ex00/ft_strcpy.c"
#include "ex01/ft_strncpy.c"
#include "ex02/ft_str_is_alpha.c"
#include "ex03/ft_str_is_numeric.c"
#include "ex04/ft_str_is_lowercase.c"
#include "ex05/ft_str_is_uppercase.c"
#include "ex06/ft_str_is_printable.c"
#include "ex07/ft_strupcase.c"
#include "ex08/ft_strlowcase.c"
//#include "ex09/ft_strcapitalize.c"
//#include "ex10/ft_strlcpy.c"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		write(1, (str + i), 1);
		i++;
	}
}

void	ft_putnstr(char *str, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*(str + i) != '\0' && i <= (n - 1))
	{
		write(1, (str + i), 1);
		i++;
	}
}

int main(void) {
	printf("\n---- ft_strcpy --- ex00:\n");
	char	dest[2];
	char	src[] = "012345678901234567890123231232323";
	char	*destp;
	
	destp = ft_strcpy(&dest[0], &src[0]);
	ft_putstr(destp);
    //-------------------------------------------------------------------------
    printf("\n---- ft_strncpy --- ex01:\n");
	char	dest1[20];
	//char	src1[] = "a1b2c3d4e5f6g7h8l9k10";
	//char	src1[] = "string < q n";
	//char	src1[] = "string bem maior que n";
	char	src1[] = "string igual a n";
	char	*destp1;
	unsigned int nb;

	nb = 12;
	destp1 = ft_strncpy(&dest1[0], &src1[0], nb);
	ft_putnstr(destp1, nb);
	write(1, "\n", 1);
    //-------------------------------------------------------------------------
    printf("\n---- ft_str_is_alpha --- ex02:\n");
	int teste;

	teste = ft_str_is_alpha("PiRuLiTo");
	printf("PiRuLiTo:\t %d\n", teste);
	teste = ft_str_is_alpha("pirulito");
	printf("pirulito:\t %d\n", teste);
	teste = ft_str_is_alpha("PIRULITO");
	printf("PIRULITO:\t %d\n", teste);
	teste = ft_str_is_alpha("p1RuL1To");
	printf("p1RuL1To:\t %d\n", teste);
	teste = ft_str_is_alpha("p[RuL]T*");
	printf("p[RuL]T*:\t %d\n", teste);
	teste = ft_str_is_alpha("");
	printf("\"vazio\":\t %d\n", teste);
    //-------------------------------------------------------------------------
	printf("\n---- ft_str_is_numeric --- ex03:\n");
	teste = ft_str_is_numeric("1234567");
	printf("1234567:\t %d\n", teste);
	teste = ft_str_is_numeric("1D3A5");
	printf("1D3A5B7:\t %d\n", teste);
	teste = ft_str_is_numeric("1/3 5");
	printf("1/3 5*a:\t %d\n", teste);
	teste = ft_str_is_numeric("");
	printf("\"vazio\":\t %d\n", teste);
    //-------------------------------------------------------------------------
	printf("\n---- ft_str_is_lowercase --- ex04:\n");
	teste = ft_str_is_lowercase("PiRuLiTo");
	printf("PiRuLiTo:\t %d\n", teste);
	teste = ft_str_is_lowercase("pirulito");
	printf("pirulito:\t %d\n", teste);
	teste = ft_str_is_lowercase("PIRULITO");
	printf("PIRULITO:\t %d\n", teste);
	teste = ft_str_is_lowercase("p1RuL1To");
	printf("p1RuL1To:\t %d\n", teste);
	teste = ft_str_is_lowercase("p[RuL]T*");
	printf("p[RuL]T*:\t %d\n", teste);
	teste = ft_str_is_lowercase("");
	printf("\"vazio\":\t %d\n", teste);  
    //-------------------------------------------------------------------------    
	printf("\n---- ft_str_is_uppercase --- ex05:\n");
	teste = ft_str_is_uppercase("PiRuLiTo");
	printf("PiRuLiTo:\t %d\n", teste);
	teste = ft_str_is_uppercase("pirulito");
	printf("pirulito:\t %d\n", teste);
	teste = ft_str_is_uppercase("PIRULITO");
	printf("PIRULITO:\t %d\n", teste);
	teste = ft_str_is_uppercase("p1RuL1To");
	printf("p1RuL1To:\t %d\n", teste);
	teste = ft_str_is_uppercase("p[RuL]T*");
	printf("p[RuL]T*:\t %d\n", teste);
	teste = ft_str_is_uppercase("");
	printf("\"vazio\":\t %d\n", teste); 
    //-------------------------------------------------------------------------   
	printf("\n---- ft_str_is_printable --- ex06:\n");
	teste = ft_str_is_printable("PiRuLiTo");
	printf("PiRuLiTo:\t %d\n", teste);
	teste = ft_str_is_printable("pirulito");
	printf("pirulito:\t %d\n", teste);
	teste = ft_str_is_printable("PIRULITO");
	printf("PIRULITO:\t %d\n", teste);
	teste = ft_str_is_printable("p1RuL1To");
	printf("p1RuL1To:\t %d\n", teste);
	teste = ft_str_is_printable("p[RuL]T*");
	printf("p[RuL]T*:\t %d\n", teste);
	teste = ft_str_is_printable("");
	printf("\"vazio\":\t %d\n", teste); 
    teste = ft_str_is_printable("\n");
	printf("\"'NewLine'\":\t %d\n", teste);
    //-------------------------------------------------------------------------
    printf("\n---- ft_strupcase --- ex07:\n");
	//	char	str[] = "Meu Nome É Cassiano \n \r @#$@$@2";
		char	str[] = "A MINHA CASA ççé BRANCA 1231";
	//	char	str[] = "";
	//char	str[] = "minha casa e verde e tem1 c113aldos";	
	char	*destp2;
	
	destp2 = ft_strupcase(&str[0]);
	ft_putstr(destp2);
	write(1, "\n", 1);
    //-------------------------------------------------------------------------
	printf("\n---- ft_strlowcase --- ex08:\n");
		char	str1[] = "Meu Nome É Cassiano \n \r @#$@$@2";
	//	char	str1[] = "A MINHA CASA ççé BRANCA 1231";
	//	char	str1[] = "";
	//har	str1[] = "minha casa e verde e tem1 c113aldos";	
	char	*destp3;
	
	destp3 = ft_strlowcase(&str1[0]);
	ft_putstr(destp3);
	write(1, "\n", 1);
    //-------------------------------------------------------------------------
    printf("\n---- ft_strcapitalize --- ex09:\n");
	char	str2[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	//	char	str2[] = "meu 42nome É cassiano \n \r casa@#$@$@2";
	//	char	str2[] = "A MINHA CASA ççé BRANCA 1231";
	//	char	str2[] = "";
	//	char	str2[] = "minhA cAsA e verde e tem1 c113aldos";	
	char	*destp4;
	
	destp4 = ft_strcapitalize(&str2[0]);
	ft_putstr(destp4);
	write(1, "\n", 1);
	//-------------------------------------------------------------------------
    printf("\n---- ft_strlcpy --- ex010:\n");
	char src2[] = "Hello there, Venus";
   	char dest2[19];
	unsigned int	nbr = 0;
	int	size;

   	size = ft_strlcpy(dest2, src2, nbr);
   	printf("Copied '%s' into '%s', length %d\n",
            src2,
            dest2,
            size
          );*/
	//-------------------------------------------------------------------------
    return 0;    
}