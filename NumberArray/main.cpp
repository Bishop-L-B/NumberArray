#include "NumberArray.h"
#include <iostream>
#include <random>

int main()
{
    std::cout << "Testing Number Array Class \n\n";

    NumberArray numbers(5);

    numbers.setNumber(0, 10.5);
    numbers.setNumber(1, 20.0);
    numbers.setNumber(2, 30.5);
    numbers.setNumber(3, 40.0);
    numbers.setNumber(4, 50.5);

    std::cout << "Testing Stored Values:\n";

    for (int i = 0;i < 5;i++)
    {
        std::cout << "Index " << i << ": " << numbers.getNumber(i) << "\n";
    }

    std::cout << "\nTesting Invalid Indexes:\n";
    numbers.setNumber(-1, 100.0);
    numbers.setNumber(5, 100.0);

    std::cout << "Index -1: " << numbers.getNumber(-1) << "\n";
    std::cout << "Index 5: " << numbers.getNumber(5) << "\n";

    std::cout << "First element still: " << numbers.getNumber(0) << "\n";
    std::cout << "Last element still: " << numbers.getNumber(4) << "\n";

    std::cout << "\nTesting Statistics:\n";

    std::cout << "Minimum: " << numbers.getMin() << "\n";
    std::cout << "Maximum: " << numbers.getMax() << "\n";
    std::cout << "Average: " << numbers.getAverage() << "\n";

    if (numbers.getMin() == 10.5 && numbers.getMax() == 50.5 && numbers.getAverage() > 30.2999 && numbers.getAverage() < 30.3001)
    {
        std::cout << "Statistics Test Passed.\n";
    }
    else
    {
        std::cout << "Statistics Test Failed.\n";
    }


    std::cout << "\nTesting Print Function:\n";
    numbers.print();

    std::cout << "\nTesting default Constructor:\n";

    NumberArray defaultArray;
    defaultArray.print();

    bool allZero = true;
    
    for (int i = 0; i < 10;i++)
    {
        if (defaultArray.getNumber(i) != 0.0)
        {
            allZero = false;
        }
    }
    std::cout << "All default values zero: " << (allZero ? "PASSED" : "FAILED") << "\n";


    std::cout << "\nTesting Single Element Array:\n";

    NumberArray singleArray(1);
    singleArray.setNumber(0, -7.5);

    singleArray.print();

    std::cout << "Minimum: " << singleArray.getMin() << "\n";
    std::cout << "Maximum: " << singleArray.getMax() << "\n";
    std::cout << "Average: " << singleArray.getAverage() << "\n";

    std::cout << "\nTesting Mixed Values:\n";

    NumberArray mixedArray(5);

    mixedArray.setNumber(0, -10.5);
    mixedArray.setNumber(1, 0.0);
    mixedArray.setNumber(2, 5.5);
    mixedArray.setNumber(3, -2.0);
    mixedArray.setNumber(4, 12.0);


    mixedArray.print();
    
    std::cout << "Minimum: " << mixedArray.getMin() << "\n";
    std::cout << "Maximum: " << mixedArray.getMax() << "\n";
    std::cout << "Average: " << mixedArray.getAverage() << "\n";

    std::cout << "\nTesting Random Values:\n";
    
    NumberArray randomArray(10);

    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_real_distribution < double>distribution(-50.0, 50.0);

    for (int i = 0;i < 10;i++)
    {
        randomArray.setNumber(i, distribution(generator));
    }
    randomArray.print();

    double minimum = randomArray.getMin();
    double maximum = randomArray.getMax();
    double average = randomArray.getAverage();


    std::cout << "Minimum: " << minimum << "\n";
    std::cout << "Maximum: " << maximum << "\n";
    std::cout << "Average: " << average << "\n";
    if (minimum <= average && average <= maximum)
    {
        std::cout << "Random Values Test Passed.\n";
    }
    else 
    {
        std::cout << "Random Values Test Failed.\n";
    }

    std::cout << "\nTesting Block Scoped Destructor:\n";
    
    {
        NumberArray temporaryArray(3);

        temporaryArray.setNumber(0, 10.0);
        temporaryArray.setNumber(1, 20.0);
        temporaryArray.setNumber(2, 30.0);

        temporaryArray.print();

        std::cout << "Leaving temporary block...\n";
    }
    std::cout << "Temporary block has ended.\n";

    std::cout << "\nEnd of NumberArray tests.\n";

    return 0;
}




      