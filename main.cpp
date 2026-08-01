#include <iostream>
#include "generalInfo.hpp"
#include "storageInfo.hpp"
using namespace std;

int main(){
    GeneralInfo generalInfo;
    StorageInfo storageInfo;
    cout << "===================================" << endl;
    cout << "         System Information          " << endl;
    cout << "===================================" << endl;
    cout << "\n\n";
    generalInfo.displayGeneralInfo();
    storageInfo.displayStorageSpace();

}

