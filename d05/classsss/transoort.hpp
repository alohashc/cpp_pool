//
// Created by Andrii Lohashchuk on 9/5/17.
//

#ifndef CLASSSSS_TRANSOORT_HPP
#define CLASSSSS_TRANSOORT_HPP

#include <iostream>

class transoort {
public:
	transoort(int speed);
	virtual ~transoort();
	virtual void getType() {};
private:
	int _speed;
};


#endif //CLASSSSS_TRANSOORT_HPP
