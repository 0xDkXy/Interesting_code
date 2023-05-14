#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main(int argc, char** argv)
{
    int defaultSize = 1;
    if (argc > 1)
    {
        defaultSize = atoi(argv[1]);
    }
    printf("default size: %d\n", defaultSize);
    int voidSize = sizeof(void*);
    printf("sizeof void* is: %d\n", voidSize);
    printf("the minium size of chunk is: %d\n", 4 * voidSize);
    printf("the size of char is: %d\n", sizeof(char));
    char *memTest = (char *)malloc(sizeof(char) * defaultSize);
    memTest -= 8;
    printf("the real value of pointer:\n");
    for(int i = 0; i < 16; ++i)
    {
        printf("0x%x: %08b\n",memTest, *memTest);
        memTest++;
    }
    
    return 0;
}

