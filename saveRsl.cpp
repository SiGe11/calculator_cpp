#include <iostream>
#include <fstream>

void saveRsl(long double result)
{
    //TODO (y/N)
    std::cout<<"Would you like to save the result? (y/n)";
    char save='N';
    std::cin>> save;
    if (save='y')
    {
        std::ofstream calcResult ("result.txt");
        if (calcResult.is_open())
        {
            calcResult << result;
            calcResult.close();
        }
        else std::cout << "Unable to save the result."<<std::endl;
    }
}
