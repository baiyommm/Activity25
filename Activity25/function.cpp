#include <iostream>
#include "header.h"

namespace CustomerFunctions {

    void customerDetails(Customer& customer) {
        
        cout << "Enter Customer ID: ";
        getline(cin, customer.id);
        
        cout << "Enter Customer Name: ";
        getline(cin, customer.name);

        cout << "Enter Customer Email: ";
        getline(cin, customer.email);

        cout << "Enter Street Address: ";
        getline(cin, customer.address.street);

        cout << "Enter City: ";
        getline(cin, customer.address.city);

        cout << "Enter ZIP Code: ";
        getline(cin, customer.address.zipCode);
    }

    void displayCustomer(const Customer& customer) {
        
        cout << "Customer Details:" << endl;
        cout << "ID: " << customer.id << endl;
        cout << "Name: " << customer.name << endl;
        cout << "Email: " << customer.email << endl;
        cout << "Customer Address:" << endl;
        cout << "Street: " << customer.address.street << endl;
        cout << "City: " << customer.address.city << endl;
        cout << "ZIP Code: " << customer.address.zipCode << endl;
    }
}
