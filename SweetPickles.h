/*
 * SweetPickles.h
 *
 *  Created on: Mar 3, 2017
 *      Author: Robert Larson
 */

#ifndef SWEETPICKLES_H_
#define SWEETPICKLES_H_

#include "Pickle.h"

class SweetPickles : public Pickle {
public:
	SweetPickles();
	virtual ~SweetPickles();

	virtual void Prepare();
};

#endif /* SWEETPICKLES_H_ */
