/*
 * McDonaldsMustard.h
 *
 *  Created on: Mar 3, 2017
 *      Author: Robert Larson
 */

#ifndef MCDONALDSMUSTARD_H_
#define MCDONALDSMUSTARD_H_

#include "Mustard.h"

class McDonaldsMustard : public Mustard {
public:
	McDonaldsMustard();
	virtual ~McDonaldsMustard();

	virtual void Prepare();
};

#endif /* MCDONALDSMUSTARD_H_ */
