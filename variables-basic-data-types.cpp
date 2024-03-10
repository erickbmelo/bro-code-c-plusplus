#include <iostream>

int main(){
    // int x; //declaration
    // x = 5; //assignment

    // Integer (whole number)
    std::cout << "Decimal as Integer\n";
    int x = 5; //declaration + assignment
    int y = 6;
    int sum = x + y;
    std::cout << sum << '\n';

    // Decimal as Integer
    int days = 7.9;
    std::cout << days << '\n';

    // Double (number including decimal)
    double price = 10.99;

    // Single character
    char grade = 'A';
    char dollarSign = '$';

    // Boolean
    bool student = true;
    bool forSale = false;

    // String
    std::string name = "Erick";
    std::cout << "Hello, " << name;

    return 0;
}