#include "Sorting.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>

int main(){
	

	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	const int arraySize10 = 10;
	const int arraySize100 = 100;
	const int arraySize1000 = 1000;
	const int arraySize10000 = 10000;

	int tenRandNum[arraySize10];
	int hundRandNum[arraySize100];
	int thousRandNum[arraySize1000];
	int tenThousRandNum[arraySize10000];

	int nTen = sizeof(tenRandNum) / sizeof(tenRandNum[0]);
	int nHund = sizeof(hundRandNum) / sizeof(hundRandNum[0]);
	int nThous = sizeof(thousRandNum) / sizeof(thousRandNum[0]);
	int nTenThous = sizeof(tenThousRandNum) / sizeof(tenThousRandNum[0]);
	//-----------------------------------------------------10-------------------------------------------------------------
	//-----------------------------------------------------bubble-------------------------------------------------------------

	std::cout << "Original bubble Array 10: ";
	for (int i = 0; i < nTen; i++) {
		
		tenRandNum[i] = std::rand();
		std::cout << tenRandNum[i] << " ";
	}

	auto start_time_bubble_10 = std::chrono::high_resolution_clock::now();

	bubbleSort(tenRandNum, nTen);

	auto end_time_bubble_10 = std::chrono::high_resolution_clock::now();

	std::cout << "\nSorted bubble Array 10: ";
	for (int i = 0; i < nTen; i++) {
		
		std::cout << tenRandNum[i] << " ";
	}
	//-----------------------------------------------------insertion--------------------------------------------------------------

	std::cout << "\n\nOriginal insertion Array 10: ";
    for (int i = 0; i < nTen; i++) {
		tenRandNum[i] = std::rand();
        std::cout << tenRandNum[i] << " ";
    }

	auto start_time_insertion_10 = std::chrono::high_resolution_clock::now();

    insertionSort(tenRandNum, nTen);

	auto end_time_insertion_10 = std::chrono::high_resolution_clock::now();

    std::cout << "\nSorted insertion Array 10: ";
    for (int i = 0; i < nTen; i++) {
        std::cout << tenRandNum[i] << " ";
    }

	//--------------------------------------------------------selection----------------------------------------------------------

	 std::cout << "\n\nOriginal selection Array 10: ";
    for (int i = 0; i < nTen; i++) {
		tenRandNum[i] = std::rand();
        std::cout << tenRandNum[i] << " ";
    }

	auto start_time_selection_10 = std::chrono::high_resolution_clock::now();

    selectionSort(tenRandNum, nTen);

	auto end_time_selection_10 = std::chrono::high_resolution_clock::now();

    std::cout << "\nSorted selection Array 10 ";
    for (int i = 0; i < nTen; i++) {
        std::cout << tenRandNum[i] << " ";
    }

	//-----------------------------------------------------100-------------------------------------------------------------
	//-----------------------------------------------------bubble-------------------------------------------------------------
	std::cout << "\n\nOriginal bubble Array 100: ";
	for (int i = 0; i < arraySize100; i++) {
		
		hundRandNum[i] = std::rand();
		std::cout << hundRandNum[i] << " ";
	}

	auto start_time_bubble_100 = std::chrono::high_resolution_clock::now();

	bubbleSort(hundRandNum, nHund);

	auto end_time_bubble_100 = std::chrono::high_resolution_clock::now();

	std::cout << "\nSorted bubble Array 100: ";
	for (int i = 0; i < arraySize100; i++) {
		
		std::cout << hundRandNum[i] << " ";
	}
	//------------------------------------------------------insertion-------------------------------------------------------------

	std::cout << "\n\nOriginal insertion Array 100: ";
    for (int i = 0; i < nHund; i++) {
		hundRandNum[i] = std::rand();
        std::cout << hundRandNum[i] << " ";
    }

	auto start_time_insertion_100 = std::chrono::high_resolution_clock::now();

    insertionSort(hundRandNum, nHund);

	auto end_time_insertion_100 = std::chrono::high_resolution_clock::now();

    std::cout << "\nSorted insertion Array 100: ";
    for (int i = 0; i < nHund; i++) {
        std::cout << hundRandNum[i] << " ";
    }

	//------------------------------------------------------selection------------------------------------------------------------

	 std::cout << "\n\nOriginal selection Array 100: ";
    for (int i = 0; i < nHund; i++) {
		hundRandNum[i] = std::rand();
        std::cout << hundRandNum[i] << " ";
    }

	auto start_time_selection_100 = std::chrono::high_resolution_clock::now();

    selectionSort(hundRandNum, nHund);

	auto end_time_selection_100 = std::chrono::high_resolution_clock::now();

    std::cout << "\nSorted selection Array 100: ";
    for (int i = 0; i < nHund; i++) {
        std::cout << hundRandNum[i] << " ";
    }

	//-----------------------------------------------------1000-------------------------------------------------------------
	//-----------------------------------------------------bubble-------------------------------------------------------------
	std::cout << "\n\nOriginal bubble Array 1000: ";
	for (int i = 0; i < nThous; i++) {
		
		thousRandNum[i] = std::rand();
		std::cout << thousRandNum[i] << " ";
	}

	auto start_time_bubble_1000 = std::chrono::high_resolution_clock::now();

	bubbleSort(thousRandNum, nThous);

	auto end_time_bubble_1000 = std::chrono::high_resolution_clock::now();

	std::cout << "\nSorted bubble Array 1000: ";
	for (int i = 0; i < nThous; i++) {
		
		std::cout << thousRandNum[i] << " ";
	}
	//------------------------------------------------------insertion-------------------------------------------------------------

	std::cout << "\n\nOriginal insertion Array 1000: ";
    for (int i = 0; i < nThous; i++) {
		thousRandNum[i] = std::rand();
        std::cout << thousRandNum[i] << " ";
    }

	auto start_time_insertion_1000 = std::chrono::high_resolution_clock::now();

    insertionSort(thousRandNum, nThous);

	auto end_time_insertion_1000 = std::chrono::high_resolution_clock::now();

    std::cout << "\nSorted insertion Array 1000: ";
    for (int i = 0; i < nThous; i++) {
        std::cout << thousRandNum[i] << " ";
    }

	//------------------------------------------------------selection------------------------------------------------------------

	 std::cout << "\n\nOriginal selection Array 1000: ";
    for (int i = 0; i < nThous; i++) {
		thousRandNum[i] = std::rand();
        std::cout << thousRandNum[i] << " ";
    }

	auto start_time_selection_1000 = std::chrono::high_resolution_clock::now();

    selectionSort(thousRandNum, nThous);

	auto end_time_selection_1000 = std::chrono::high_resolution_clock::now();

    std::cout << "\nSorted selection Array 1000: ";
    for (int i = 0; i < nThous; i++) {
        std::cout << thousRandNum[i] << " ";
    }

	//-----------------------------------------------------10000-------------------------------------------------------------
	//-----------------------------------------------------bubble-------------------------------------------------------------
	std::cout << "\n\nOriginal bubble Array 10000: ";
	for (int i = 0; i < nTenThous; i++) {
		
		tenThousRandNum[i] = std::rand();
		std::cout << tenThousRandNum[i] << " ";
	}

	auto start_time_bubble_10000 = std::chrono::high_resolution_clock::now();

	bubbleSort(tenThousRandNum, nTenThous);

	auto end_time_bubble_10000 = std::chrono::high_resolution_clock::now();

	std::cout << "\nSorted bubble Array 10000: ";
	for (int i = 0; i < nTenThous; i++) {
		
		std::cout << tenThousRandNum[i] << " ";
	}
	//------------------------------------------------------insertion-------------------------------------------------------------

	std::cout << "\n\nOriginal insertion Array 10000: ";
    for (int i = 0; i < nTenThous; i++) {
		tenThousRandNum[i] = std::rand();
        std::cout << tenThousRandNum[i] << " ";
    }

	auto start_time_insertion_10000 = std::chrono::high_resolution_clock::now();

    insertionSort(tenThousRandNum, nTenThous);

	auto end_time_insertion_10000 = std::chrono::high_resolution_clock::now();

    std::cout << "\nSorted insertion Array 10000: ";
    for (int i = 0; i < nTenThous; i++) {
        std::cout << tenThousRandNum[i] << " ";
    }

	//------------------------------------------------------selection------------------------------------------------------------

	 std::cout << "\n\nOriginal selection Array 10000: ";
    for (int i = 0; i < nTenThous; i++) {
		tenThousRandNum[i] = std::rand();
        std::cout << tenThousRandNum[i] << " ";
    }

	auto start_time_selection_10000 = std::chrono::high_resolution_clock::now();

    selectionSort(tenThousRandNum, nTenThous);

	auto end_time_selection_10000 = std::chrono::high_resolution_clock::now();

    std::cout << "\nSorted selection Array 10000: ";
    for (int i = 0; i < nTenThous; i++) {
        std::cout << tenThousRandNum[i] << " ";
    }

	//------------------------------------------------------Time------------------------------------------------------------
	//------------------------------------------------------10 milliseconds------------------------------------------------------------

	auto duration_bubble_10 = std::chrono::duration_cast<std::chrono::milliseconds>(end_time_bubble_10 - start_time_bubble_10);
	std::cout << "\n\nTime taken for sorting bubble 10: " << duration_bubble_10.count() << " milliseconds" << std::endl;

	auto duration_insertion_10 = std::chrono::duration_cast<std::chrono::milliseconds>(end_time_insertion_10 - start_time_insertion_10);
	std::cout << "\nTime taken for sorting insertion 10: " << duration_insertion_10.count() << " milliseconds" << std::endl;

	auto duration_selection_10 = std::chrono::duration_cast<std::chrono::milliseconds>(end_time_selection_10 - start_time_selection_10);
	std::cout << "\nTime taken for sorting selection 10: " << duration_selection_10.count() << " milliseconds" << std::endl;

	//------------------------------------------------------100 milliseconds------------------------------------------------------------

	auto duration_bubble_100 = std::chrono::duration_cast<std::chrono::milliseconds>(end_time_bubble_100 - start_time_bubble_100);
	std::cout << "\n\nTime taken for sorting bubble 100: " << duration_bubble_100.count() << " milliseconds" << std::endl;

	auto duration_insertion_100 = std::chrono::duration_cast<std::chrono::milliseconds>(end_time_insertion_100 - start_time_insertion_100);
	std::cout << "\nTime taken for sorting insertion 100: " << duration_insertion_100.count() << " milliseconds" << std::endl;

	auto duration_selection_100 = std::chrono::duration_cast<std::chrono::milliseconds>(end_time_selection_100 - start_time_selection_100);
	std::cout << "\nTime taken for sorting selection 100: " << duration_selection_100.count() << " milliseconds" << std::endl;

	//------------------------------------------------------1000 milliseconds------------------------------------------------------------

	auto duration_bubble_1000 = std::chrono::duration_cast<std::chrono::milliseconds>(end_time_bubble_1000 - start_time_bubble_1000);
	std::cout << "\n\nTime taken for sorting bubble 1000: " << duration_bubble_1000.count() << " milliseconds" << std::endl;

	auto duration_insertion_1000 = std::chrono::duration_cast<std::chrono::milliseconds>(end_time_insertion_1000 - start_time_insertion_1000);
	std::cout << "\nTime taken for sorting insertion 1000: " << duration_insertion_1000.count() << " milliseconds" << std::endl;

	auto duration_selection_1000 = std::chrono::duration_cast<std::chrono::milliseconds>(end_time_selection_1000 - start_time_selection_1000);
	std::cout << "\nTime taken for sorting selection 1000: " << duration_selection_1000.count() << " milliseconds" << std::endl;

	//------------------------------------------------------10000 milliseconds------------------------------------------------------------

	auto duration_bubble_10000 = std::chrono::duration_cast<std::chrono::milliseconds>(end_time_bubble_10000 - start_time_bubble_10000);
	std::cout << "\n\nTime taken for sorting bubble 10000: " << duration_bubble_10000.count() << " milliseconds" << std::endl;

	auto duration_insertion_10000 = std::chrono::duration_cast<std::chrono::milliseconds>(end_time_insertion_10000 - start_time_insertion_10000);
	std::cout << "\nTime taken for sorting insertion 10000: " << duration_insertion_10000.count() << " milliseconds" << std::endl;

	auto duration_selection_10000 = std::chrono::duration_cast<std::chrono::milliseconds>(end_time_selection_10000 - start_time_selection_10000);
	std::cout << "\nTime taken for sorting selection 10000: " << duration_selection_10000.count() << " milliseconds" << std::endl;

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


