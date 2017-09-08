//
// Created by Andrii Lohashchuk on 9/5/17.
//

#include "transoort.hpp"

transoort::transoort(int speed) : _speed(speed) {
	std::cout << "transport created\n";
}

transoort::~transoort() {
	std::cout << "transport destroyed\n";
}