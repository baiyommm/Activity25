#ifndef HEADER_H
#define HEADER_H
#include <string>
using namespace std;

// Address structure
struct Address {
    string street;
    string city;
    string zipCode;
};

// Customer structure
struct Customer {
    string id;
    string name;
    string email;
    Address address;
};

namespace CustomerFunctions {
    void customerDetails(Customer& customer);
    void displayCustomer(const Customer& customer);
}

#endif
