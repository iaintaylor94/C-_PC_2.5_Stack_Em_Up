#include "Stack-em.h"

void StackEM::getNumCases(void) {
  numCases = fileIO.getNumCases();
}
void StackEM::getNumShuffles(void) {
  numShuffles = fileIO.getNumShuffles();
}

void StackEM::updateShuffles(void) {
  for (int i = 0; i < numShuffles; i++) {
    dealer.updateShuffles (fileIO.getShuffle());
  }
}
void StackEM::processDeck (void) {
  dealer.initDeck();

  int ID = fileIO.getShuffleID();
  while (ID != -1) {
    dealer.updateDeck(ID);
    ID = fileIO.getShuffleID();
  }
}

void StackEM::outputDeck(void) {
  fileIO.printDeck (dealer.updatedDeck());
}