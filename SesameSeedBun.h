/*
 * SesameSeedBun.h
 *
 *  Created on: Mar 2, 2017
 *      Author: Robert Larson
 */

#ifndef SESAMESEEDBUN_H_
#define SESAMESEEDBUN_H_

#include "Bun.h"

class SesameSeedBun : public Bun {
public:
	SesameSeedBun();
	virtual ~SesameSeedBun();

	virtual void Prepare();
};

#endif /* SESAMESEEDBUN_H_ */
