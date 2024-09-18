#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> vector { 1,5,6,7,10,15,20,30,40 };
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

	for(i = 0; i < vector.size(); i++) {
		cout<<vector[i]<<endl;
	}

	return 0;
}
