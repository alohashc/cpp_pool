#include <iostream>
#include "transoort.hpp"
#include "car.hpp"
#include <vector>


int main() {
	transoort *c = new car("bmw");

//	std::vector<transoort *> v;
//
//	v.push_back(c);

	delete c;
	return 0;
}