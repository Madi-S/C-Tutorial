#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fpointer = fopen("test.txt", "w"); // "a" (append), "w" (write), "r" (read)

    // Write data to a file
    fprintf(fpointer, "Written by a C Program\n");
    fclose(fpointer);

    FILE *fpointer2 = fopen("test.txt", "a");

    fprintf(fpointer, "Added by a C Program");
    fclose(fpointer2);

    return 0;
}
