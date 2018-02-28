#include <iostream>
#include <string>

class simon{

    public:
        
        void setHp(double);
        void setStr(double);
        void setDef(double);
        void setVit(double);
        void setAp(double);
        void setInb(double);
        void setinItem(std::string, int);

        double getHp();
        double getStr();
        double getDef();
        double getVit();
        double getAp();

        double getDmg();
        
        std::string getinItem();


    private:

        double hp;
        double str;
        double def;
        double vit;
        double ap;

        double dmg;
        double atk;
        double inb;
        
        std::string inItem;
        ;

};
