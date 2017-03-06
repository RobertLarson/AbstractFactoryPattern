/*
 * Burger.h
 *
 *  Created on: Mar 2, 2017
 *      Author: Robert Larson
 */

#ifndef BURGER_H_
#define BURGER_H_

class Burger
{
public:
	virtual ~Burger() {}
	virtual void Prepare() = 0;
};


#endif /* BURGER_H_ */
