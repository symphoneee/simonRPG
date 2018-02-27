
#include <string>
#include "SIMON.HPP"



simon::simon(double hp, double str, double def, double vit, double ap){
    
    setHP(hp);
    setStr(str);
    setDef(def);
    setVit(vit);
    setAp(ap);
}

void simon::setHp(double h){
    hp = h;
}

void simon::setStr(double s){
    str = s;
}

void simon::setDef(double d){
    def = d;
}

void simon::setVit(double v){
    vit = v;
}

void simon::setAp(double a){
    ap = a;
}








