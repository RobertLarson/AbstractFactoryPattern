/*
 * BurgerKingBurgerIngredientsFactory.h
 *
 *  Created on: Mar 2, 2017
 *      Author: Robert Larson
 */

#ifndef BURGERKINGBURGERINGREDIENTSFACTORY_H_
#define BURGERKINGBURGERINGREDIENTSFACTORY_H_

#include "BurgerIngredientsFactory.h"

class Bun;
class Pattie;
class Onions;
class Ketchup;
class Mustard;

class BurgerKingBurgerIngredientsFactory : public BurgerIngredientsFactory {
public:
	BurgerKingBurgerIngredientsFactory();
	virtual ~BurgerKingBurgerIngredientsFactory();

	virtual Bun    * CreateBun();
	virtual Pattie * CreatePattie();
	virtual Pickle * CreatePickle();
	virtual Onions * CreateOnions();
	virtual Ketchup * CreateKetchup();
	virtual Mustard * CreateMustard();
};

#endif /* BURGERKINGBURGERINGREDIENTSFACTORY_H_ */
