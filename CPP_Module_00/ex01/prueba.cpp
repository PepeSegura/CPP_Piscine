#include <iostream>
#include <iomanip>

int main() {
    // Set the desired width for each column
    int columnWidth = 10;

    // Print the column headers
    std::cout << std::setw(columnWidth) << std::left << "Name"
              << std::setw(columnWidth) << std::left << "Age"
              << std::setw(columnWidth) << std::left << "City" << std::endl;

    // Print the table rows
    std::cout << std::setw(columnWidth) << std::left << "John"
              << std::setw(columnWidth) << std::left << "25"
              << std::setw(columnWidth) << std::left << "New York" << std::endl;

    std::cout << std::setw(columnWidth) << std::left << "Emily"
              << std::setw(columnWidth) << std::left << "32"
              << std::setw(columnWidth) << std::left << "London" << std::endl;

    std::cout << std::setw(columnWidth) << std::left << "Michael"
              << std::setw(columnWidth) << std::left << "19"
              << std::setw(columnWidth) << std::left << "Paris" << std::endl;

    return 0;
}