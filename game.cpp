#include "GAME.HPP"
#include "SIMON.HPP"
#include "TABLES.HPP"

#include <ctype.h>


void KingKid::play(){
    
    simon s1;   
    tables t1;

     std::string name;
     std::string hate;
     std::string hate2;

     int choice;

     std::string tname;
     std::string thate;

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

    std::cout << "Enter your hate:" << std::endl;
    std::getline(std::cin, hate);
    

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
    
    /*
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    */
    
    
    s1.setName(name);
    s1.setHate(hate);
    s1.setLvl(11);
    s1.setHp(50);
    s1.setStr(24);
    s1.setDef(23);
    s1.setVit(27);
    s1.setAp(10);
    s1.setinItem("Bus Tub", 5);
    s1.setWeapon("Olive Sword", 15);

    
    t1.setName("Dirty Table");
    t1.setHate(thate);
    t1.setLvl(11);
    t1.setHp(50);
    t1.setStr(24);
    t1.setDef(23);
    t1.setVit(27);
    t1.setAp(10);
    t1.setinItem("Wobbly Leg", 5);
    t1.setWeapon("Shuv-It", 15);
    

    s1.displayStats();

    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    std::cout << "-----------%%--------------" << std::endl;
    std::cout << "-----------%%--------------" << std::endl;
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    std::cout << " Let the Battle BEGIN! " << std::endl;
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    std::cout << "Quick! a dirty table appears ... and you know the servers won't clean it!" << std::endl;
    std::cout << "They're busy on instagram! " << std::endl;

    t1.displayStats();

    std::cout << "What do you choose? " << std::endl;
    std::cout << "Enter a number: " << std::endl;
    std::cout << "1.) Run " << std::endl;
    std::cout << "2.) Attack " << std::endl;
    std::cout << "3.) Defend " << std::endl;
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    
    
     std::cin >> choice;

     if (choice == 3){
     	double temp = t1.getHp() - s1.getStr();
     	t1.setHp(temp);
     	t1.displayStats();

     }

    if (choice != 3) {
    	std::cout << "That's not a number you stupid fucking busser! " << std::endl;
    }
   

    

}