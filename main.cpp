#include <iostream>

int main()
{
    // getting decimal value from user to convert
    int decimal;
    int remainder[99999];
    int i;

    std::cout << "Enter a decimal: ";
    std::cin >> decimal;

    //here is most of the conversion occurs
    for(i = 0; decimal >= 0; i++)
    {
        if(decimal == 0){break;}

        remainder[i] = decimal % 2;
        decimal /= 2;

    }

    //printing of array in reverse order (reason: you should know this if you're trying to inderstand this lul :p)
    for(i = i-1; i >= 0; i--)
    {
        std::cout << remainder[i];
    }

    return 0;
}
