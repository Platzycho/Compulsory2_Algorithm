#include "Sorting.h"
#include <iostream>
#include <chrono>

int main(){
	int arr[] = {12, 44, 54, 23, 65, 9, 8, 76, 103, 2, 52, 234, 432, 836, 43, 11, 543, 65, 432, 89, 26};
	int n = sizeof(arr) / sizeof(arr[0]);

	//------------------------------------------------------------------------------------------------------------------

	std::cout << "Original bubble Array: ";
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}

	auto start_time_bubble = std::chrono::high_resolution_clock::now();

	bubbleSort(arr, n);

	auto end_time_bubble = std::chrono::high_resolution_clock::now();

	std::cout << "\nSorted Array: ";
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}
	//-------------------------------------------------------------------------------------------------------------------

	std::cout << "\n\nOriginal insertion Array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

	auto start_time_insertion = std::chrono::high_resolution_clock::now();

    insertionSort(arr, n);

	auto end_time_insertion = std::chrono::high_resolution_clock::now();

    std::cout << "\nSorted Array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

	//------------------------------------------------------------------------------------------------------------------

	 std::cout << "\n\nOriginal Array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

	auto start_time_selection = std::chrono::high_resolution_clock::now();

    selectionSort(arr, n);

	auto end_time_selection = std::chrono::high_resolution_clock::now();

    std::cout << "\nSorted selection Array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

	//------------------------------------------------------------------------------------------------------------------


	auto duration_bubble = std::chrono::duration_cast<std::chrono::milliseconds>(end_time_bubble - start_time_bubble);
	std::cout << "\n\nTime taken for sorting bubble: " << duration_bubble.count() << " milliseconds" << std::endl;

	auto duration_insertion = std::chrono::duration_cast<std::chrono::milliseconds>(end_time_insertion - start_time_insertion);
	std::cout << "\nTime taken for sorting insertion: " << duration_insertion.count() << " milliseconds" << std::endl;

	auto duration_selection = std::chrono::duration_cast<std::chrono::milliseconds>(end_time_selection - start_time_selection);
	std::cout << "\nTime taken for sorting selection: " << duration_selection.count() << " milliseconds" << std::endl;

	return 0;
}


void bubbleSort(int arr[], int n)
{
	bool swapped;
	for (int i = 0; i < n-1; i++) {
		swapped = false;
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swapped = true;
			}
		}
		if (!swapped){
			break;
		}
	}
}


void insertionSort(int arr[], int n)
{
	int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

     
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


void selectionSort(int arr[], int n)
{
	   for (int i = 0; i < n - 1; i++) {
        // Find the minimum element in the unsorted part of the array
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
