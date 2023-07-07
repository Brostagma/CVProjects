
#include "Player.h"

Player::Player() {
    PlayerResources playerResources;
    ps = &playerResources;
}

Player::~Player() {}

PlayerResources Player::GetPlayerResources() {
    return *ps;
}