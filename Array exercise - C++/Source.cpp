#include <iostream>
using namespace std;

int* doubleArraySize(int[], const int); //Prototypes of functions used
void showArray(int*, const int);


int main(int argc, char** argv) {

    const int SIZE = 5;
    int numbers[SIZE] = { 2, 4, 6, 8, 10 };  //The initial array is declared

    int* numbers_doubled = doubleArraySize(numbers, SIZE);

    //Function called
    showArray(numbers, SIZE);
    cout << endl; //Initial array displayed
    showArray(numbers_doubled, (SIZE * 2));
    cout << endl << endl; //The 2x sized array is displayed

    delete[] numbers_doubled; //Memory address deallocated
    numbers_doubled = 0;

    return 0;
}

int* doubleArraySize(int array[], const int SIZE) //Function to double the size of the original array
{
    const int NEW_SIZE = SIZE * 2; //New array size, 2x the original size
    int* newArray = new int[NEW_SIZE];

    for (int i = 0; i < NEW_SIZE; i++)
    {
        if (i >= SIZE)
            *(newArray + i) = 0;
        else
            *(newArray + i) = array[i];
    }

    return newArray;
}
void showArray(int* array, const int SIZE)//Function to show the array contents
{
    for (int i = 0; i < SIZE; i++)
        cout << *(array + i) << " "; // array[i]
}
