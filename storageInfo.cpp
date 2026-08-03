#include <sys/statvfs.h>
#include <iostream>
#include "storageInfo.hpp"
using namespace std;

void StorageInfo::displayStorageSpace(){
    struct statvfs stat;

    totalSpace = stat.f_frsize * stat.f_blocks;
    freeSpace = stat.f_frsize * stat.f_bavail;
    usedSpace = totalSpace - freeSpace;

    cout << totalSpace;
    cout << freeSpace;


}