#pragma once
class Sorting
{

	
};

void mergeSort(std::vector<int>& arr, int left, int right);

void quickSort(std::vector<int>& arr, int low, int high);

void selectionSort(std::vector<int> &arr, int n);

void merge(std::vector<int>& arr, int left, int mid, int right);

int partition(std::vector<int>& arr, int low, int high);