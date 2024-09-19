#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void bubbleSort(vector<int>& vector){
	int i, j;
	bool swapped;

	for(i = 0; i < vector.size() - 1; i++) {
		swapped = false;
		for(j = 0; j < vector.size() - 1; j++) {
			if(vector[j] > vector[j + 1]) {
				int tmp = vector[j];
				vector[j] = vector[j + 1];
				vector[j + 1] = tmp;
				swapped = true;
			}
		}
		if(!swapped) {
			break;	
		}

	}

}
