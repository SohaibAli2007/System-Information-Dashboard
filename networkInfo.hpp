#include <string>
class NetworkInfo{
    public:
    void findIPAddress();
    void findMACAddress();
    void displayNetworkInfo();
        
    
    private:
        std::string ipAddress;
        std::string macAddress;
};