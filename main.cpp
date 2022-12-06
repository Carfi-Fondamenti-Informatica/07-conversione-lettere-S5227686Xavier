#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  bool b;
    char a,ris;
    cout<<"inserire un carattere:"<<endl;
    cin>>a;
    b=conv(a);
    while (b==true) {
        if (a >= 'a' && a <= 'z') {
            ris = a - 32;
            cout<<ris<<endl;
        } else if (a >= 'A' && a <= 'Z') {
            ris = a + 32;
            cout<<ris<<endl;
        }
        return ris;
    }

    cout << "errore" << endl;
  return 0;
}
