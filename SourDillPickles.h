/*
 * SourDillPickles.h
 *
 *  Created on: Mar 3, 2017
 *      Author: Robert Larson
 */

#ifndef SOURDILLPICKLES_H_
#define SOURDILLPICKLES_H_

#include "Pickle.h"

class SourDillPickles : public Pickle {
public:
	SourDillPickles();
	virtual ~SourDillPickles();

	virtual void Prepare();
};

#endif /* SOURDILLPICKLES_H_ */
