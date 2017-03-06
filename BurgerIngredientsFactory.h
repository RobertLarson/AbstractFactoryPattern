/*
 * BurgerIngredientsFactory.h
 *
 *  Created on: Mar 2, 2017
 *      Author: Robert Larson
 */

#ifndef BURGERINGREDIENTSFACTORY_H_
#define BURGERINGREDIENTSFACTORY_H_

class Bun;
class Pattie;
class Pickle;
class Onions;
class Ketchup;
class Mustard;

class BurgerIngredientsFactory
{
public:
	virtual ~BurgerIngredientsFactory() {}
	virtual Bun    * CreateBun()    = 0;
	virtual Pattie * CreatePattie() = 0;
	virtual Pickle * CreatePickle() = 0;
	virtual Onions * CreateOnions() = 0;
	virtual Ketchup * CreateKetchup() = 0;
	virtual Mustard * CreateMustard() = 0;
};


#endif /* BURGERINGREDIENTSFACTORY_H_ */
