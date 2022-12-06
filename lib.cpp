
#include "lib.h"
bool conv(char c) {
    if (c >= 'a' && c <= 'z') {
        return true;
    }else if (c >= 'A' && c <= 'Z') {
        return true;
    }else{
        return false;
    }
}
