//
// Created by David Bommarito on 9/20/22.
//

#ifndef PERSONAL_COMPUTER_COMPUTERS_H
#define PERSONAL_COMPUTER_COMPUTERS_H
#include <string>

namespace compute {
    class computers {
    private:
        std::string manufacturer;
        std::string formFactor; //1 for desktop 2 for laptop?
        std::string serialNumber;
        std::string processor;
        int ram;
        std::string storageType;
        int storageSize;

    public:
        void setManufacturer();
        void setFormFactor();
        void setSerialNumber();
        void setProcessor();
        void setRam();
        void setStorageType();
        void setStorageSize();
        std::string getManufacturer();
        std::string getFormFactor();
        std::string getSerialNumber();
        std::string getProcessor();
        int getRam();
        std::string getStorageType();
        int getStorageSize();

        //constructor goes here:

    };
}
#endif //PERSONAL_COMPUTER_COMPUTERS_H
