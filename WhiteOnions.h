/*
 * WhiteOnions.h
 *
 *  Created on: Mar 3, 2017
 *      Author: Robert Larson
 */

#ifndef WHITEONIONS_H_
#define WHITEONIONS_H_

#include "Onions.h"

class WhiteOnions : public Onions {
public:
	WhiteOnions();
	virtual ~WhiteOnions();

	virtual void Prepare();
};

#endif /* WHITEONIONS_H_ */
