
#include "Menu.h"

Menu::Menu() {}
Menu::~Menu() {}

void Menu::lgMenu(PlayerResources ps) {
    std::cout << "Welcome Console Dungeon Game!" << std::endl;
    Login login;
    login.login(ps);
    login.~Login();

    std::cout << "Welcome " << ps.GetPlayerName() << "!" << std::endl;
    std::cout << "Please select an option:" << std::endl;
    std::cout << "1. Start Game" << std::endl;
    std::cout << "2. Exit Game" << std::endl;
}