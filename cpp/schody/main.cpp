#include <iostream>
#include "stair_function.cpp"

using namespace std;

int main(){
	int hk, lk;
	cout<<"Podaj wysokość klatki schodowej (w mm): ";
	cin>>hk;
	cout<<"Podaj długość klatki schodowej (w mm): ";
	cin>>lk;
	StairResults* results = getStairResults(lk, hk);
	results -> printResults();
	cout<<endl;
	return 0;
}
