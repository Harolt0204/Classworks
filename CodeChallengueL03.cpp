#include <iostream>
#include <string>
struct Classwork3
{
    int x,y,z;
};

int main(){
    int a= 3;
    double b{3.14};
    bool c= true;
    std::string d= "This is very good!";
    int& ref= a;
    ref= 16;
    Classwork3 C= {1,2,3};
    auto[x,y,z]=C;
    std::cout <<"a:"<< a<<std::endl;
    std::cout <<"b:"<< b<<std::endl;
    std::cout <<"c:"<< c<<std::endl;
    std::cout <<"d:"<< d<<std::endl;
    std::cout <<"x: "<< x <<" y: "<<y<<" z: "<<z<<std::endl;
    return 0;
}

// a= 42; "a" l-value, "42" r-value
//int x=a+b; "x"l-value, "a"l-value, "b"r-value
//&a; "a"l-value
//std::string s = c + " World"; "s" l-value, c+"World " r-value
//int& refX = x; "refX" l-value
//int&& rref = 100; "100" r-value