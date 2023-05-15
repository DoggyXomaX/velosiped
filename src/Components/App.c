#include "./App.h"
#include "./Window.h"

int App_Init(int argc, char **argv) {
  Window window;
  Window_GetSizeFromEnv(&window);

  printf("Terminal[%d, %d]\n", window.Width, window.Height);

  initscr();
  printw("Hello, ncurses!");
  refresh();
  getch();
  endwin();

  return 0;
}
