#include <iostream>
#include "hashset.h"

int main()
{
    hashset set;
    set.insert(10);
    set.insert(20);
    set.insert(10);
    set.insert(34);
    cout << set;
    if (set.find(20)) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }
    set.erase(34);
    cout << set;


}
