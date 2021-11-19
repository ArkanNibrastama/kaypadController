#include<ncurses/curses.h>
#include<string.h>

#define KEY_ESC 27

int main(){

    initscr();

    // activate keypad button
    keypad(stdscr, true);
    int button, x, y, panjangArena, lebarArena;
    char gameCharacter [100] = "arkan";

    panjangArena = 12 + strlen(gameCharacter);
    lebarArena = 12;

    x = 1;
    y = 1;

    mvprintw(y,x,gameCharacter);
    refresh();

    while((button = getch()) != KEY_ESC){
        
        if (button == KEY_DOWN && y != lebarArena){

            y += 1;

        }

        else if (button == KEY_UP && y != 1){

            y -= 1;

        }

        else if (button == KEY_RIGHT && x != panjangArena){

            x += 1;

        }

        else if (button == KEY_LEFT && x != 1){

            x -= 1;

        }

        clear();
        mvprintw(y, x,gameCharacter);
        refresh();

    }

    endwin();

}