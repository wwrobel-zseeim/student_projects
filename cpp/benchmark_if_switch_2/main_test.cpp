#include <iostream>
#include <vector>
#include <algorithm>
#include "benchmark/benchmark.h"

using namespace std;

static void BM_IfFirst(benchmark::State& state) {
	for (auto _ : state) {

		int x = 3;

		if(x == 3) {
			break;
		} else if(x == 2) {
			cout<<"dump";
		}

	}

}

static void BM_IfNotFirst(benchmark::State& state) {
	for (auto _ : state) {
		int x = 3;

		if(x == 13) {
			cout<<"dump";
		} else if(x == 14) {
			cout<<"dump";
		} else if(x == 15) {
			cout<<"dump";
		} else if(x == 16) {
			cout<<"dump";
		} else if(x == 17) {
			cout<<"dump";
		} else if(x == 18) {
			cout<<"dump";
		} else if(x == 19) {
			cout<<"dump";
		} else if(x == 20) {
			cout<<"dump";
		} else if(x == 21) {
			cout<<"dump";
		} else if(x == 22) {
			cout<<"dump";
		} else if(x == 23) {
			cout<<"dump";
		} else if(x == 24) {
			cout<<"dump";
		} else if(x == 25) {
			cout<<"dump";
		} else if(x == 26) {
			cout<<"dump";
		} else if(x == 3) {
			break;
		}
	}
}

static void BM_SwitchFirst(benchmark::State& state) {
	for (auto _ : state) {
		int x = 3;

		switch(x) {
			case 3: {
				break;
			}
			case 2:
				cout<<"dump";
				break;
		}
	}
}


static void BM_SwitchNotFirst(benchmark::State& state) {
	for (auto _ : state) {
		int x = 3;

		switch(x) {
			case 13:
				cout<<"dump";
				break;
			case 14:
				cout<<"dump";
				break;
			case 15:
				cout<<"dump";
				break;
			case 16:
				cout<<"dump";
				break;
			case 17:
				cout<<"dump";
				break;
			case 18:
				cout<<"dump";
				break;
			case 19:
				cout<<"dump";
				break;
			case 20:
				cout<<"dump";
				break;
			case 21:
				cout<<"dump";
				break;
			case 22:
				cout<<"dump";
				break;
			case 23:
				cout<<"dump";
				break;
			case 24:
				cout<<"dump";
				break;
			case 25:
				cout<<"dump";
				break;
			case 26: {
				break;
			}
			case 3: {
				break;
			}

		}
	}

}


BENCHMARK(BM_IfFirst);
BENCHMARK(BM_IfNotFirst);
BENCHMARK(BM_SwitchFirst);
BENCHMARK(BM_SwitchNotFirst);
BENCHMARK_MAIN();

