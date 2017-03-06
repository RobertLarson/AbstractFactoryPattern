/*
 * BurgerKingBurgerIngredientsFactory.cpp
 *
 *  Created on: Mar 2, 2017
 *      Author: Robert Larson
 */

#include "BurgerKingBurgerIngredientsFactory.h"

#include "FlameBroiledPattie.h"
#include "SesameSeedBun.h"
#include "SweetPickles.h"
#include "NoOnions.h"
#include "HeinzKetchup.h"
#include "HeinzMustard.h"

BurgerKingBurgerIngredientsFactory::BurgerKingBurgerIngredientsFactory() {
}

BurgerKingBurgerIngredientsFactory::~BurgerKingBurgerIngredientsFactory() {
}

Bun * BurgerKingBurgerIngredientsFactory::CreateBun()
{
	return new SesameSeedBun();
}

Pattie * BurgerKingBurgerIngredientsFactory::CreatePattie()
{
	return new FlameBroiledPattie();
}

Pickle * BurgerKingBurgerIngredientsFactory::CreatePickle()
{
	return new SweetPickles();
}

Onions * BurgerKingBurgerIngredientsFactory::CreateOnions()
{
	return new NoOnions();
}

Ketchup * BurgerKingBurgerIngredientsFactory::CreateKetchup()
{
	return new HeinzKetchup();
}

Mustard * BurgerKingBurgerIngredientsFactory::CreateMustard()
{
	return new HeinzMustard();
}
