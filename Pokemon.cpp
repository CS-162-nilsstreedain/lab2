//
//  pokemon.cpp
//  Lab 2
//
//  Created by Nils Streedain on 10/4/21.
//

#include "pokemon.hpp"

pokemon::pokemon() {
	dexNumber = 0;
	name = "";
	moves = new std::string[3];
	for (int i = 0; i < 3; i++)
		moves[i] = "";
}

pokemon::pokemon(int dexNumber, std::string name, std::string* moves) {
	this -> dexNumber = dexNumber;
	this -> name = name;
	this -> moves = moves;
}

int pokemon::getDexNumber() {
	return dexNumber;
}

std::string pokemon::getName() {
	return name;
}

std::string* pokemon::getMoves() {
	return moves;
}

void pokemon::setDexNumber(int dexNumber) {
	this -> dexNumber = dexNumber;
}

void pokemon::setName(std::string name) {
	this -> name = name;
}

void pokemon::setMoves(std::string* moves) {
	this -> moves = moves;
}

void pokemon::print() {
	std::cout << "Dex Number: " << dexNumber << std::endl;
	std::cout << "Name: " << name << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << "Moves: " << moves[i] << std::endl;
}
