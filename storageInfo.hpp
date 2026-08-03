class StorageInfo{
    public:
        void calculateStorageSpace();
        void displayStorageSpace();

    private:
        unsigned long totalSpace;
        unsigned long usedSpace;
        unsigned long freeSpace;

};