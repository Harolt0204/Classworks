#include <iostream>
#include <cmath>
void CuadraticFuntion(double a, double b, double c){
    double d=b*b-4*a*c;
    if (d<0){
        std::cout<<"There is not solution"<<std::endl;    
    }
    else {
        double square= std::sqrt(d);
        double x1= (-b+d)/(2*a);
        double x2= (-b-d)/(2*a);
        std::cout<<"x1:"<<x1<<"\n"<<"x2:"<<x2<<std::endl;
    }
}
int main(){
    double a;
    double b;
    double c;
    std::cout<<"Add a number:";
    std::cin>>a;
    std::cout<<"Add b number:";
    std::cin>>b;
    std::cout<<"Add c number:";
    std::cin>>c;
    CuadraticFuntion(a,b,c);

    return 0; 
}