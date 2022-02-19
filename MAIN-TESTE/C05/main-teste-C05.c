#include <stdio.h>
#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
#include "ex05/ft_sqrt.c"
#include "ex06/ft_is_prime.c"
#include "ex07/ft_find_next_prime.c"

int main()
{
    printf("\n---- ft_iterative_factorial --- ex00:\n");
    printf("fatorial de: %d = %d\n", 4, ft_iterative_factorial(4));
    printf("fatorial de: %d = %d\n", 3, ft_iterative_factorial(3));
    printf("fatorial de: %d = %d\n", 13, ft_iterative_factorial(13));
    printf("fatorial de: %d = %d\n", 2, ft_iterative_factorial(2));
    printf("fatorial de: %d = %d\n", 1, ft_iterative_factorial(1));
    printf("fatorial de: %d = %d\n", 0, ft_iterative_factorial(0));
    printf("fatorial de: -%d = %d\n", -0, ft_iterative_factorial(-0));
    printf("fatorial de: %d = %d\n", -1, ft_iterative_factorial(-1));
    printf("fatorial de: %d = %d\n", -123, ft_iterative_factorial(-123));
    //----------------------------------------------------------------------
    printf("\n---- ft_recursive_factorial --- ex01:\n");
    printf("fatorial de: %d = %d\n", 4, ft_recursive_factorial(4));
    printf("fatorial de: %d = %d\n", 3, ft_recursive_factorial(3));
    printf("fatorial de: %d = %d\n", 13, ft_recursive_factorial(13));
    printf("fatorial de: %d = %d\n", 2, ft_recursive_factorial(2));
    printf("fatorial de: %d = %d\n", 1, ft_recursive_factorial(1));
    printf("fatorial de: %d = %d\n", 0, ft_recursive_factorial(0));
    printf("fatorial de: -%d = %d\n", -0, ft_recursive_factorial(-0));
    printf("fatorial de: %d = %d\n", -1, ft_recursive_factorial(-1));
    printf("fatorial de: %d = %d\n", -123, ft_recursive_factorial(-123));
	//-----------------------------------------------------------------------
	printf("\n---- ft_iterative_power --- ex02:\n");
    printf("%d elevado à %d = %d\n", 2, 3, ft_iterative_power(2, 3));
    printf("%d elevado à %d = %d\n", 3, 2, ft_iterative_power(3, 2));
    printf("%d elevado à %d = %d\n", 3, 3, ft_iterative_power(3, 3));
    printf("%d elevado à %d = %d\n", 3, 1, ft_iterative_power(3, 1));
    printf("%d elevado à %d = %d\n", 3, 0, ft_iterative_power(3, 0));
    printf("%d elevado à %d = %d\n", 3, -1, ft_iterative_power(3, -1));
    printf("%d elevado à %d = %d\n", 0, 0, ft_iterative_power(0, 0));
	//------------------------------------------------------------------------
	printf("\n---- ft_recursive_power --- ex03:\n");
    printf("%d elevado à %d = %d\n", 2, 3, ft_recursive_power(2, 3));
    printf("%d elevado à %d = %d\n", 3, 2, ft_recursive_power(3, 2));
    printf("%d elevado à %d = %d\n", 3, 3, ft_recursive_power(3, 3));
    printf("%d elevado à %d = %d\n", 3, 1, ft_recursive_power(3, 1));
    printf("%d elevado à %d = %d\n", 3, 0, ft_recursive_power(3, 0));
    printf("%d elevado à %d = %d\n", 3, -1, ft_recursive_power(3, -1));
    printf("%d elevado à %d = %d\n", 0, 5, ft_recursive_power(0, 5));
	printf("%d elevado à %d = %d\n", 0, 0, ft_recursive_power(0, 0));
	//------------------------------------------------------------------------
	printf("\n---- ft_fibonacci --- ex04:\n");
    printf("Index %d é o numero: %d\n", -1, ft_fibonacci(-1));
    printf("Index %d é o numero: %d\n", 0, ft_fibonacci(0));
    printf("Index %d é o numero: %d\n", 1, ft_fibonacci(1));
    printf("Index %d é o numero: %d\n", 2, ft_fibonacci(2));
    printf("Index %d é o numero: %d\n", 3, ft_fibonacci(3));
    printf("Index %d é o numero: %d\n", 4, ft_fibonacci(4));
    printf("Index %d é o numero: %d\n", 5, ft_fibonacci(5));
    printf("Index %d é o numero: %d\n", 6, ft_fibonacci(6));
    printf("Index %d é o numero: %d\n", 7, ft_fibonacci(7));
    printf("Index %d é o numero: %d\n", 8, ft_fibonacci(8));
	//-------------------------------------------------------------------------
	printf("\n---- ft_sqrt --- ex05:\n");
    printf("A raiz de %d é: %d\n", -10, ft_sqrt(-10));
    printf("A raiz de %d é: %d\n", -1, ft_sqrt(-1));
    printf("A raiz de %d é: %d\n", 0, ft_sqrt(0));
    printf("A raiz de %d é: %d\n", 1, ft_sqrt(1));
    printf("A raiz de %d é: %d\n", 2, ft_sqrt(2));
    printf("A raiz de %d é: %d\n", 4, ft_sqrt(4));
    printf("A raiz de %d é: %d\n", 9, ft_sqrt(9));
    printf("A raiz de %d é: %d\n", 16, ft_sqrt(16));
    printf("A raiz de %d é: %d\n", 25, ft_sqrt(25));
    printf("A raiz de %d é: %d\n", 10, ft_sqrt(10));
    printf("A raiz de %d é: %d\n", 12, ft_sqrt(12));
    printf("A raiz de %d é: %d\n", 100000000, ft_sqrt(100000000));
	//-------------------------------------------------------------------------
	printf("\n---- ft_is_prime --- ex06:\n");
	printf("O número %d é primo? %d\n", -10, ft_is_prime(-10));
    printf("O número %d é primo? %d\n", -1, ft_is_prime(-1));
    printf("O número %d é primo? %d\n", 0, ft_is_prime(0));
    printf("O número %d é primo? %d\n", 1, ft_is_prime(1));
    printf("O número %d é primo? %d\n", 2, ft_is_prime(2));
    printf("O número %d é primo? %d\n", 4, ft_is_prime(4));
    printf("O número %d é primo? %d\n", 7, ft_is_prime(7));
    printf("O número %d é primo? %d\n", 16, ft_is_prime(16));
    printf("O número %d é primo? %d\n", 390, ft_is_prime(390));
    printf("O número %d é primo? %d\n", 409, ft_is_prime(409));
    printf("O número %d é primo? %d\n", 415, ft_is_prime(415));
    printf("O número %d é primo? %d\n", 7919, ft_is_prime(7919));
	printf("O número %d é primo? %d\n", 2147483646, ft_is_prime(2147483646));
	printf("O número %d é primo? %d\n", 2147483647, ft_is_prime(2147483647));
	//--------------------------------------------------------------------------
	printf("\n---- ft_find_next_prime --- ex07:\n");
	printf("Após %d o próximo primo é : %d\n", 0, ft_find_next_prime(0));
    printf("Após %d o próximo primo é : %d\n", 1, ft_find_next_prime(1));
    printf("Após %d o próximo primo é : %d\n", 2, ft_find_next_prime(2));
    printf("Após %d o próximo primo é : %d\n", 4, ft_find_next_prime(4));
    printf("Após %d o próximo primo é : %d\n", 7, ft_find_next_prime(7));
	printf("Após %d o próximo primo é : %d\n", 390, ft_find_next_prime(390));
    printf("Após %d o próximo primo é : %d\n", 409, ft_find_next_prime(409));
    printf("Após %d o próximo primo é : %d\n", 415, ft_find_next_prime(415));
    printf("Após %d o próximo primo é : %d\n", 7919, ft_find_next_prime(7919));
    printf("Após %d o próximo primo é : %d\n", 2147483646, ft_find_next_prime(2000985456));
    printf("Após %d o próximo primo é : %d\n", 2147483647, ft_find_next_prime(2147483647));

    return (0);
}