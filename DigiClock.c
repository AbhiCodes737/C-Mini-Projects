#include <stdio.h>
#include <windows.h>

int main()
{
    int h, m, s;
    int d = 1000; // delay of 1000 ms or 1 second
    printf("Set time: ");
    scanf("%d%d%d", &h, &m, &s);
    if (h > 12 || m > 60 || s > 60)
    { // checking user input
        printf("ERROR! \n");
        exit(0);
    }

    while (1)
    {        // infinite loop
        s++; // incrementing second value for each loop
        if (s > 59)
        { // incrementing minute value based on seconds
            m++;
            s = 0;
        }
        if (m > 59)
        { // incrementing hour value based on minutes
            h++;
            m = 0;
            ;
        }
        if (h > 12)
        { // 12 hour format
            h = 1;
        }
        printf("\n Clock: ");
        printf("\n %02d:%02d:%02d", h, m, s); // printing the clock every loop
        Sleep(d);                             // delay function for second increment
        system("cls");                        // clears the screen
    }
}