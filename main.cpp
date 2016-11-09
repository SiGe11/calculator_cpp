#include <iostream>
#include <stdlib.h>
#include "bascalc.h"

/* functions:
   usrInput - is for input the numbers.
   usrOpInput - is for input the operator.
   mkCalc - is for the calculating.
   letOutput - is for printing the results.
   saveRsl - is for saveing the results.

   bascalc - is the header with the declartions for these.*/

int main()
{
    long double firstNumber;
    char oOperator;
    long double secondNumber;
    long double result;
    std::string beginning;

    //TODO Handle non valid inputs.
    //Opening "help".
    std::cout<<"\e[1m"<<"DorCalc"<<"\e[0m"<<" v0.2b"<<std::endl<<"The simple, open source calculator."<<std::endl<<std::endl<<"Type \'help\' to see the usage."<<std::endl<<std::endl;
    std::cin>>beginning;
    if (beginning=="help")
    {
    std::cout<<"Please give the first number, then press enter; the operator, then press enter; the second number; then press enter.\nThen you will see the result.\n\nPlease make attention to follow the rules. Wrong inputs aren't handled yet."<<std::endl;
    firstNumber=usrInput();
    }
    else{
    //Handle if not the "help" which was typed.
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
    //TODO y/N.
    std::cout<<"Would you like to save the result? (y/n)";
    char save;
    std::cin>>save;

    if (save=='y')
    saveRsl(result);

    return 0;
}
