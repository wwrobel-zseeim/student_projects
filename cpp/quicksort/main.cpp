#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& vector, int low, int high) {

	int pivot = vector[high];
	int i = low - 1;

	for(int j = low; j <= high - 1; j++) {
		if(vector[j] < pivot) {
			i++;
			int tmp = vector[i];
			vector[i] = vector[j];
			vector[j] = tmp;
		}
	}

	int tmp = vector[i + 1];
	vector[i + 1] = vector[high];
	vector[high] = tmp;

	return i + 1;
}

void quickSort(vector<int>& vector, int low, int high) {

	if(low < high) {
		int pi = partition(vector, low, high);

		quickSort(vector, low, pi - 1);
		quickSort(vector, pi + 1, high);
	}

}


