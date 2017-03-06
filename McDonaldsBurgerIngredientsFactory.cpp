/*
 * McDonaldsBurgerIngredientsFactory.cpp
 *
 *  Created on: Mar 2, 2017
 *      Author: Robert Larson
 */

#include "McDonaldsBurgerIngredientsFactory.h"

#include "SeedlessBun.h"
#include "GrilledPattie.h"
#include "SourDillPickles.h"
#include "WhiteOnions.h"
#include "McDonaldsKetchup.h"
#include "McDonaldsMustard.h"

McDonaldsBurgerIngredientsFactory::McDonaldsBurgerIngredientsFactory() {
}

McDonaldsBurgerIngredientsFactory::~McDonaldsBurgerIngredientsFactory() {
}

Bun * McDonaldsBurgerIngredientsFactory::CreateBun()
{
	return new SeedlessBun();
}

Pattie * McDonaldsBurgerIngredientsFactory::CreatePattie()
{
	return new GrilledPattie();
}

Pickle * McDonaldsBurgerIngredientsFactory::CreatePickle()
{
	return new SourDillPickles();
}

Onions * McDonaldsBurgerIngredientsFactory::CreateOnions()
{
	return new WhiteOnions();
}

Ketchup * McDonaldsBurgerIngredientsFactory::CreateKetchup()
{
	return new McDonaldsKetchup();
}

Mustard * McDonaldsBurgerIngredientsFactory::CreateMustard()
{
	return new McDonaldsMustard();
}
