#pragma once
#include <iostream>
using namespace std;

class Restaurent
{
	string productCodes[5] = { "ICCRM", "RCBWL", "CKNRL" };
	string productList[5] = { "Ice Cream", "Rice Bowl", "Chicken Roll" };
	float priceList[5] = { 65, 50, 70 };
	int productCount = 3;
protected:
	string selectedProducts[5];
	float billAmount;
	int billProdCount;
public:
	Restaurent() {
		billProdCount = 0;
		billAmount = 0;
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