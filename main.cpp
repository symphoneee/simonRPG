#include <iostream>

#include "SIMON.HPP"


int main () {

    simon s1;    

    s1.setHp(50);
    s1.setStr(24);
    s1.setDef(27);
    s1.setVit(27);
    s1.setAp(10);
    s1.setinItem("Bus Tub", 5);
    
    std::cout << "Simon's current stats:" << std::endl;
    std::cout << "---------****---------" << std::endl;
    std::cout << "|    HP:  " << s1.getHp()  << std::endl;
    std::cout << "|    STR: " << s1.getStr() << std::endl;
    std::cout << "|    DEF: " << s1.getDef() << std::endl;
    std::cout << "|    VIT: " << s1.getVit() << std::endl;
    std::cout << "|    AP:  " << s1.getAp() << std::endl;
    std::cout << "|    INV: " << s1.getinItem() << std::endl;
    std::cout << "---------****---------" << std::endl;
    

    return 0;
};
