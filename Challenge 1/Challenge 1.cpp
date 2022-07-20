#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    double num1, num2, num3, sum;

    // ask for 3 numbers
    cout << "Enter the 1st number: ";

    cin >> num1;

    cout << "Enter the 2nd number: ";

    cin >> num2;

    cout << "Enter the 3rd number: ";

    cin >> num3;

    // output the Sum and Average
    sum = num1 + num2 + num3;

    cout << "The sum of the 3 numbers is: " << sum << endl;

    cout << "The average of the 3 numbers is: " << sum / 3 << endl;
}