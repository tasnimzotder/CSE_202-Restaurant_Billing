#include <iostream>
#include "Restaurent.h"
#include "RestAdmin.h"
using namespace std;
RestAdmin Admin;
string query = "stay";

void welcomeMessage() {
	cout << "Welcome to Online Restaurent Booking System " << endl;
	cout << "\n\n" << "Please enter 'admin' for Adminstration Access or 'bill' for Billing Access" << endl;
}

void headerMessage() {
	cout << "\t\t\t" << "Online Restaurent Booking System" << endl;
	cout << "\t\t\t\t" << "---Commands---" << endl;
	cout << "1. 'add' - To add new product [Product Code, Product Name, Price" << endl;
	cout << "2. 'show' - To show all products" << "\t";
	cout << "3. 'delete' - To delete a product [Product Code]" << "\n" << endl;
}

void runAdminCommands(string query) {
	headerMessage();

	if (query != "exit") {
		if (query == "admin") {
			cout << "Welcome to Admin Panel" << endl;
		} else if (query == "show") {
			Admin.showProducts();
		}
		else if (query == "add") {
			string productCode, product;
			float price = 0;

			cout << "Please Enter Product Code, Product & Price: " << endl;
			cin >> productCode;
			cin >> product;
			cin >> price;

			Admin.addProduct(productCode, product, price);
			cout << "\n\t" << "Product Added" << endl;
		}

		cout << "\n\n" << "Enter the query:" << " ";
		cin >> query;
		system("CLS");
		runAdminCommands(query);
	}

	else {
		cout << "See you again" << endl;
	}
}

int main() {
	welcomeMessage();

	cin >> query;
	if (query == "admin") {
		runAdminCommands(query);
	}
}