//
// Created by Andrii Lohashchuk on 9/5/17.
//

#ifndef CLASSSSS_CAR_HPP
#define CLASSSSS_CAR_HPP

#include <iostream>
#include "transoort.hpp"

class car : public transoort {
public:
	car(std::string);
	~car();
	void getType() {}
private:
	std::string _type;
};


#endif //CLASSSSS_CAR_HPP
