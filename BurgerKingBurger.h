/*
 * BurgerKingBurger.h
 *
 *  Created on: Mar 2, 2017
 *      Author: Robert Larson
 */

#ifndef BURGERKINGBURGER_H_
#define BURGERKINGBURGER_H_

#include "Burger.h"

class BurgerIngredientsFactory;

class Bun;
class Pattie;
class Pickle;
class Onions;
class Ketchup;
class Mustard;

class BurgerKingBurger : public Burger {
public:
	BurgerKingBurger(BurgerIngredientsFactory * factory);
	virtual ~BurgerKingBurger();

	virtual void Prepare();

private:
    Bun    * m_pBun;
    Pattie * m_pPattie;
    Pickle * m_pPickles;
    Onions * m_pOnions;
    Ketchup * m_pKetchup;
    Mustard * m_pMustard;
};

#endif /* BURGERKINGBURGER_H_ */
