#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"
#include "ex07/ft_rev_int_tab.c"
#include "ex08/ft_sort_int_tab.c"

int main(void) {
	printf("---- ex00:\n");
	int value = 42;
	int *p_nbr = &value;
	ft_ft(p_nbr);
	printf("%i = %i\n", value, *p_nbr);
    //-------------------------------------------------------------------------
    printf("---- ex01:\n");
	int num   = 42;
	int *n1   = &num;
	int **n2  = &n1;
	int ***n3 = &n2;
	int ****n4 = &n3;
	int *****n5 = &n4;
	int ******n6 = &n5;
	int *******n7 = &n6;
	int ********n8 = &n7;
	int *********n9 = &n8;

	ft_ultimate_ft(n9);
	printf("%i = %i\n", num, *********n9);
    //-------------------------------------------------------------------------
    printf("---- ex02:\n");
	int a = 21, b = 41;
	printf("> %i, %i\n", a, b);
 	ft_swap(&a, &b);
	printf("< %i, %i\n", a, b);
    //-------------------------------------------------------------------------
	printf("---- ex03:\n");

	a = 42; b = 2;
	printf("> a: %i b: %i\n", a, b);
	ft_div_mod(a, b, &a, &b);
	printf("< a: %i b: %i\n", a, b);

	a = 1024; b = 2;
	printf("> a: %i b: %i\n", a, b);
	ft_div_mod(a, b, &a, &b);
	printf("< a: %i b: %i\n", a, b);

	a = 100; b = 3;
	printf("> a: %i b: %i\n", a, b);
	ft_div_mod(a, b, &a, &b);
	printf("< a: %i b: %i\n", a, b);
    //-------------------------------------------------------------------------
	printf("---- ex04:\n");

	a = 42; b = 2;
	printf("> a: %i b: %i\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("< a: %i b: %i\n", a, b);

	a = 1024; b = 2;
	printf("> a: %i b: %i\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("< a: %i b: %i\n", a, b);

	a = 100; b = 3;
	printf("> a: %i b: %i\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("< a: %i b: %i\n", a, b);    
    //-------------------------------------------------------------------------    
	printf("---- ex05:\n");

	char str0[] = "";
	printf("> %s\n", str0);
	ft_putstr("< ");
	ft_putstr(str0);
	printf("$\n");

	char str1[] = "@";
	printf("> %s\n", str1);
	ft_putstr("< ");
	ft_putstr(str1);
	printf("$\n");

	char str2[] = "12";
	printf("> %s\n", str2);
	ft_putstr("< ");
	ft_putstr(str2);
	ft_putstr("$\n");

	char str3[] = "123";
	printf("> %s\n", str3);
	ft_putstr("< ");
	ft_putstr(str3);
	ft_putstr("$\n");

	char str4[] = "O rato roeu a roupa do rei de roma!";
	printf("> %s\n", str4);
	ft_putstr("< ");
	ft_putstr(str4);
	ft_putstr("$\n");
    //-------------------------------------------------------------------------   
	printf("---- ex06:\n");
    
    char str60[] = "";
	printf("%s$\n< %li\n> %i\n", str60, strlen(str60), ft_strlen(str60));

	char str61[] = "@";
	printf("%s$\n< %li\n> %i\n", str61, strlen(str61), ft_strlen(str61));

	char str62[] = "12";
	printf("%s$\n< %li\n> %i\n", str62, strlen(str62), ft_strlen(str62));

	char str63[] = "Oi";
	printf("%s$\n< %li\n> %i\n", str63, strlen(str63), ft_strlen(str63));

	char str64[] = "Ola";
	printf("%s$\n< %li\n> %i\n", str64, strlen(str64), ft_strlen(str64));

	char str65[] = "O rato roeu a roupa do rei de roma!";
	printf("%s$\n< %li\n> %i\n", str65, strlen(str65), ft_strlen(str65));
    
    //-------------------------------------------------------------------------
    int arr_70[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr_71[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int arr_72[] = {5};
    int arr_73[] = {8, 7};

    int size_70 = sizeof(arr_70)/sizeof(int);
    int size_71 = sizeof(arr_71)/sizeof(int);
    int size_72 = sizeof(arr_72)/sizeof(int);
    int size_73 = sizeof(arr_73)/sizeof(int);
	printf("---- ex07:\n");
    printf("> ");    
    for (int i = 0; i < size_70; i++) {
        printf("%5d ", arr_70[i]);
    }
    printf("\n< ");
    ft_rev_int_tab(arr_70, size_70);
    for (int i = 0; i < size_70; i++) {
        printf("%5d ", arr_70[i]);
    }
    printf("\n\n");

    printf("> ");    
    for (int i = 0; i < size_71; i++) {
        printf("%5d ", arr_71[i]);
    }
    printf("\n< ");
    ft_rev_int_tab(arr_71, size_71);
    for (int i = 0; i < size_71; i++) {
        printf("%5d ", arr_71[i]);
    }
    printf("\n\n");

    printf("> ");    
    for (int i = 0; i < size_72; i++) {
        printf("%5d ", arr_72[i]);
    }
    printf("\n< ");
    ft_rev_int_tab(arr_72, size_72);
    for (int i = 0; i < size_72; i++) {
        printf("%5d ", arr_72[i]);
    }
    printf("\n\n");

    printf("> ");    
    for (int i = 0; i < size_73; i++) {
        printf("%5d ", arr_73[i]);
    }
    printf("\n< ");
    ft_rev_int_tab(arr_73, size_73);
    for (int i = 0; i < size_73; i++) {
        printf("%5d ", arr_73[i]);
    }
    printf("\n");
    //-------------------------------------------------------------------------
	printf("---- ex08:\n");

    int arr_80[] = {69, 123, 2, 59, 4, 45, 6, 0, 8, -123};
    int arr_81[] = {8, 7, 6, 5, 4, 3, 2, 1, 0};
    int arr_82[] = {0};
    int arr_83[] = {INT_MIN};
    int arr_84[] = {INT_MAX};
    int arr_85[] = {INT_MAX, 0, INT_MIN};

    int arr_86[] = {-1087,-3376,-1153,-2297,675,-2737,92,-1299,1815,516,1075,-3300,-2301,-504,1808,-490,15,-1428,3681,2807,-985,-2678,2898,-1394,-3453,-4099,-2790,1862,1064,-521,-3376,-237,12,601,-2490,3675,-1033,412,-42,1167,-940,1351,-230,1591,2621,729,-2891,-60,-3554,-3512,-3075,-2749,-3577,-3222,-988,-3541,-3673,-3230,1023,1581,-1812,1768,-1718,-2089,-2838,2877,1155,-1387,282,-1607,3301,-2635,-1584,62,-2433,3955,515,-1902,3393,-619,-2184,-3290,4147,-737,4058,1861,-1889,-1471,-915,3787,3624,2327,3688,490,-1073,1073,864,3574,-4096,75,257,2771,-1453,-2155,-443,-338,-3330,2949,-2272,-1909,3650,-3952,-474,1219,-31,-3768,-2717,-1267,-931,2905,-490,-3094,-2124,679,-2878,-871,-446,829,-3697,-2186,1702,2113,132,-3476,-1409,3985,556,2786,181,-3362,1219,-2336,1548,-779,-1369,-1679,3512,-2642,-1661,-2230,-3789,1961,40,-3871,-2358,3996,1764,3674,-184,582,-4174,-684,-2764,-3450,348,2822,-1371,-3064,406,-3944,-890,2813,2748,-306,2497,-296,-3972,886,-2174,2848,1842,-1643,-2035,-2903,3293,-1504,-2446,-306,-134,-518,-419,-4002,-3899,2914,-331,3799,1566,-1159,3667,4135,3300,987,-414,1819,-2251,3053,-1786,-2737,-683,4189,-3600,-657,-180,-2050,-1440,-2985,-3880,1526,1214,1111,-2630,-4146,-2222,-4196,3599,-124,-3389,-3103,445,3773,-1506,-3822,-1848,1941,-3836,-3036,-1964,575,-966,527,3545,-533,-2327,-3589,-2171,579,3725,2164,-2272,-1086,1379,-1300,-290,-62,-428,-851,-3063,2267,-3503,3775,2420,-363,1435,2887,-1442,-1005,-3306,-1159,2154,3970,-3104,3628,1852,-3749,-4080,1357,-775,-1121,1159,-4160,1702,1014,-3145,1001,2586,-219,2816,-3979,1937,1814,1604,-2696,-2140,-4112,-3644,-3696,3785,3521,-3100,-434,1692,-3888,2043,-2888,-2353,-2463,535,138,-1915,-3843,-3776,-62,322,-1457,3326,3941,640,3847,1399,-2086,-4151,761,461,95,3478,-29,4119,3967,601,2595,-1700,-306,-1102,4083,-2411,-3400,-2932,1633,3504,-2426,3183,-2618,3632,-1465,4015,1495,-2303,-947,1540,-798,2518,3690,875,-278,-4176,-3897,-3666,1955,3360,790,-3995,3148,-3096,205,-3264,-3447,253,-1986,1048,1260,-391,2894,-2087,-3357,529,3287,2593,-3712,-946,1929,-2288,2338,2093,1722,-3110,-3389,4097,-3907,-197,3966};
    int size_86 = sizeof(arr_86)/sizeof(int);
    int size_80 = sizeof(arr_80)/sizeof(int);
    int size_81 = sizeof(arr_81)/sizeof(int);
    int size_82 = sizeof(arr_82)/sizeof(int);
    int size_83 = sizeof(arr_83)/sizeof(int);
    int size_84 = sizeof(arr_84)/sizeof(int);
    int size_85 = sizeof(arr_85)/sizeof(int);


    //-----------------------
    printf("> ");    
    for (int i = 0; i < size_80; i++) {
        printf("%5d ", arr_80[i]);
    }
    printf("\n< ");
    ft_sort_int_tab(arr_80, size_80);
    for (int i = 0; i < size_80; i++) {
        printf("%5d ", arr_80[i]);
    }
    printf("\n\n");
    //-----------------------
    printf("> ");    
    for (int i = 0; i < size_81; i++) {
        printf("%5d ", arr_81[i]);
    }
    printf("\n< ");
    ft_sort_int_tab(arr_81, size_81);
    for (int i = 0; i < size_81; i++) {
        printf("%5d ", arr_81[i]);
    }
    printf("\n\n");
    //-----------------------
    printf("> ");    
    for (int i = 0; i < size_82; i++) {
        printf("%5d ", arr_82[i]);
    }
    printf("\n< ");
    ft_sort_int_tab(arr_82, size_82);
    for (int i = 0; i < size_82; i++) {
        printf("%5d ", arr_82[i]);
    }
    printf("\n\n");
    //-----------------------
    printf("> ");    
    for (int i = 0; i < size_83; i++) {
        printf("%5d ", arr_83[i]);
    }
    printf("\n< ");
    ft_sort_int_tab(arr_83, size_83);
    for (int i = 0; i < size_83; i++) {
        printf("%5d ", arr_83[i]);
    }
    printf("\n\n");
    //-----------------------
    printf("> ");    
    for (int i = 0; i < size_84; i++) {
        printf("%5d ", arr_84[i]);
    }
    printf("\n< ");
    ft_sort_int_tab(arr_84, size_84);
    for (int i = 0; i < size_84; i++) {
        printf("%5d ", arr_84[i]);
    }
    printf("\n\n");
    //-----------------------
    printf("> ");    
    for (int i = 0; i < size_85; i++) {
        printf("%5d ", arr_85[i]);
    }
    printf("\n< ");
    ft_sort_int_tab(arr_85, size_85);
    for (int i = 0; i < size_85; i++) {
        printf("%5d ", arr_85[i]);
    }
    printf("\n\n");
    //-----------------------
    printf("> ");    
    for (int i = 0; i < size_86; i++) {
        printf("%5d ", arr_86[i]);
    }
    printf("\n< ");
    ft_sort_int_tab(arr_86, size_86);
    for (int i = 0; i < size_86; i++) {
        printf("%5d ", arr_86[i]);
    }
    printf("\n");
    //-------------------------------------------------------------------------
    return 0;    
}
