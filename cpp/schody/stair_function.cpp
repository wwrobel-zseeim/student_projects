using namespace std;

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

};

StairResults* getStairResults(int lk, int hk) {
	if(lk < 160) {
		return new StairResults(1);
	}
	int height;
	int n;
	bool initialized = false;
	for(int i = 160; i <= 180; i++) {
		if(hk % i == 0) {
			height = i;
			n = round(hk / i);
			initialized = true;	
		}
	}
	if(!initialized) {
		return new StairResults(1);
	}
	int length = round(lk / n);
	if(n * length != lk) {
		return getStairResults(lk - 1, hk);	
	}
	if(length < 250 || length > 320) {
		return new StairResults(2);	
	}
	return new StairResults(n, length, height, lk);
}