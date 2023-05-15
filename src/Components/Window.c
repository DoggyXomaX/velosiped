#include "./Window.h"

void Window_GetSizeFromEnv(Window *target) {
  WinSize winSize;
  ioctl(STDOUT_FILENO, TIOCGWINSZ, &winSize);

  target->Width = winSize.ws_col;
  target->Height = winSize.ws_row;
}
