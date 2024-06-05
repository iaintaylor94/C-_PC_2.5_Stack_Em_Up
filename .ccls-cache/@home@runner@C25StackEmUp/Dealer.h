#ifndef _DEALER_H_
#define _DEALER_H_

#include <iostream>
#include <vector>
#include <algorithm>

#include "Cards.h"

class Dealer {
  // Deck
  std::vector<int> deck;

  // Shuffles
  std::vector<std::vector<int>> shuffles;


public:
  Dealer() {};
  ~Dealer() {};

  // Deck
  void initDeck(void);
  void updateDeck (int);

  // Shuffles
  void initShuffles(void);
  void updateShuffles (std::vector<int>);

  // Return Deck
  std::vector<int> updatedDeck (void);

};

#endif