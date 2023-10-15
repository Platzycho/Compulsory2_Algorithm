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
        auto start_time_merge = std::chrono::high_resolution_clock::now();

        mergeSort(arr, 0, n - 1);

         auto end_time_merge = std::chrono::high_resolution_clock::now();

        std::cout << "Sorted using Bubble Sort: ";

        auto duration_merge = std::chrono::duration_cast<std::chrono::milliseconds>(end_time_merge - start_time_merge);
	    std::cout << "\n\nTime taken for sorting bubble " << n <<":  " << duration_merge.count() << " milliseconds" << std::endl;

    } else if (choice == 2) {
        //-----------------------------------------------------insertion--------------------------------------------------------------
        auto start_time_quick = std::chrono::high_resolution_clock::now();

        quickSort(arr, 0, n - 1);

        auto end_time_quick = std::chrono::high_resolution_clock::now();

        std::cout << "Sorted using Quick Sort: ";

        auto duration_quick = std::chrono::duration_cast<std::chrono::milliseconds>(end_time_quick - start_time_quick);
	    std::cout << "\nTime taken for sorting Quick " << n <<":  " << duration_quick.count() << " milliseconds" << std::endl;

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

void mergeSort(std::vector<int>& arr, int left, int right)
{
     if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void quickSort(std::vector<int>& arr, int low, int high)
{
     if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
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

void merge(std::vector<int>& arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> L(n1);
    std::vector<int> R(n2);

    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }

    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

}

int partition(std::vector<int>& arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }

    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

void swap(int& a, int& b)
{
	int temp = a;
    a = b;
    b = temp;
}


