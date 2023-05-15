#ifndef __C_WINDOW_H__
#define __C_WINDOW_H__

#include <sys/ioctl.h>
#include <unistd.h>

typedef struct {
  int Width;
  int Height;
} Window;

typedef struct winsize WinSize;

void Window_GetSizeFromEnv(Window *target);

#endif
