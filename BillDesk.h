#pragma once
#include "Restaurent.h"

class BillDesk : public Restaurent {
   private:
    string selectedProducts[5];
    float billPriceList[5];
    float billAmount;
    int billProdCount;

   public:
    BillDesk() {
        billAmount = 0;
        billProdCount = 0;
    }

    int findBillIndex(string productCode) {
        int index = 0;

        for (int i = 0; i < billProdCount; i++) {
            if (selectedProducts[i] == productCode) {
                index = i;
                break;
            }
        }

        return index;
    }

    void billAddProduct(string productCode) {
        int index = findIndex(productCode);

        selectedProducts[billProdCount] = productList[index];
        billPriceList[billProdCount] = priceList[index];
        billAmount += priceList[index];
        billProdCount++;

        cout << "\tProduct added!" << endl;
        cout << "\tItem: " << billProdCount << "\tAmount: " << billAmount << endl;
    }

    void billDeleteProduct(string productCode) {
        int index = findIndex(productCode);
        int billIndex = findBillIndex(productCode);

        for (int i = billIndex; i < billProdCount - 1; i++) {
            selectedProducts[i] = selectedProducts[i + 1];
            billPriceList[i] = priceList[i + 1];
        }

        billAmount -= priceList[index];
        billProdCount--;

        cout << "\tProduct removed!" << endl;
        cout << "\tItem: " << billProdCount << "\tAmount: " << billAmount << endl;
    }

    void generateBill() {
        cout << "\n\t\t\tYour Product Bill" << endl;
        cout << "\t\t\t_________________\n\n"
             << endl;

        cout << "\t\tSl\t"
             << "Product\t\t"
             << "Price" << endl;
        cout << "\t\t"
             << "----|---------------|--------" << endl;

        for (int i = 0; i < billProdCount; i++) {
            cout << "\t\t" << i + 1 << "."
                 << "\t";
            cout << selectedProducts[i] << "\t";
            cout << billPriceList[i] << endl;
        }

        cout << "\t\t"
             << "______________________________" << endl;
        cout << "\t\t\t\t"
             << "Total:\t" << billAmount << endl;

        cout << "\n\t\t\t\t\t"
             << "THANKS" << endl;
    }
};
