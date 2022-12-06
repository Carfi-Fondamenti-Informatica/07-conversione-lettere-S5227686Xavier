#include <iostream>
#include "lib.h"
using namespace std;
extern char ris;

int main() {
    char a;
    char b;
    cout<<"inserire un carattere:"<<endl;
    cin>>a;
    b= conv(a);
    if (b==true) {
        cout<<ris<<endl;
        }else{
        cout << "errore" << endl;
    }
    return 0;
}
