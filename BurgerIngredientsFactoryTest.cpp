/*
 * BurgerIngredientsFactoryTest.cpp
 *
 *  Created on: Mar 2, 2017
 *      Author: Robert Larson
 */

#include "BurgerKingBurgerIngredientsFactory.h"
#include "BurgerKingBurger.h"

#include "McDonaldsBurgerIngredientsFactory.h"
#include "McDonaldsBurger.h"

#include <iostream>


int main()
{
   BurgerIngredientsFactory * factory = new BurgerKingBurgerIngredientsFactory();

   Burger * burger = new BurgerKingBurger(factory);

   burger->Prepare();

   delete burger;
   delete factory;

   std::cout << "\n";

   factory = new McDonaldsBurgerIngredientsFactory();

   burger = new McDonaldsBurger(factory);

   burger->Prepare();

   delete burger;
   delete factory;
}

