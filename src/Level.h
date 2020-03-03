#ifndef LEVEL_H
#define LEVEL_H
#include "NTRect.h"
#include "WorldRenderer.h"
#include <string>
class b2World;
class Player;
class Level
{
  public:
    static Level* create(const std::string& filename);

    ~Level();

	//stuffs methods
	void update(float dt);

	void draw(SDL_Renderer* renderer);

	//setters && getters
    b2World* getWorld() const { return m_world; }

	const NTRect& getViewPort() const { return m_viewPort; }

  private:
	Level();

	bool initialize(const std::string& filename);

    b2World* m_world;

	NTRect m_viewPort;

	Player* m_player;

	WorldRenderer m_worldRenderer;
};
#endif // LEVEL_H