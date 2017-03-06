/*
 * McDonaldsBurger.h
 *
 *  Created on: Mar 2, 2017
 *      Author: Robert Larson
 */

#ifndef MCDONALDSBURGER_H_
#define MCDONALDSBURGER_H_

#include "Burger.h"

class BurgerIngredientsFactory;
class Bun;
class Pattie;
class Pickle;
class Onions;
class Ketchup;
class Mustard;

class McDonaldsBurger : public Burger {
public:
	McDonaldsBurger(BurgerIngredientsFactory * factory);
	virtual ~McDonaldsBurger();

	virtual void Prepare();
private:
	Bun    * m_pBun;
	Pattie * m_pPattie;
	Pickle * m_pPickles;
	Onions * m_pOnions;
	Ketchup * m_pKetchup;
	Mustard * m_pMustard;
};

#endif /* MCDONALDSBURGER_H_ */
