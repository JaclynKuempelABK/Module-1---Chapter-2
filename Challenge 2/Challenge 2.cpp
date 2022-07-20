#include <iostream>

float numCubed(float num);


int main()
{
    float chosenNum = 0.0f;

    std::cout << "Enter a number you would like cubed: ";

    std::cin >> chosenNum;

    std::cout << chosenNum << " cubed is: " << numCubed(chosenNum);
}

float numCubed(float num)
{
    return num * num * num;
}