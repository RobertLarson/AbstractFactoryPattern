/*
 * NoOnions.h
 *
 *  Created on: Mar 3, 2017
 *      Author: Robert Larson
 */

#ifndef NOONIONS_H_
#define NOONIONS_H_

#include "Onions.h"

class NoOnions : public Onions {
public:
	NoOnions();
	virtual ~NoOnions();

	virtual void Prepare();
};

#endif /* NOONIONS_H_ */
