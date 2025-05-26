// code is not complate.
#include <stdio.h>
#include <stdlib.h>

char buf[20][6] = {0};
int main()
{
    int i = 0;
    for (i = 0; i < 20; i++)
    {
        snprintf(buf[i], 6, "file_name_%d", i);
    }
    return 0;
}