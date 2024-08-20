/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int nota1;
    
    printf("Informe sua nota: \n");
    scanf("%d", &nota1);
    
    if (nota1 >=90 && nota1 <=100) {
        printf("EXCELENTE! :D");
    } else if (nota1 >=60 && nota1 <=79) {
        printf("BOM! :)");
    } else if (nota1 >=40 && nota1 <=59) {
        printf ("SUFICIENTE! :|");
    } else if (nota1 >=00 && nota1<=39) {
        printf("INSUFICIENTE! :(");
    } else {
        printf("Nota inválida!");
    }
    return 0;
}
