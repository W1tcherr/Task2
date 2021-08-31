#include <iostream>

unsigned int getValue();
unsigned int getNOD(unsigned int& m, unsigned int& n);

int main() {
    unsigned int a,b;
    std::cout << "Enter first number: ";
    a = getValue();
    std::cout << "Enter second number: ";
    b = getValue();
    if(a >= b)
        std::cout << "\n NOD = " << getNOD(a,b) << std::endl;
    else
        std::cout << "\n NOD = " << getNOD(b,a) << std::endl;

    return 0;
}
unsigned int getValue()
{
    while(true)
    {
        unsigned int value;
        std::cin >> value;
        if(std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "\nWrong size, please re-enter.\n";
        }
        else
        {
            return value;
        }
    }
}

unsigned int getNOD(unsigned int& m, unsigned int& n)
{
    while (n != 0) {
        unsigned int r = m % n;
        m = n;
        n = r;
    }
    return m;
}