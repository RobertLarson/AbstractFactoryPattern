/*
 * HeinzKetchup.h
 *
 *  Created on: Mar 3, 2017
 *      Author: Robert Larson
 */

#ifndef HEINZKETCHUP_H_
#define HEINZKETCHUP_H_

#include "Ketchup.h"

class HeinzKetchup : public Ketchup {
public:
	HeinzKetchup();
	virtual ~HeinzKetchup();

	virtual void Prepare();
};

#endif /* HEINZKETCHUP_H_ */
