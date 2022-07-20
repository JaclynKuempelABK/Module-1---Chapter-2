#include <iostream>

double numCubed(double num);


int main()
{
    double chosenNum;

    std::cout << "Enter a number you would like cubed: ";

    std::cin >> chosenNum;

    std::cout << chosenNum << " cubed is: " << numCubed(chosenNum);
}

double numCubed(double num)
{
    return num * num * num;
}