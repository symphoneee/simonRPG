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
    std::string weapon;
    double ibonus;
    double wbonus;

    std::cout << "Enter your name:" << std::endl;
    std::getline(std::cin, name);
    
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    std::cout << "Calculating Current Stats ..." << std::endl;
    std::cout << "-----------%%--------------" << std::endl;
    std::cout << "-----------%%--------------" << std::endl;
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    
    s1.setName(name);
    s1.setLvl(level);
    s1.setHp(hitpoints);
    s1.setStr(strength);
    s1.setDef(defense);
    s1.setVit(vitality);
    s1.setAp(abilitypoints);
    s1.setinItem(inven);
    s1.setWeapon(weapon);

    s1.displayStats();
    
    std::cin.ignore();
    std::cin.get();
    
    return 0;
};
