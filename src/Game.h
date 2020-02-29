#ifndef GAME_H
#define GAME_H
#include "SDL.h"
#include "Map.h"
class Game
{
public:
    Game();

    ~Game();

    bool init();

    void tick(float dt);

    void paint();

    SDL_Renderer* getRenderer() const { return m_renderer; }

    SDL_Window* getWindow() const { return m_window; }

    bool isRunning() const { return m_isRunning; }

	static Game* getInstance() {return instance; }

private:
    bool m_isRunning;
    SDL_Renderer* m_renderer;
    SDL_Window* m_window;

    Map m_map;

    static Game* instance;

public:
    static const int WIDTH = 480;
    static const int HEIGHT = 320;
};

#endif // GAME_H
