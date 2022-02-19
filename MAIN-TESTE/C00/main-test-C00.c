#include <unistd.h>

int        main(void);
void    ft_putchar(char c);
void    ft_print_alphabet(void);
void    ft_print_reverse_alphabet(void);
void    ft_print_numbers(void);
void    ft_is_negative(int n);
void    ft_print_comb(void);
void    ft_print_comb2(void);
void    ft_putnbr(int nb);
//void    ft_print_combn(int n);

int    main(void)
{
    ft_print_comb2();
    write(1, "\n", 1);
    ft_print_comb();
    write(1, "\n", 1);
    ft_print_alphabet();
    ft_putchar(':');
    ft_print_reverse_alphabet();
    ft_print_numbers();
    ft_is_negative(42);
    ft_is_negative(0);
    ft_is_negative(-2147483648);
    write(1, "\n", 1);
    ft_putnbr(0);
    write(1, " ", 1);
    ft_putnbr(2147483647);
    write(1, " ", 1);
    ft_putnbr(-2147483648);
    write(1, "\n", 1);
    /*ft_print_combn(9);
    write(1, "\n", 1);
    ft_print_combn(2);
    write(1, "\n", 1);
    ft_print_combn(1);
    write(1, "\n", 1);*/
}