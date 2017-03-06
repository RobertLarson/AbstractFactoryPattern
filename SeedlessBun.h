/*
 * SeedlessBun.h
 *
 *  Created on: Mar 2, 2017
 *      Author: Robert Larson
 */

#ifndef SEEDLESSBUN_H_
#define SEEDLESSBUN_H_

#include "Bun.h"

class SeedlessBun : public Bun {
public:
	SeedlessBun();
	virtual ~SeedlessBun();

	virtual void Prepare();
};

#endif /* SEEDLESSBUN_H_ */
