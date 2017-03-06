/*
 * Pickle.h
 *
 *  Created on: Mar 3, 2017
 *      Author: Robert Larson
 */

#ifndef PICKLE_H_
#define PICKLE_H_

class Pickle
{
public:
	virtual ~Pickle() {}

	virtual void Prepare() = 0;
};

#endif /* PICKLE_H_ */
