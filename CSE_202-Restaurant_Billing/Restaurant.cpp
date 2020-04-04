#include "Restaurant.h"

int Restaurant::findIndex(string productCode) {
    int index = 0;

    for (int i = 0; i < productCount; i++) {
        if (productCodes[i] == productCode) {
            index = i;
            break;
        }
    }

    return index;
}

void Restaurant::showProducts() {
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

void Restaurant::searchOne(string productCode) {
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