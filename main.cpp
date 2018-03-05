#include <iostream>

#include "SIMON.HPP"

int main () {

    simon s1;    
    std::string name;
    double level;
    double hitpoints;
    double strength;
    double defense;
    double vitality;
    double abilitypoints;
    std::string inven;

    std::cout << "Enter your name:" << std::endl;
    std::getline(std::cin, name);
    std::cout << "Enter your level:" << std::endl;
    std::cin >> level;
    std::cout << "Enter your HP:" << std::endl;
    std::cin >> hitpoints;
    std::cout << "Enter your strength:" << std::endl;
    std::cin >> strength;
    std::cout << "Enter your defense:" << std::endl;
    std::cin >> defense;
    std::cout << "Enter your vitality:" << std::endl;
    std::cin >> vitality;
    std::cout << "Enter your AP:" << std::endl;
    std::cin >> abilitypoints;
    std::cout << "Enter your inventory item:" << std::endl;
    std::getline(std::cin, inven);

    std::cout << "Calculating Current Stats ..." << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << "-----------%%--------------" << std::endl;
    std::cout << "-----------%%--------------" << std::endl;
    std::cout << "---------------------------" << std::endl;

    s1.setName(name);
    s1.setLvl(level);
    s1.setHp(hitpoints);
    s1.setStr(strength);
    s1.setDef(defense);
    s1.setVit(vitality);
    s1.setAp(abilitypoints);
    s1.setinItem(inven, 5);
    s1.setWeapon("Olive Sword", 15);

    s1.displayStats();
    
    return 0;
};
