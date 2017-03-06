/*
 * McDonaldsKetchup.h
 *
 *  Created on: Mar 3, 2017
 *      Author: Robert Larson
 */

#ifndef MCDONALDSKETCHUP_H_
#define MCDONALDSKETCHUP_H_

#include "Ketchup.h"

class McDonaldsKetchup : public Ketchup {
public:
	McDonaldsKetchup();
	virtual ~McDonaldsKetchup();

	virtual void Prepare();
};

#endif /* MCDONALDSKETCHUP_H_ */
