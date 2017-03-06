/*
 * BurgerKingBurger.cpp
 *
 *  Created on: Mar 2, 2017
 *      Author: Robert Larson
 */

#include "BurgerKingBurger.h"

#include "BurgerIngredientsFactory.h"

#include "Bun.h"
#include "Pattie.h"
#include "Pickle.h"
#include "Onions.h"
#include "Ketchup.h"
#include "Mustard.h"

#include <iostream>

BurgerKingBurger::BurgerKingBurger(BurgerIngredientsFactory * factory)
: m_pBun(factory->CreateBun()),
  m_pPattie(factory->CreatePattie()),
  m_pPickles(factory->CreatePickle()),
  m_pOnions(factory->CreateOnions()),
  m_pKetchup(factory->CreateKetchup()),
  m_pMustard(factory->CreateMustard()){
}

BurgerKingBurger::~BurgerKingBurger() {
}

void BurgerKingBurger::Prepare()
{
   std::cout << "Preparing Burger King Burger\n";

   m_pBun->Prepare();
   m_pPattie->Prepare();
   m_pPickles->Prepare();
   m_pOnions->Prepare();
   m_pKetchup->Prepare();
   m_pMustard->Prepare();
}
