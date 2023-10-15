#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include "Sorting.h"

int main(){
	

	std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int n;

    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    std::vector<int> arr(n);

    std::cout << "Randomly generated " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        arr[i] = std::rand() % 100; // Generate random numbers between 0 and 99
        std::cout << arr[i] << " ";
    }
     std::cout << std::endl;

    int choice;
    std::cout << "Choose sorting method (1 for Bubble Sort, 2 for Insertion Sort or 3 for Selection Sort): ";
    std::cin >> choice;

    if (choice == 1) {
        //-----------------------------------------------------bubble-------------------------------------------------------------
        auto start_time_bubble = std::chrono::high_resolution_clock::now();

        bubbleSort(arr, n);

         auto end_time_bubble = std::chrono::high_resolution_clock::now();

        std::cout << "Sorted using Bubble Sort: ";

        auto duration_bubble = std::chrono::duration_cast<std::chrono::milliseconds>(end_time_bubble - start_time_bubble);
	    std::cout << "\n\nTime taken for sorting bubble " << n <<":  " << duration_bubble.count() << " milliseconds" << std::endl;

    } else if (choice == 2) {
        //-----------------------------------------------------insertion--------------------------------------------------------------
        auto start_time_insertion = std::chrono::high_resolution_clock::now();

        insertionSort(arr, n);

        auto end_time_insertion = std::chrono::high_resolution_clock::now();

        std::cout << "Sorted using Insertion Sort: ";

        auto duration_insertion = std::chrono::duration_cast<std::chrono::milliseconds>(end_time_insertion - start_time_insertion);
	    std::cout << "\nTime taken for sorting insertion " << n <<":  " << duration_insertion.count() << " milliseconds" << std::endl;

    } else if(choice == 3){
        //--------------------------------------------------------selection----------------------------------------------------------
        auto start_time_selection = std::chrono::high_resolution_clock::now();

        selectionSort(arr, n);

        auto end_time_selection = std::chrono::high_resolution_clock::now();

        std::cout << "Sorted using Selection Sort: ";

        auto duration_selection = std::chrono::duration_cast<std::chrono::milliseconds>(end_time_selection - start_time_selection);
	std::cout << "\nTime taken for sorting selection " << n <<": " << duration_selection.count() << " milliseconds" << std::endl;

    } else {
        std::cout << "Invalid choice. Please choose 1 for Bubble Sort, 2 for Insertion Sort or 3 for Selection Sort." << std::endl;
        return 1;
    }

	
	return 0;
}


void bubbleSort(std::vector<int> &arr, int n, int i)
{
	 if (n == 1 || i == n - 1)
        return;

    if (arr[i] > arr[i + 1]) {
        swap(arr[i], arr[i + 1]);
    }

    if (i == n - 2) {
        bubbleSort(arr, n - 1, 0);
    } else {
        bubbleSort(arr, n, i + 1);
    }
}


void insertionSort(std::vector<int> &arr, int n, int i)
{
	if (i == n)
        return;

    int key = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = key;

    insertionSort(arr, n, i + 1);
}


void selectionSort(std::vector<int> &arr, int n)
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

void swap(int& a, int& b)
{
	int temp = a;
    a = b;
    b = temp;
}


