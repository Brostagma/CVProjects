
#ifndef COM_EMIN_PLAYER_RESOURCES_H
#define COM_EMIN_PLAYER_RESOURCES_H

#include <string>

// NOTE: This struct next project will be a class
// struct PlayerResources {
//     private:
//         int m_gold;
//         int m_wood;
//         int m_stone;
//         int m_food;
//         int m_population;
//         int m_maxPopulation;
//         int m_maxGold;
//         int m_maxWood;
//         int m_maxStone;
//         int m_maxFood;
//     public:
//         PlayerResources();
//         ~PlayerResources();

//         void AddGold(int amount);
//         void AddWood(int amount);
//         void AddStone(int amount);
//         void AddFood(int amount);
//         void AddPopulation(int amount);

//         void SetMaxGold(int amount);
//         void SetMaxWood(int amount);
//         void SetMaxStone(int amount);
//         void SetMaxFood(int amount);
//         void SetMaxPopulation(int amount);

//         int GetGold();
//         int GetWood();
//         int GetStone();
//         int GetFood();
//         int GetPopulation();

//         int GetMaxGold();
//         int GetMaxWood();
//         int GetMaxStone();
//         int GetMaxFood();
//         int GetMaxPopulation();
// };

struct PlayerResources {
    private:
        std::string playerName;
        int health;
        int damage;
        int armor;
        int gold;
    public:
        PlayerResources();
        ~PlayerResources();

        void SetPlayerName(std::string name);
        void SetHealth(int amount);
        void SetDamage(int amount);
        void SetArmor(int amount);
        void SetGold(int amount);

    std::string GetPlayerName() const;
    int GetHealth() const;
    int GetDamage() const;
    int GetArmor() const;
    int GetGold() const;
};

PlayerResources::PlayerResources() {}

PlayerResources::~PlayerResources() {}

void PlayerResources::SetPlayerName(std::string name) {
    playerName = name;
}
void PlayerResources::SetHealth(int amount) {
    health = amount;
}
void PlayerResources::SetDamage(int amount) {
    damage = amount;
}
void PlayerResources::SetArmor(int amount) {
    armor = amount;
}
void PlayerResources::SetGold(int amount) {
    gold = amount;
}


std::string PlayerResources::GetPlayerName() const {
    return playerName;
}
int PlayerResources::GetHealth() const {
    return health;
}
int PlayerResources::GetDamage() const {
    return damage;
}
int PlayerResources::GetArmor() const {
    return armor;
}
int PlayerResources::GetGold() const {
    return gold;
}

#endif // COM_EMIN_PLAYER_RESOURCES_H