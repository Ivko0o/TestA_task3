#include <iostream>
#include <cmath>

using namespace std;

bool IsZigZag(int array[], int size);
void MakeZigZag(int array[], int size);

int main()
{
	int numbers[5] = {2, 5, 7, 6, 4};
	int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << IsZigZag(numbers, size);

    cout << endl;

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    if (!IsZigZag(numbers, size)) {
        MakeZigZag(numbers, size);
    };

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }


}

//
bool IsZigZag(int array[], int size) {

    for (int i = 1; i < size - 1; i++) {

        if (!((array[i] > array[i - 1] && array[i] > array[i + 1]) ||
            (array[i] < array[i - 1] && array[i] < array[i + 1]))) {
            return false;
        }
    }

    return true;
}


//This function will re-arrange the array if needed
void MakeZigZag(int array[], int size) {

    for (int i = 1; i < size; ++i) {
        if (i % 2 == 1) { 
            if (array[i] <= array[i - 1]) {
                swap(array[i], array[i - 1]);
            }
        }
        else { 
            if (array[i] >= array[i - 1]) {
                swap(array[i], array[i - 1]);
            }
        }
    }

}