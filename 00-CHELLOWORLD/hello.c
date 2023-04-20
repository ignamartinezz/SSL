#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *archivo=fopen("output.txt", "w");
    fprintf(archivo,"hello world!");
    fclose(archivo);
    return 0;
}
