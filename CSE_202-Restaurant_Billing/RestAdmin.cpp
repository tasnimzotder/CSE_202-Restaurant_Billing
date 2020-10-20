#include "RestAdmin.h"

/**
* add product to list of products
* productcode: Product code
* product: Name of product
* price: Product price
*/
void RestAdmin::addProduct(string productCode, string product, float price) {
    productCodes[productCount] = productCode;
    productList[productCount] = product;
    priceList[productCount] = price;
    productCount++;
}

/**
* deletes a product from list of products
* productCode: product code
*/
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

/**
* edits existing product
* productCode: product code
* product: users New/Old product name
* price users New/Old product price
*/
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