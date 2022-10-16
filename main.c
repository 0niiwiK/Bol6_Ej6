#include <stdio.h>

int main() {
    int anio;
    printf("Introduce el anio: ");
    scanf("%d",&anio);
    if (anio%4==0){
        if (anio%100==0 && anio%400!=0)
            printf("NO es bisiesto");
        else
            printf("SI es bisiesto");
    } else
        printf("NO es bisiesto");
    return 0;
}
