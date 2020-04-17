#ifndef NT_RECT_H
#define NT_RECT_H
#include "SDL2/SDL.h"
struct Rect : public SDL_Rect {
  Rect() : SDL_Rect({0, 0, 0, 0}) {}
  Rect(const SDL_Rect &_rect) : SDL_Rect(_rect) {}
  Rect(int _x, int _y, int _w, int _h) : SDL_Rect({_x, _y, _w, _h}) {}
  int left() const { return x; }
  int right() const { return x + w; }
  int bottom() const { return y + h; }
  int top() const { return y; }
  int width() const { return w; }
  int height() const { return h; }
};
#endif // RECT_H