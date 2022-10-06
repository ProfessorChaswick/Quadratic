#include <iostream>
#include <cmath>
using namespace std;

int quadraticEquation(int a, int b, int c);

int main()
{
    cout << "This is a test: " << pow(5,2) << endl << endl;
    cout << "The answer is " << quadraticEquation(2, -7, 3);
    return 0;
}

int quadraticEquation(int a, int b, int c) 
{
    int z = sqrt((pow(b, 2)) - (4 * a * c));
    int x = (-b + sqrt(z)/ (2*a));
    return x;
}

/*
return (-b + sqrt(d)) / (2*a);
return (-b + sqrt(d)) / 2 / a;

*/