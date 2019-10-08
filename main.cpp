#include <ncurses.h>

int main()
{
    initscr();                  // Start curses mode
    clear();
    noecho();
    cbreak();
    printw("");                 // Print Something to the screen
    timeout(-1);
    WINDOW *menu_win;
    menu_win = newwin(10, 30, 7, 25);
    keypad(menu_win, TRUE);
    nodelay(menu_win, FALSE);
    int new_press = 0;
    refresh();
    while(new_press != 'q') {
        new_press = wgetch(menu_win);
        switch(new_press){

            case KEY_UP:
                /*
                 * Do something here
                 */
                refresh();
                break;

            case KEY_DOWN:
                /*
                 * Do something here
                 */
                refresh();
                break;

            case KEY_LEFT:
                /*
                 * Do something here
                 */
                refresh();
                break;

            case KEY_RIGHT:
                /*
                 * Do something here
                 */
                refresh();
                break;

            default:
                // Default Case Goes Here
                refresh();
                break;
            }
        refresh();
        }
    endwin();
    return 0;
}