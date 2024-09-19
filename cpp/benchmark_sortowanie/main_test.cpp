#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include "gtest/gtest.h"
#include <chrono>
#include "../sortowanie/main.cpp"
#include "../quicksort/main.cpp"

// Test wydajności sortowania QuickSort
TEST(BenchmarkTest, QuickSortBenchmark) {
    std::vector<int> vec(10000); // Tworzymy wektor z 10000 losowymi liczbami
    std::srand(std::time(0)); // Inicjalizacja generatora liczb losowych
    std::generate(vec.begin(), vec.end(), std::rand);

    // Początek pomiaru czasu
    auto start = std::chrono::high_resolution_clock::now();

    quickSort(vec, 0, vec.size()); // Sortujemy wektor

    // Koniec pomiaru czasu
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;

    std::cout << "Czas sortowania quickSorta: " << elapsed_seconds.count() << "s\n";
}

TEST(BenchmarkTest, BubbleSortBenchmark) {
	std::vector<int> vec(10000);
	std::srand(std::time(0));
	std::generate(vec.begin(), vec.end(), std::rand);
	auto start = std::chrono::high_resolution_clock::now();

	bubbleSort(vec);

	auto end= std::chrono::high_resolution_clock::now();

	std::chrono::duration<double> elapsed_seconds = end - start;

	std::cout << "Czas sortowanie bubbleSorta: " << elapsed_seconds.count() << "s\n";


}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

