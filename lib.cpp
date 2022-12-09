
#include "lib.h"
bool checkimput(int x){
    if((x>=65&&x<=90)||(x>=97&&x<=122))
        return true;
    else
        return false;
}
char conversione(char x) {
    char ris;
    if (x >= 'A' && x <= 'Z')
        ris = x + 32;
    else if(x>='a'&& x<='z')
        ris = x - 32;
    return ris;
}
