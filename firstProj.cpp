#include <iostream>
#include <iomanip>
//to compile we do: g++ -o l firstProj.cpp
int main()
{
    // std::cout << "Hello, World\n";
    // //std means standard and is just the name of cout
    // //the << is an insertion operator
    // std::cout << "Hello, World\n"<< std::endl;
    // //end of line, new line

    // int year = 2021;
    // int month = 12;
    // std::cout << "the year is " << year << "and month " << month;
    // std::cout << std::setw (5)<< "the year is " << year << "and month " << month;

    // bool testBool = 0;
    // std::cout << testBool << std::endl;
    //setw() formats it to take even spaced from l - r

    // unsigned char test = 'e';
    // signed char test1 = 'r';

    // std::cout<< test << std::endl;
    // std::cout << test1 << std::endl;

    // int a = 10, b, c = 14, d = 5, e = a * 2, f = 5, g;

    // std::cout
    //     << a << std::endl
    //     << b << std::endl
    //     << c << std::endl
    //     << d << std::endl
    //     << e << std::endl
    //     << f << std::endl
    //     << g << std::endl;

    // //getting input from user
    // int number;
    // std::cout << "Enter an integer: " << std::endl;
    // //accepts user input and puts it in that variable name
    // std::cin >> number;
    // //character in input
    // std::cout << "Your input was " << number << std::endl;

    // int squared = number * number;
    // std::cout << "Multiplied by itself : " << squared << std::endl;
    // std::cout << "ohh babi a triple : " << number * number * number << std::endl; // you can do operations inside these too

    int a, b, c, d;

    std::cout << "Enter 4 numbers: ";
    std::cin >> a >> b >> c >> d;

    int sum = a + b + c + d;

    float average = sum / 5.0;
    //if we divide by an integer then itll give us an integer, so we have to turn to float

    std::cout << "Average is :" << average << std::endl;

    //const means u cant change
    //ex: const int y = 3; we cant change


    //auto detects varible types
    //auto x = 10.5;
    //it recoginizes it as a double and such

    /*
    int var1 = 10;
    int var2(10);
    int var3{20};
    //different and new ways to initialize variables
    */

    return 0;

    //returns 0 which means that program worked
}