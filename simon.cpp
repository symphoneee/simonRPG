#include "SIMON.HPP"


void simon::setName(std::string n) {
    name = n;    
}

void simon::setLvl(double l){
    lvl = l;
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

void simon::setinItem(std::string s, int i){
    inItem = s;
    inb = i;
}

void simon::setWeapon(std::string w, int i){
    weapon = w;
    wnb = i;
}

void simon::displayStats(){
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    std::cout << "-------||+~~+||-------" << std::endl;
   std::cout << name << "'s current stats:" << std::endl;
    std::cout << "---------****---------" << std::endl;
    std::cout << "     LVL: " << getLvl()  << std::endl;
    std::cout << "     HP:  " << getHp()  << std::endl;
    std::cout << "     STR: " << getStr() << std::endl;
    std::cout << "     DEF: " << getDef() << std::endl;
    std::cout << "     VIT: " << getVit() << std::endl;
    std::cout << "     AP:  " << getAp() << std::endl;
    std::cout << "     DMG: " << getDmg() << std::endl;
    std::cout << "     WPN: " << weapon << std::endl;
    std::cout << "     INV: " << inItem << std::endl;
    std::cout << "---------****---------" << std::endl;
    std::cout << "     T.W.A.O.K.K.     " << std::endl;
    std::cout << "-------||+~~+||-------" << std::endl;
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
}

double simon::getLvl(){
    return lvl;
}

double simon::getHp(){
    return hp;
}

double simon::getStr(){
    return str;
}

double simon::getDef(){
    return (vit / 2) + def + inb;
}

double simon::getVit(){
    return vit;
}

double simon::getAp(){
    return ap;
}

double simon::getDmg(){
    return (str / 2) + wnb;
}
