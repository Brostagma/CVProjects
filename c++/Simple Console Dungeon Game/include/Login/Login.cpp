
#include "Login.h"

void Login::login(PlayerResources ps) {
    std::cout << "Please enter your user name: ";
    std::string userName;
    std::cin >> userName;
    ps.SetPlayerName(userName);
}