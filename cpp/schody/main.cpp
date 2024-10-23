#include <iostream>

using namespace std;

class StairResults {

	int levels;
	int ls;
	int hs;

	public:
		StairResults(int levels, int ls, int hs) {
			this -> levels = levels;
			this -> ls = ls;
			this -> hs = hs;
		}

		void printResults() {
			cout<<"Wyniki: "<<endl;
			cout<<"Ilość stopni: "<<this -> levels<<endl;
			cout<<"Wysokość stopnia: "<<this -> hs<<endl;
			cout<<"Głębokość stopnia: "<<this -> ls<<endl;
		}

};

StairResults* getStairResults(int hk, int lk) {
	int desiredHeight;	
	for(int i = 16; i <= 18; i++) {
		if(hk % i = 0) {
			desiredHeight = i;		
		}
	}
	int restHeight;
	if(desiredHeight == null) {
		restHeight = desiredHeight ;
	}
	return new StairResults(10, 5, 5);
}

int main(){
	int hk, lk;
	cout<<"Podaj wysokość klatki schodowej: ";
	cin>>hk;
	cout<<"Podaj długość klatki schodowej: ";
	cin>>lk;
	StairResults* results = getStairResults(hk, lk);
	results -> printResults();
	return 0;
}
