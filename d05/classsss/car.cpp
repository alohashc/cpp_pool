//
// Created by Andrii Lohashchuk on 9/5/17.
//

#include "car.hpp"

car::car(std::string t) : transoort(30), _type(t) {
	std::cout << "car created\n";
}

car::~car() {
	std::cout << "car destroyed\n";
}

