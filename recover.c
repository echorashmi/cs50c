#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char block[512];
    FILE* stream = fopen("card.raw", "r");
    if(stream != NULL)
    {
        fread(block, 512, 1, stream);
        printf("%s", block);
    }
    fclose(stream);
}