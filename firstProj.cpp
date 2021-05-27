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

    // int a, b, c, d;

    // std::cout << "Enter 4 numbers: ";
    // std::cin >> a >> b >> c >> d;

    // int sum = a + b + c + d;

    // float average = sum / 5.0;
    // //if we divide by an integer then itll give us an integer, so we have to turn to float

    // std::cout << "Average is :" << average << std::endl;

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

   /*
   this using namespace std replaces it through the code without having
   to rewrite it after every output
    #include <iostream>
    #include <vector>
    #include <string>

    using namespace std;


    int main()
    {
    cout << "hello" << endl;
    }
   */
  //if else statement
  /*using namespace std;

    int x = 10;

    if(x > 6)
    {
        cout << x << " is greater than 6 " <<  endl;
    }
    if(10)
    {
        cout << x << " is true " <<  endl;
    }
    if(-4)
    {
        cout <<" -4 is also true " <<  endl;
    }
    //we arent comparing to anything so it just prints it out
    //its as if we are saying if(-4 == -4)
    if(x > 10)
    {
        cout << "this is true" << endl;
    }
    else
        cout << x << " is none of the if statments " << endl;
    cout << "outside the for loop" << endl;
    
    //when we use if{} then if{} instead of else if, it runs through every one of 
    //the if statments that is true but if we do else if then it just 
    //runs through the first true statement, returns then stop

    */

   int age;

   using namespace std;

   cout << "Enter persons age: " << endl;
   cin >> age;\
   //cin gets user input
//for if statements we have to go from increase to decrease or else its
//not going to work and its going to grab the first one its related to 
//and ignore everything else that it was suppose to go through

    if(age >= 21)
    {
        cout << "Person is a full legal adult and can drink" << endl;
    }

    else if(age >= 18)
    {
        cout << "Person is an adult but cant drink alcohol" << endl;
    }

    else if(age > 13)
    {
        cout << "Person is a teenager" << endl;
    }

    else if (age > 3)
    {
        cout << "Person is a kid" << endl;
    }
    else
    cout << "Its a DA BABY" << endl;


    return 0;

    //returns 0 which means that program worked
}