//
// Created by David Bommarito on 9/20/22.
//

#include "computers.h"
#include <iostream>
using namespace compute;
using namespace std;


string computers::getFormFactor(){return formFactor;}
string computers::getManufacturer() {return manufacturer;}
string computers::getProcessor(){return processor;};
int computers::getRam() {return ram;}
string computers::getSerialNumber() {return serialNumber;}
int computers:: getStorageSize(){return storageSize;}
string computers :: getStorageType(){return storageType;}

void computers::setFormFactor() {
    int input;
    cout << "Laptop = 1 Desktop = 2 ";
    cin >> input;
    if(input == 1){formFactor = "laptop";}
    if(input==2){formFactor = "desktop";}
}

void computers::setManufacturer() {
    string input = "";
    cout << "Enter Manufacturer: ";
    cin >> manufacturer;
}

void computers::setProcessor() {
    int input;
    cout << "1 = AMD 2 = Intel" << endl;
    cin >> input;
    if(input == 1){
        cout << "1 for Ryzen 3" << endl;
        cout << "2 for Ryzen 5" << endl;
        cout << "3 for Ryzen 7" << endl;
        cin >> input;
        switch (input){
            case 1:processor ="Ryzen 3";
            break;
            case 2:processor="Ryzen 5";
            break;
            case 3:processor="Ryzen 7";
            break;
        }
    }
    if(input==2){
        cout<<"1 for i3" << endl;
        cout<<"2 for i5" << endl;
        cout<<"3 for i7" << endl;
        cin >> input;
        switch(input){
            case 1:processor="i3";
            break;
            case 2:processor="i5";
            break;
            case 3:processor="i7";
            break;
        }
    }
}

void computers::setRam() {
    int input;
    cout << "Enter RAM: ";
    cin >>ram;
}

void computers::setSerialNumber() {
    string input = "";
    cout << "Enter Serial Number: ";
    cin >> serialNumber;
}

void computers::setStorageSize() {
    int input;
    cout << "1 for 256 GBs" << endl;
    cout << "2 for 512 GBs" << endl;
    cout << "3 for 1 TBs" << endl;
    cout << "4 for 2 TBs" << endl;
    cin >> input;
    if(input == 1){storageSize = 256;}
    if(input == 2){storageSize = 512;}
    if(input == 3){storageSize = 1;}
    if(input == 4){storageSize = 2;}
}

void computers::setStorageType() {
    int input;
    cout << "1 for UFS" << endl;
    cout << "2 for SDD" << endl;
    cout << "3 for HDD" << endl;
    cin >> input;
    if(input == 1){storageType = "UFS";}
    if(input == 2){storageType = "SSD";}
    if(input == 3){storageType = "HDD";}
}


