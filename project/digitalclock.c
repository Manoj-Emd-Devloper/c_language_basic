#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int h = 1, m = 0, s = 0 ,d=1000;
    printf("Set the time in format of HH MM SS = ");
    scanf("%d %d %d", &h, &m, &s);

    if (h > 12 || m > 59 || s > 59)
    {
        printf("Error!");
        exit(1);
    }

    printf("time is : \n");
    int i=0;
    while (1)
    {
        s++;
        if (s > 59)
        {
            m++;
            s = 0;
        }
        if (m > 59)
        {
            h++;
            m = 0;
        }

        if (h >= 13)
        {   
            h = 1;
        }
        system("cls");
        printf("%02d : %02d : %02d ", h, m, s);
        Sleep(d);
    }
    return 0;
}
