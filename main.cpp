#include <iostream>
#include <stdlib.h>
#include "bascalc.h"

/* functions:
   usrInput - is for input the numbers.
   usrOpInput - is for input the operator.
   mkCalc - is for the calculating.
   letOutput - is for printing the results.

   bascalc - is the header with the declartions for these.*/

int main()
{
    // Declarations
    long double firstNumber;
    char oOperator;
    long double secondNumber;
    long double result;
    std::string begenning;

    std::cout<<"DorcaLC v0.1"<<std::endl<<"The simple, open source calculator."<<std::endl<<"Type 'help' to see the usage."<<std::endl<<std::endl;
    std::cin>>begenning;
    if (begenning=="help")
    {
    std::cout<<"Please give the first number, then press enter; the operator, then press enter; the second number; then press enter."<<std::endl<<"Then you will see the result."<<std::endl;
    firstNumber=usrInput();
    }
    else{
    firstNumber = atoi(begenning.c_str());
    }


    //Input data.

    //firstNumber=usrInput(firstNumber); GIVEN feljebb!
    oOperator=usrOpInput(oOperator);
    secondNumber=usrInput();

    //Make calculations.

    result=mkCalc(firstNumber, oOperator, secondNumber);

    //Print the resolution.
    letOutput(result);

    return 0;
}
