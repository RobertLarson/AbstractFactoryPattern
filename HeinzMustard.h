/*
 * HeinzMustard.h
 *
 *  Created on: Mar 3, 2017
 *      Author: Robert Larson
 */

#ifndef HEINZMUSTARD_H_
#define HEINZMUSTARD_H_

#include "Mustard.h"

class HeinzMustard : public Mustard {
public:
	HeinzMustard();
	virtual ~HeinzMustard();

	virtual void Prepare();
};

#endif /* HEINZMUSTARD_H_ */
