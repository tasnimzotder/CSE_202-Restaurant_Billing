#pragma once
#include <iostream>
using namespace std;

class Restaurant {
protected:
    string productCodes[10] = { "ICCRM", "RCBWL", "CKNRL" };
    string productList[10] = { "Ice_Cream", "Rice_Bowl", "Chicken_Roll" };
    float priceList[10] = { 65, 50, 70 };
    int productCount = 3;

public:
    int findIndex(string);
    void showProducts();
    void searchOne(string);
};