#ifndef __C_WINDOW_H__
#define __C_WINDOW_H__

#include <curses.h>
#include <sys/ioctl.h>
#include <unistd.h>

typedef struct {
  WINDOW *win;
  int x;
  int y;
  int width;
  int height;
} Window;

void Window_Create(Window *target, int x, int y, int width, int height);
void Window_Update(Window *target);
void Window_Fullscreen(Window *target);

#endif
