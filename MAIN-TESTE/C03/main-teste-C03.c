#include <stdio.h>
#include <string.h>
#include "ex00/ft_strcmp.c"
#include "ex01/ft_strncmp.c"
#include "ex02/ft_strcat.c"
#include "ex03/ft_strncat.c"
#include "ex04/ft_strstr.c"

int main () {
	printf("\n---- ft_strcmp --- ex00:\n");
	char str1[15];
   	char str2[15];
   	int ret;

   	strcpy(str1, "abcDef");
   	strcpy(str2, "abcdef");
   	ret = strcmp(str1, str2);
   	printf("______strcmp padrão:\n");
   	if(ret < 0) {
    	printf("str1 é menor que str2! Diferença: %d\n", ret);
   	} else if(ret > 0) {
    	printf("str2 é menor que str1! Diferença: %d\n", ret);
   	} else {
    	printf("str1 é igual a str2! Diferença: %d\n", ret);
   	}
   	ret = ft_strcmp(str1, str2);
   	printf("______ft_strcmp criada:\n");
   	if(ret < 0) {
    	printf("str1 é menor que str2! Diferença: %d\n", ret);
   	} else if(ret > 0) {
    	printf("str2 é menor que str1! Diferença: %d\n", ret);
   	} else {
    	printf("str1 é igual a str2! Diferença: %d\n", ret);
   	}
   //-------------------------------------------------------------------------
	printf("\n---- ft_strncmp --- ex01:\n");
	char stra[15];
   	char strb[15];
	int num;
   	unsigned int n = 3;

   	strcpy(stra, "abcdef");
   	strcpy(strb, "abcDef");
   	num = strncmp(stra, strb, n);
	printf("______strncmp padrão:\n");
   	if(num < 0) {
   		printf("str1 é menor que str2! Diferença: %d\n", num);
  	} else if(num > 0) {
   		printf("str2 é menor que str1! Diferença: %d\n", num);
   	} else {
    	printf("str1 é igual a str2! Diferença: %d\n", num);
   	}
   	num = ft_strncmp(stra, strb, n);
	printf("______ft_strncmp criada:\n");
   	if(num < 0) {
    	printf("str1 é menor que str2! Diferença: %d\n", num);
   	} else if(num > 0) {
    	printf("str2 é menor que str1! Diferença: %d\n", num);
   	} else {
    	printf("str1 é igual a str2! Diferença: %d\n", num);
   	}
	//-------------------------------------------------------------------------
	printf("\n---- ft_strcat --- ex02:\n");
	char src[50], dest[50];
   	char src1[50], dest1[50];

   	strcpy(src,  "Origem");
   	strcpy(dest, "Destino");
   	strcat(dest, src);
   	printf("> Destino final strcat:\t\t |%s|\n", dest);
   	strcpy(src1,  "Origem");
   	strcpy(dest1, "Destino");
   	ft_strcat(dest1, src1);
   	printf("< Destino Final ft_strcat:\t |%s|\n", dest1);
	//-------------------------------------------------------------------------
	printf("\n---- ft_strncat --- ex03:\n");
   	char srca[50], desta[50];
   	char src1a[50], dest1a[50];
   	unsigned int nb = 4;

   	strcpy(srca,  "Origem");
   	strcpy(desta, "Destino");
   	strncat(desta, srca, nb);
   	printf("> Destino final strcat:\t\t |%s|\n", desta);
   	strcpy(src1a,  "Origem");
   	strcpy(dest1a, "Destino");
   	ft_strncat(dest1a, src1a, nb);
   	printf("< Destino Final ft_strcat:\t |%s|\n", dest1a);
	//-------------------------------------------------------------------------
	printf("\n---- ft_strstr --- ex04:\n");
	const char haystack[20] = "Frase muito louca";
   	const char needle[10] = "to";
   	char haystack1[20] = "Frase muito louca";
   	char needle1[10] = "to";
   	char *sub;

   	sub = strstr(haystack, needle);
	printf("______strstr padrão:\n");
   	printf("A substring a partir de: %s\n", sub);
   	sub = ft_strstr(haystack1, needle1);
	printf("______ft_strstr criada:\n");
   	printf("A substring a partir de: %s\n", sub);
   	return(0);
}