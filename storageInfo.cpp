#include <sys/statvfs.h>
#include <iostream>
#include "storageInfo.hpp"
using namespace std;

void StorageInfo::displayStorageSpace(){
    calculateStorageSpace();
    cout << endl << endl;
    cout << "Storage Information\n";
    cout << "---------------------------------------------------------" << endl;
    cout << "Total Storage: " << totalSpace << " GB" << endl;
    cout << "Used Storage: " << usedSpace << " GB" << endl;
    cout << "Available Storage: " << freeSpace << " GB" << endl;
}

void StorageInfo::calculateStorageSpace(){
    struct statvfs stat;

     if (statvfs("/", &stat) != 0) {
        cout << "Failed to get storage info" << endl;
        return;
    }
    totalSpace = stat.f_frsize * stat.f_blocks;
    freeSpace = stat.f_frsize * stat.f_bavail;

    totalSpace = totalSpace / (1024 * 1024 * 1024); // Convert to GB
    freeSpace = freeSpace / (1024 * 1024 * 1024);

    usedSpace = totalSpace-freeSpace;

}