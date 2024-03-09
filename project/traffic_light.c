//wap to create a traffic light using enum
#include <stdio.h>
#include <unistd.h> // for sleep function

#define SEC 5

typedef enum color
{
    RED,
    YELLOW,
    GREEN
} color_t;

void print_cur_state(color_t current_state)
{
    switch (current_state)
    {
    case RED:
        printf("red\n");
        break;
    case YELLOW:
        printf("yellow\n");
        break;
    case GREEN:
        printf("green\n");
        break;
    }
}

void chg_cur_state(color_t *current_state)
{
    switch (*current_state)
    {
    case RED:
        *current_state = YELLOW;
        break;
    case YELLOW:
        *current_state = GREEN;
        break;
    case GREEN:
        *current_state = YELLOW;
        break;
    }
}

int main()
{
    color_t current_state = RED;
    while (1)
    {
        while (current_state != GREEN)
        {
            print_cur_state(current_state);
            chg_cur_state(&current_state);
            sleep(SEC); // Add delay after each state change
        }
        if (current_state == GREEN)
        {
            print_cur_state(GREEN);
            sleep(SEC); // Add delay after each state change
            print_cur_state(YELLOW);
            sleep(SEC); // Add delay after each state change
            current_state = RED;
        }
    }
    return 0;
}
