#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Days.h"

void Day1Part1() {
	std::string fileName="Day1.txt";
	std::ifstream myFile(fileName);
	int number, newNumber;
	int numberOfIncreases = 0;
	if (myFile.is_open()) {
		
		myFile >> number;
		while (myFile >> newNumber) {
			if (newNumber - number > 0) ++numberOfIncreases;
			number = newNumber;
		}
		myFile.close();
	}
	else std::cout << "Zla nazwa pliku!";
	std::cout << numberOfIncreases;
}
void Day1Part2() {
	std::string fileName = "Day1.txt";
	std::ifstream myFile(fileName);
	int number,firstSum,secondSum;
	std::vector<int> myVec;
	int numberOfIncreases = 0;
	if (myFile.is_open()) {

		while (myFile >> number) {
			myVec.push_back(number);
		}
		myFile.close();
	}
	else std::cout << "Zla nazwa pliku!";
	firstSum = myVec[0] + myVec[1] + myVec[2];
	for (int i = 1; i < myVec.size()-2; i++) {
		secondSum = myVec[i] + myVec[i + 1] + myVec[i + 2];
		if ((secondSum - firstSum) > 0) ++numberOfIncreases;
		firstSum = secondSum;
	}
	std::cout << numberOfIncreases;
}