#include <iostream>

#include "SIMON.HPP"


int main () {

    simon s1;    
    std::string player;
    double level;
    double hitpoints;
    double strength;
    double defense;
    double vitality;
    double abilitypoints;


    std::cout << "Enter your name:" << std::endl;
    std::cin >> player;
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

    s1.setLvl(level);
    s1.setHp(hitpoints);
    s1.setStr(strength);
    s1.setDef(defense);
    s1.setVit(vitality);
    s1.setAp(abilitypoints);
    s1.setinItem("Bus Tub", 5);
    s1.setWeapon("Olive Sword", 15);

    std::cout << "                      " << std::endl;
    std::cout << "                      " << std::endl;
    std::cout << "-------||+~~+||-------" << std::endl;
    std::cout << player << "'s current stats:" << std::endl;
    std::cout << "---------****---------" << std::endl;
    std::cout << "     LVL: " << s1.getLvl()  << std::endl;
    std::cout << "     HP:  " << s1.getHp()  << std::endl;
    std::cout << "     STR: " << s1.getStr() << std::endl;
    std::cout << "     DEF: " << s1.getDef() << std::endl;
    std::cout << "     VIT: " << s1.getVit() << std::endl;
    std::cout << "     AP:  " << s1.getAp() << std::endl;
    std::cout << "     DMG: " << s1.getDmg() << std::endl;
    std::cout << "     WPN: " << s1.getWeapon() << std::endl;
    std::cout << "     INV: " << s1.getinItem() << std::endl;
    std::cout << "---------****---------" << std::endl;
    std::cout << "     T.W.A.O.K.K.     " << std::endl;
    std::cout << "-------||+~~+||-------" << std::endl;
    std::cout << "                      " << std::endl;
    std::cout << "                      " << std::endl;

    return 0;
};
