#include <iostream>
#include "header.h"
using namespace std;
using namespace CustomerFunctions;

int main() {
    
    Customer customer;

    customerDetails(customer);
    displayCustomer(customer);

    return 0;
}
