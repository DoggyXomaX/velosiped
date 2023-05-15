#include "./Window.h"
#include <curses.h>

void Window_Create(Window *target, int x, int y, int width, int height) {
  target->win = newwin(height, width, y, x);
  target->x = x;
  target->y = y;
  target->width = width;
  target->height = height;
}

void Window_Update(Window *target) {
  box(target->win, 0, 0);
  mvwprintw(target->win, 1, 1, "Position: %d, %d", target->x, target->y);
  mvwprintw(target->win, 2, 1, "Size: %d, %d", target->width, target->height);
  wrefresh(target->win);
}

void Window_Fullscreen(Window *target) {
  int width, height;
  getmaxyx(stdscr, height, width);
  wresize(target->win, height, width);
  target->width = width;
  target->height = height;
}