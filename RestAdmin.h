#pragma once
#include "Restaurent.h"
class RestAdmin : public Restaurent {
public:
	void showProducts() {
		cout << "\t\t" << "Code\t" << "Product\t\t" << "Price" << endl;
		cout << "\t\t" << "------|---------------|------" << endl;

		for (int i = 0; i < productCount; i++) {
			cout << "\t\t" << productCodes[i] << "\t";
			cout << productList[i] << "\t";
			cout << priceList[i] << endl;
		}
	}

	void addProduct(string productCode, string product, float price) {
		productCodes[productCount] = productCode;
		productList[productCount] = product;
		priceList[productCount] = price;
		productCount++;
	}

	void deleteProduct(string productCode) {
		int index = 0;

		for (int i = 0; i < productCount; i++) {
			if (productCodes[i] == productCode) {
				index = i;
			}
		}

		for (int i = index; i < productCount - 1; i++) {
			productCodes[i] = productCodes[i + i];
			productList[i] = productList[i + i];
			priceList[i] = priceList[i + i];
		}

		productCount--;
	}

};

