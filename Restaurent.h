#pragma once
#include <iostream>
using namespace std;

class Restaurent
{
protected:
	string productCodes[5] = { "ICCRM", "RCBWL", "CKNRL" };
	string productList[5] = { "Ice_Cream", "Rice_Bowl", "Chicken_Roll" };
	float priceList[5] = { 65, 50, 70 };
	int productCount = 3;
	string selectedProducts[5];
	float billAmount;
	int billProdCount;
public:
	Restaurent() {
		billProdCount = 0;
		billAmount = 0;
	}

	

};