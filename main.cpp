#include <iostream>
#include <cmath>
#include <fstream>

typedef unsigned long long int UINT64;
using namespace std;
const string fileName = "nextSeed";
const UINT64 initialInitialSeed = 0x1234354435;

int main()
{
    UINT64 seed = 0;
    {
        ifstream checker(fileName);
        if(checker.is_open() == false)
        {
            seed = initialInitialSeed;
        }
        else
        {
            checker >> seed;
        }
    }
    seed = (UINT64)(unsigned)seed * 4164903690U + (unsigned)(seed >> 32);
    ofstream writer(fileName);
    writer << seed;
    std::cout << seed << std::endl;;
    
    return 0;
}

