
#include "Game.h"

Game::Game() {Run();}

Game::~Game() {}

void Game::Run() {
    Player player;
    Menu menu;
    while(true) {
        menu.lgMenu(player.GetPlayerResources());
    }
}

void Game::HandleEvents() {}