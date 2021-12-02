#include <fstream>
#include <iostream>
#include <string>
#include "Days.h"
void Day2Part1() {
	std::string fileName = "Day2.txt";
	std::ifstream myFile(fileName);
	int x_position=0, depth = 0;
	if (myFile.is_open()) {
		std::string command;
		int value;
		while (myFile >> command >> value) {
			if (command == "forward") x_position += value;
			else if (command == "up") depth -= value;
			else if (command == "down") depth += value;
		}
		myFile.close();
	}
	else std::cout << "zla nazwa!";
	std::cout << x_position * depth;
}
void Day2Part2() {
	std::string fileName = "Day2.txt";
	std::ifstream myFile(fileName);
	int x_position = 0, depth = 0, aim=0;
	if (myFile.is_open()) {
		std::string command;
		int value;
		while (myFile >> command >> value) {
			if (command == "forward") {
				x_position += value;
				depth += value * aim;
			}
			else if (command == "up") aim -= value;
			else if (command == "down") aim += value;
		}
		myFile.close();
	}
	else std::cout << "zla nazwa!";
	std::cout << x_position * depth;
}