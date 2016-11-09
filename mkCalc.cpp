#include <iostream>

long double mkCalc (long double x, char z, long double y)
{
    long double result;

     switch(z)
    {
    case '+' :
        result=x+y;
        break;
    case '-' :
        result=x-y;
        break;
    case '*' :
        result=x*y;
        break;
    case '/' :
        result=x/y;
        break;
     case ':' :
        result=x/y;
    default : std::cout <<z<<" is not a valid operator. (+, -, /, *)"<<std::endl;
        break;
    }

    return result;
}
