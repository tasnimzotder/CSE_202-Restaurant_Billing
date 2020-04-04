#include "RestAdmin.h"

void RestAdmin::addProduct(string productCode, string product, float price) {
    productCodes[productCount] = productCode;
    productList[productCount] = product;
    priceList[productCount] = price;
    productCount++;
}

void RestAdmin::deleteProduct(string productCode) {
    int index = findIndex(productCode);

    for (int i = index; i < productCount - 1; i++) {
        productCodes[i] = productCodes[i + 1];
        productList[i] = productList[i + 1];
        priceList[i] = priceList[i + 1];
    }

    productCount--;
    cout << "\tProduct " << productCode << " deleted!" << endl;
}

void RestAdmin::updateProduct(string productCode, string product, float price) {
    int index = 0;

    for (int i = 0; i < productCount; i++) {
        if (productCodes[i] == productCode) {
            index = i;
            break;
        }
    }

    productList[index] = product;
    priceList[index] = price;
}