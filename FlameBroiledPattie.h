/*
 * FlameBroiledPattie.h
 *
 *  Created on: Mar 2, 2017
 *      Author: Robert Larson
 */

#ifndef FLAMEBROILEDPATTIE_H_
#define FLAMEBROILEDPATTIE_H_

#include "Pattie.h"

class FlameBroiledPattie : public Pattie {
public:
	FlameBroiledPattie();
	virtual ~FlameBroiledPattie();

	virtual void Prepare();
};

#endif /* FLAMEBROILEDPATTIE_H_ */
