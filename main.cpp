#include <iostream>
#include "generalInfo.hpp"
#include "storageInfo.hpp"
#include "networkInfo.hpp"
using namespace std;

int main(){
    GeneralInfo generalInfo;
    StorageInfo storageInfo;
    NetworkInfo networkInfo;
    cout << "===================================" << endl;
    cout << "         System Information          " << endl;
    cout << "===================================" << endl;
    cout << "\n";

    //generalInfo.displayGeneralInfo();
    //storageInfo.displayStorageSpace();
    networkInfo.displayNetworkInfo();
}

