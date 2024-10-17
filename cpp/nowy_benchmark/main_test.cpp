#include <iostream>
#include <vector>
#include <algorithm>
#include "benchmark/benchmark.h"
#include <bits/stdc++.h>

using namespace std;

static void CPU_Benchmark(benchmark::State& state) {
	int n = 10000;
	for (auto _ : state) {
		std::vector<int> vec(n);
		std::srand(std::time(0));
		std::generate(vec.begin(), vec.end(), std::rand);
		std::vector<int> vec2(n);
		std::srand(std::time(0));
		std::generate(vec2.begin(), vec2.end(), std::rand);

		for(int i = 0; i < n; i++) {
			int result = vec[i] * vec2[i] % (vec[i] / vec2[i]);
		}
	}
}

BENCHMARK(CPU_Benchmark);

BENCHMARK_MAIN();

