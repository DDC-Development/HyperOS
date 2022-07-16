#include "util/util.h"
void StartChecker()
{
    PRINT_OKAY("Checking utility started");
}

void CountTest()
{
    int success = 1;
    int counter = 1;
    for (int i = 0; i <= 10; i++)
    {
        if (counter = i + 1)
        {
            success = 0;
        }
        else
        {
            success = 1;
        }
        counter++;
    }
    if (success == 0)
    {
        PRINT_OKAY("Counting check completed");
    }
    else
    {
        PRINT_FAIL("Counting check failed");
    }
}

void RAMTest()
{
    int a = 0; 
    int b = 1; 
    int c = 3; 
    const char* d = "HyperOS";

    if (a == 0 && b == 1 && c == 3 && d == "HyperOS")
    {
        PRINT_OKAY("RAM check passed");
    }
    else 
    {
        PRINT_FAIL("RAM check failed");
    }
}