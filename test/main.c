#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char *argv[])
{
    printf("Programujeme\n v jazyku C.\n");
    printf("271 . 723 = %d\n", 271 * 723);

    printf("velkost datoveho typu float %lu B\n", sizeof(float));

    printf("datovy typ\t velkost \t rozsah \t\n");
    printf("char \t\t %lu \t\t %d az %d \n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("short \t\t %lu \t\t %d az %d \n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("int \t\t %lu \t\t %d az %d \n", sizeof(int), INT_MIN, INT_MAX);
    printf("long \t\t %lu \t\t %ld az %ld \n", sizeof(long), LONG_MIN, LONG_MAX);
    printf("float \t\t %lu \t\t %f az %f \n", sizeof(float), FLT_MIN, FLT_MAX);
    printf("double \t\t %lu \t\t %lf az %lf \n", sizeof(double), DBL_MIN, DBL_MAX);

    system("PAUSE");
    return 0;
}
