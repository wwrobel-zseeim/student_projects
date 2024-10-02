#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include "gtest/gtest.h"
#include <chrono>
#include "../sortowanie/main.cpp"
#include "../quicksort/main.cpp"

TEST(BenchmarkTest, IfBenchmarkCaseFirst) {

	int x = 3;

	auto start = std::chrono::high_resolution_clock::now();

	if(x == 3) {

		auto end = std::chrono::high_resolution_clock::now();

		std::chrono::duration<double> elapsed_seconds = end - start;

		std::cout << "Czas instrukcji IF jezeli pierwszy case jest dobra liczba: " << elapsed_seconds.count() << "s\n";

	} else if(x == 2) {
		cout<<"dump";
	}

}

TEST(BenchmarkTest, IfBenchmarkCaseNotFirst) {

	int x = 3;

	auto start = std::chrono::high_resolution_clock::now();

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

		auto end = std::chrono::high_resolution_clock::now();

		std::chrono::duration<double> elapsed_seconds = end - start;

		std::cout << "Czas instrukcji IF jezeli pietnasty case jest dobra liczba: " << elapsed_seconds.count() << "s\n";
	}

}

TEST(BenchmarkTest, SwitchBenchmarkCaseFirst) {

	int x = 3;

	auto start = std::chrono::high_resolution_clock::now();

	switch(x) {
		case 3: {
			auto end = std::chrono::high_resolution_clock::now();
			std::chrono::duration<double> elapsed_seconds = end - start;
			std::cout << "Czas instrukcji SWITCH jezeli pierwszy case jest dobra liczba: " << elapsed_seconds.count() << "s\n";
			break;
		}
		case 2:
			cout<<"dump";
			break;
	}

}

TEST(BenchmarkTest, SwitchBenchmarkCaseNotFirst) {

	int x = 26;

	auto start = std::chrono::high_resolution_clock::now();

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
			auto end = std::chrono::high_resolution_clock::now();
			std::chrono::duration<double> elapsed_seconds = end - start;
			std::cout << "Czas instrukcji SWITCH jezeli pietnasty case jest dobra liczba: " << elapsed_seconds.count() << "s\n";
			break;
		}
		case 3: {
			auto end = std::chrono::high_resolution_clock::now();
			std::chrono::duration<double> elapsed_seconds = end - start;
			std::cout << "Czas instrukcji SWITCH jezeli pietnasty case jest dobra liczba: " << elapsed_seconds.count() << "s\n";
			break;
		}

	}

}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

