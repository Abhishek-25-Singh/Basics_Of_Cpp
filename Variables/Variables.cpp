// Variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip>
#include <string>


int main()
{
    int i1 = 2; // ALignment for readability only 
     std::cout <<" i1 = " << i1 << std:: endl;
    int i2 = 0 ,i3 = 5;
    std::cout << " i2 = " << i2 << std::endl;
    std::cout << " i3 = " << i3 << std::endl;
    float pi = 3.14159F;
    std::cout << " pi = " << pi << std::endl;
    double x = -1.5e6;  // -1500000
    std::cout << " x = " << x << std::endl;
    double y = 1.5e-6; // 0.0000015
    std::cout << " y = " << y << std::endl;
    double z = 1.5e6; // 1500000
    std::cout << " z = " << z << std::endl;
    char c1 = 'a', c2 = 35, c3 = 100;
    std::cout << " c1 = " << c1 << std::endl;
    std::cout << " c2 = " << c2 << std::endl;
    std::cout << " c3 = " << c3 << std::endl;
    bool cmp = i1 < pi, //=> true
        happy = true ,
         sad  = false;
    std::cout << " cmp = " << cmp << std::endl;
    std::cout << " happy = "<<std :: setiosflags (std::ios::boolalpha) << happy << std::endl;
    std::cout << " sad = " << sad << std::endl;
    std::cout << " sad = " << std::setiosflags(std::ios::boolalpha) << sad << std::endl;

   
    std::this_thread::sleep_for(std::chrono::seconds(5));
    // c++11 can deduce the type of a variable for us,
    auto i4 = i3 + 7;
    std::cout << " i4 = " << i4 << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(5));
    int num1;
    //int 1num;
    int num_1;
    int _num1;
    // int #num1 ;
    int num$1;
    // [A-Z, a-z , _ , $ , 0-9 ]
    char gradev;
    std::string first_name;
    //std::string last name ; // No space should contain in the variable
    std::string LastName; //lowercamel
    auto name = "Abhishek";
    
    return 0;

}

