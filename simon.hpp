#include <iostream>
#include <string>

class simon{

    public:
        
        void setName(std::string);
        void setLvl(double);
        void setHp(double);
        void setStr(double);
        void setDef(double);
        void setVit(double);
        void setAp(double);
        void setinItem(std::string, int);
        void setWeapon(std::string, int);
        void displayStats();

        double getLvl();
        double getHp();
        double getStr();
        double getDef();
        double getVit();
        double getAp();
        double getDmg();
        
        std::string getinItem();
        std::string getWeapon();



    private:

        double lvl;
        double hp;
        double str;
        double def;
        double vit;
        double ap;

        double dmg;
        double inb;
        double wnb;
        
        std::string name;
        std::string inItem;
        std::string weapon;

};
