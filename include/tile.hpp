#pragma once

#include <SDL2/SDL.h>

#define TILE_SIZE 100

enum class TileColor {
    WHITE,
    BLACK,
};

class tile_t {
  public:
    tile_t() = default;
    tile_t(int col, int row);
    ~tile_t();

    void render(SDL_Renderer *renderer);
    void handleRightClick();

  private:
    SDL_Rect mRect;
    TileColor mColor;

    int mCol, mRow;

    bool mHighlighted = false;
};