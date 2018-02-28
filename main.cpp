#include <iostream>
#include "SIMON.hpp"


int main () {

    simon s1;    
    simon s2;
    simon s3;
    simon s4;

    s1.setHp(69);
    std::cout << "Simon 1's current HP is " << s1.getHp() << std::endl;
    
    s2.setHp(70);
    std::cout << "Simon 2's current HP is " << s2.getHp() << std::endl;
    
    s3.setHp(71);
    std::cout << "Simon 3's current HP is " << s3.getHp() << std::endl;

    return 0;
};
