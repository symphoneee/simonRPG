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
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    std::cout << "Calculating Current Stats ..." << std::endl;
    std::cout << "-----------%%--------------" << std::endl;
    std::cout << "-----------%%--------------" << std::endl;
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    std::cout << "      PRESS ENTER        " << std::endl;
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    s1.setName(name);
    s1.setLvl(11);
    s1.setHp(50);
    s1.setStr(24);
    s1.setDef(23);
    s1.setVit(27);
    s1.setAp(10);
    s1.setinItem("Bus Tub", 5);
    s1.setWeapon("Olive Sword", 15);

    s1.displayStats();
    
    return 0;
};
