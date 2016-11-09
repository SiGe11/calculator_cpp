#include <fstream>
#include <iostream>

void saveRsl(long double result)
{

        std::ofstream calcResult ("result.txt");
        if (calcResult.is_open())
        {
            calcResult << result;
            calcResult.close();
        }
        else std::cout << "Unable to save the result."<<std::endl;
        }
