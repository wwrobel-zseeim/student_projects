#include <iostream>
#include <cmath>

using namespace std;

int minHeight = 160;
int maxHeight = 180;
int minLength = 250;
int maxLength = 320;

class StairResults {

	int levels;
	int ls;
	int hs;
	int lk;
	int error;

	public:
		StairResults(int levels, int ls, int hs, int lk) {
			this -> levels = levels;
			this -> ls = ls;
			this -> hs = hs;
			this -> lk = lk;
		}

		StairResults(int error) {
			this -> error = error;
		}

		void printResults() {
			if(this -> error == 1) {
				cout<<"Nie da się stworzyć ergonomicznych schodów dla tej wysokości";
				return;
			}
			if(this -> error == 2) {
				cout<<"Nie da się stworzyć ergonomicznych schodów dla tej długości";
				return;			
			}
			cout<<"Wyniki: "<<endl;
			cout<<"Ilość stopni: "<<this -> levels<<endl;
			cout<<"Wysokość stopnia: "<<this -> hs<<endl;
			cout<<"Głębokość stopnia: "<<this -> ls<<endl;
			cout<<"Długość schodów: "<<this -> lk<<endl;
		}

		bool hasError() {
			return this -> error > 0;
		}

		int getLevels() {
			return this -> levels;
		}

		int getStairHeight() {
			return this -> hs;		
		}

		int getStairLength() {
			return this -> ls;		
		}

		int getTotalStairsLength() {
			return this -> lk;
		}

};


/*******************************

nazwa: getStairResults
opis: zwraca obiekt zawierający informacje o ilości schodów, 
wysokości, głębokości jednego stopnia oraz końcowej długości schodów
parametry: 
- lk (liczba całkowita, długość klatki schodowej w milimetrach)
- hk (liczba całkowita, wysokość klatki schodowej w milimetrach)
zwracany typ: StairResults
autor: Wojciech W

*******************************/
StairResults* getStairResults(int lk, int hk) {
	if(lk < minHeight) {
		return new StairResults(1);
	}
	int height;
	int n;
	bool initialized = false;
	for(int i = minHeight; i <= maxHeight; i++) {
		if(hk % i == 0) {
			height = i;
			n = round(hk / i);
			initialized = true;	
			break;
		}
	}
	if(!initialized) {
		return new StairResults(1);
	}
	int length = round(lk / n);
	if(n * length != lk) {
		return getStairResults(lk - 1, hk);	
	}
	if(length < minLength || length > maxLength) {
		return new StairResults(2);	
	}
	return new StairResults(n, length, height, lk);
}