
#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H

/*
Class Purpose:
The NumberArray class stores a group of double values in
a dynamically allocated array. It allows values to be
changed, retrieved, printed, and used for calculations.

Class Invariant:
The size must always be greater than zero.
The data pointer must point to an allocated array containing exactly size elements.
Valid indexes range from 0 to size - 1.
Every element starts at 0.0 when the array is created.
*/

class NumberArray
{
private:
    static const int MAX_SIZE = 10;

    int size;
    double* data;

public:

    /*
    Purpose: Creates a NumberArray object and allocates memory.
    Input: size - number of elements requested.
    Preconditions: None.
    Postconditions: An array is allocated and all values
                    are initialized to 0.0. Invalid sizes
                    are replaced with MAX_SIZE.
    Output: None.
    */
    NumberArray(int size = MAX_SIZE);

    /*
    Purpose: Destroys the object and releases its memory.
    Input: None.
    Preconditions: None.
    Postconditions: The allocated array is released.
    Output: Prints a confirmation message.
    */
    ~NumberArray();

    /*
    Purpose: Changes the value at a specific index.
    Input: index - position in the array.
           value - number to store.
    Preconditions: None.
    Postconditions: If the index is valid, the value is
                    stored. Otherwise, nothing changes.
    Output: None.

    */
    void setNumber(int index, double value);

    /*
    Purpose: Gets a value stored at a specific index.
    Input: index - position in the array.
    Preconditions: None.
    Postconditions: The array remains unchanged.
    Output: Returns the stored value for a valid index,
            or the static safe default 0.0 if invalid.
    */
    double getNumber(int index) const;

    /*
    Purpose: Finds the smallest number in the array.
    Input: None.
    Preconditions: The array contains at least one element.
    Postconditions: The array remains unchanged.
    Output: Returns the minimum value.
    */
    double getMin() const;


    /*
    Purpose: Finds the largest number in the array.
    Input: None.
    Preconditions: The array contains at least one element.
    Postconditions: The array remains unchanged.
    Output: Returns the maximum value.
    */
    double getMax() const;

    /*
    Purpose: Calculates the average of all array values.
    Input: None.
    Preconditions: The array contains at least one element.
    Postconditions: The array remains unchanged.
    Output: Returns the average value.
    */
    double getAverage() const;

    /*
    Purpose: Displays all values stored in the array.
    Input: None.
    Preconditions: None.
    Postconditions: The array remains unchanged.
    Output: Prints all array values to the console.
    */
    void print() const;
};

#endif
