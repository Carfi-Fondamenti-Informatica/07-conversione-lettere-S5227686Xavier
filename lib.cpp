#include "lib.h"
using namespace std;
char ris;
bool conv(char c) {
    if (c >= 'a' && c <= 'z') {
        ris = c - 32;
        return true;
    }else if (c >= 'A' && c <= 'Z') {
        ris = c + 32;
        return true;
    }else{
        return false;
    }
}
