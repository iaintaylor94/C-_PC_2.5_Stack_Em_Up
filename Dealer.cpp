#include "Dealer.h"

// DECK
void Dealer::initDeck () {
  deck.empty();

  for (int i = 0; i < NUM_CARDS_IN_DECK; i++) {
    deck.push_back(i);
  }
}
void Dealer::updateDeck (int shuffleID) {
  std::vector<int> tempDeck;
  tempDeck.resize(NUM_CARDS_IN_DECK);

  shuffleID--; // Account for 0-indexing

  for (auto it = shuffles[shuffleID].begin(); it != shuffles[shuffleID].end(); it++) {
    int index = std::distance(shuffles[shuffleID].begin(), it);
    tempDeck[index] = deck[*it];
  }

  deck = tempDeck;
}


// SHUFFLE
void Dealer::initShuffles () {
  shuffles.empty();
}
void Dealer::updateShuffles (std::vector<int> sh) {
  shuffles.push_back(sh);
}

// RETURN DECK
std::vector<int> Dealer::updatedDeck () {
  return deck;
}