#include <iostream>
#include <vector>
#include "computers.h"
using namespace std;
using namespace compute;


void printCompList();
void addToCompList(vector<computers>comp);

int main() {
    int number;
    cout << "How many computers need to be cataloged? ";
    cin >> number;
    vector<computers>list(number);
    addToCompList(vector<computers>(list));


        for(int i = 0; i <number; i++){
            cout << "Manufacturer: " << list[i].getManufacturer() << endl;
//            cout << "Form Factor: " << computerList[i].getFormFactor() << endl;
//            cout << "Serial Number : " << computerList[i].getSerialNumber() << endl;
//            cout << "RAM: " << computerList[i].getRam() << endl;
//            cout << "Processor: " <<computerList[i].getProcessor() <<endl;
//            cout << "Storage Size: " << computerList[i].getStorageSize() << endl;
//            cout << "Storage Type: " << computerList[i].getStorageType() << endl;
        }

    return 0;
}

void addToCompList(vector<computers>&comp){

    for(int i = 0; i < comp.size(); i++){
        comp[i].setFormFactor();
        comp[i].setManufacturer();
        comp[i].setSerialNumber();
        comp[i].setProcessor();
        comp[i].setRam();
        comp[i].setStorageSize();
        comp[i].setStorageType();
    }
}