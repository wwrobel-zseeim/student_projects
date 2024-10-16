#include <iostream>
#include <vector>
#include <algorithm>
#include "benchmark/benchmark.h"
#include "../sortowanie/main.cpp"
#include "../quicksort/main.cpp"

static void BM_BubbleSort(benchmark::State& state) {
    for (auto _ : state) {
	std::vector<int> vec(10000); // Tworzymy wektor z 10000 losowymi liczbami
	std::srand(std::time(0)); // Inicjalizacja generatora liczb losowych
	std::generate(vec.begin(), vec.end(), std::rand);

	bubbleSort(vec);
    }
}

static void BM_QuickSort(benchmark::State& state) {
     for (auto _ : state) {
	std::vector<int> vec(10000); // Tworzymy wektor z 10000 losowymi liczbami
	std::srand(std::time(0)); // Inicjalizacja generatora liczb losowych
	std::generate(vec.begin(), vec.end(), std::rand);

	quickSort(vec, 0, vec.size());
    }
}

BENCHMARK(BM_BubbleSort);
BENCHMARK(BM_QuickSort);

BENCHMARK_MAIN();

