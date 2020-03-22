#ifndef LEVEL_H
#define LEVEL_H
#include "AssertManager.h"
#include "NTRect.h"
#include "TileSet.h"
#include "WorldRenderer.h"
#include "box2d/box2d.h"
#include <vector>
class Monster;
class Player;
class ObjectList;
class TiledMap;
class Level
{
  public:
    Level();
    ~Level();

    /// getters
    const NTRect&                getViewport() const;
    b2World*                     getWorld() const;
    Player*                      getPlayer() const;
    const std::vector<TileSet*>& getTilesets() const;

    // stuff
    bool init(const std::string& filename);
    void render(float deltaTime);
    void addMonster(Monster* monster);
    void removeMonster(Monster* monster);
    void setPaused(bool paused);

  private:
	void tick(float deltaTime);
    /// data fields
    bool                  m_isPaused;
    Player*               m_player;
    ObjectList*           m_monsters;
    std::vector<TileSet*> m_tileSets;
    b2World*              m_world;
    TiledMap*             m_tiledMap;
    NTRect                m_viewport;
    WorldRenderer*        m_worldRenderer;

    static const int MAX_SIZE = 20;
    Monster*         m_monstersToBeRemoved[MAX_SIZE];
    int              m_monstersToBeRemovedCount;
};
#endif // LEVEL_H
