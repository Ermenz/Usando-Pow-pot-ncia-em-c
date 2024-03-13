/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    
    float a, b, c, x, y;
   
    
//------------Entrada de dados------------   
    printf("Informe o valor a:\n");
    scanf("%f", &a);
    
    printf("Informe o valor b:\n");
    scanf("%f", &b);
    
    printf("Informe o valor c:\n");
    scanf("%f", &c);
    
    printf("Informe o valor x:\n");
    scanf("%f", &x);

//-------------Execução dos dados---------
   y = a*pow(x,2)+ b*x + c;
   
//-------------Saída dos resultados-------
   printf("O valor de y é %.2f", y);




    return 0;
}
