#include "splashkit.h"

void draw_house()
{
clear_screen(COLOR_WHITE);

fill_ellipse(COLOR_YELLOW, 0, 300, 800, 300);
fill_rectangle(COLOR_BLUE, 300, 300, 200, 200);
fill_triangle(COLOR_ORANGE, 250, 300, 400, 150, 550, 300);

refresh_screen();
}

int main()
{

    open_window("Drawing", 800, 600);

    draw_house();
    delay(1000);


    clear_screen(COLOR_WHITE);
    refresh_screen(60);
    delay(500);

    draw_house();
    delay(1000);
    
    return 0;
}