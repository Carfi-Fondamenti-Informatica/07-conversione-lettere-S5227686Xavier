
#include "lib.h"
bool check(int c){
    if((c>=65&&c<=90)||(c>=97&&c<=122)) {
        return true;
    }else{
        return false;
    }
}
char conv(char c) {
    char ris;
    if (c >= 'A' && c <= 'Z'){
        ris = c + 32;
    }else if(c>='a'&& c<='z') {
        ris = c - 32;
    }return ris;

}
