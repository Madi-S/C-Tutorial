#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[100];
    FILE *fpointer = fopen("test.txt", "r");

    fgets(line, 100, fpointer);
    fgets(line, 100, fpointer); // 2nd line

    printf("File data: %s", line);

    fclose(fpointer);
    return 0;
}
