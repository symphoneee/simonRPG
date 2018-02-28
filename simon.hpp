#include <iostream>

class simon{

    public:
        
        void setHp(double);
        void setStr(double);
        void setDef(double);
        void setVit(double);
        void setAp(double);

        double getHp();
        double getStr();
        double getDef();
        double getVit();
        double getAp();

    private:

        double hp;
        double str;
        double def;
        double vit;
        double ap;

};
