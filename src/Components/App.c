#include "./App.h"
#include "./Window.h"
#include <curses.h>

int App_Init(int argc, char **argv) {
  initscr();

  Window window;

  Window_Create(&window, 0, 0, 30, 30);
  Window_Fullscreen(&window);
  
  refresh();
  Window_Update(&window);

  getch();
  endwin();

  return 0;
}
