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
    long double firstNumber;
    char oOperator;
    long double secondNumber;
    long double result;
    std::string beginning;


    //Opening "help".
    std::cout<<"DorcaLC v0.2"<<std::endl<<"The simple, open source calculator."<<std::endl<<"Type 'help' to see the usage."<<std::endl<<std::endl;
    std::cin>>beginning;
    if (beginning=="help")
    {
    std::cout<<"Please give the first number, then press enter; the operator, then press enter; the second number; then press enter."<<std::endl<<"Then you will see the result."<<std::endl;
    firstNumber=usrInput();
    }
    else{
    firstNumber = atoi(beginning.c_str());
    }


    //Input data.

    //firstNumber=usrInput(firstNumber); GIVEN feljebb!
    oOperator=usrOpInput(oOperator);
    secondNumber=usrInput();

    //Make calculations.

    result=mkCalc(firstNumber, oOperator, secondNumber);

    //Print the resolut.
    letOutput(result);

    //Possibility to save the result.
    saveRsl(result);

    return 0;
}
