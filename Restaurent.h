#pragma once
#include <iostream>
using namespace std;

class Restaurent {
   protected:
    string productCodes[10] = {"ICCRM", "RCBWL", "CKNRL"};
    string productList[10] = {"Ice_Cream", "Rice_Bowl", "Chicken_Roll"};
    float priceList[10] = {65, 50, 70};
    int productCount = 3;

    // string selectedProducts[5];
    // float billAmount;
    // int billProdCount;

   public:
    int findIndex(string productCode) {
        int index = 0;

        for (int i = 0; i < productCount; i++) {
            if (productCodes[i] == productCode) {
                index = i;
                break;
            }
        }

        return index;
    }

    void showProducts() {
        cout << "\t\t"
             << "Code\t"
             << "Product\t\t"
             << "Price" << endl;
        cout << "\t\t"
             << "------|---------------|------" << endl;

        for (int i = 0; i < productCount; i++) {
            cout << "\t\t" << productCodes[i] << "\t";
            cout << productList[i] << "\t";
            cout << priceList[i] << endl;
        }
    }

    void searchOne(string productCode) {
        int index = findIndex(productCode);

        cout << "\t\t"
             << "Code\t"
             << "Product\t\t"
             << "Price" << endl;
        cout << "\t\t"
             << "------|---------------|------" << endl;

        cout << "\t\t" << productCodes[index] << "\t";
        cout << productList[index] << "\t";
        cout << priceList[index] << endl;
    }
};