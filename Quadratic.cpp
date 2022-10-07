#include <iostream>
#include <cmath>
using namespace std;

int quadraticEquation(int a, int b, int c);

int main()
{
    cout << "This is a test: " << pow(5,2) << endl << endl; //testing the pow function
    cout << "The answer is " << quadraticEquation(1, -12, -28) << endl;
    return 0;
}

int quadraticEquation(int a, int b, int c) 
{
    int x = ((-b) + sqrt((pow(b,2) - (4 * a * c)))) / (2 * a);
    return x;
}