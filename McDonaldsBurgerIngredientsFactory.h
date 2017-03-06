/*
 * McDonaldsBurgerIngredientsFactory.h
 *
 *  Created on: Mar 2, 2017
 *      Author: Robert Larson
 */

#ifndef MCDONALDSBURGERINGREDIENTSFACTORY_H_
#define MCDONALDSBURGERINGREDIENTSFACTORY_H_

#include "BurgerIngredientsFactory.h"

class Bun;
class Pattie;
class Pickle;
class Onions;
class Ketchup;
class Mustard;

class McDonaldsBurgerIngredientsFactory : public BurgerIngredientsFactory {
public:
	McDonaldsBurgerIngredientsFactory();
	virtual ~McDonaldsBurgerIngredientsFactory();

	virtual Bun    * CreateBun();
	virtual Pattie * CreatePattie();
	virtual Pickle * CreatePickle();
	virtual Onions * CreateOnions();
	virtual Ketchup * CreateKetchup();
	virtual Mustard * CreateMustard();
};

#endif /* MCDONALDSBURGERINGREDIENTSFACTORY_H_ */
