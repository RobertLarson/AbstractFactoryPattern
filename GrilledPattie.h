/*
 * GrilledPattie.h
 *
 *  Created on: Mar 2, 2017
 *      Author: Robert Larson
 */

#ifndef GRILLEDPATTIE_H_
#define GRILLEDPATTIE_H_

#include "Pattie.h"

class GrilledPattie : public Pattie {
public:
	GrilledPattie();
	virtual ~GrilledPattie();

	virtual void Prepare();
};

#endif /* GRILLEDPATTIE_H_ */
