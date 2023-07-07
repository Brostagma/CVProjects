#ifndef COM_EMIN_PLAYER_H
#define COM_EMIN_PLAYER_H

#include "PlayerResources.h"

class Player {
    private:
        PlayerResources* ps;
public:
    Player();
    ~Player();

    PlayerResources GetPlayerResources();
};

#endif // COM_EMIN_PLAYER_H