#ifndef COM_EMIN_GAME_H
#define COM_EMIN_GAME_H

#include "../Player/Player.h"
#include "../Menu/Menu.h"

class Game {
public:
    Game();
    ~Game();

    void Run();
    void HandleEvents();
};


#endif // COM_EMIN_GAME_H