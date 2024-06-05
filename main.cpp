#include <iostream>

#include "FileIO.h"
#include "Dealer.h"
#include "Stack-em.h"

int main(int argc, char **argv) {
  StackEM stackEM (argc, argv);

  stackEM.getNumCases();
  for (int i = 0; i < stackEM.numCases; i++) {

    // Get shuffles
    stackEM.getNumShuffles();
    stackEM.updateShuffles();

    // Process Deck
    stackEM.processDeck();

    // Print Deck
    stackEM.outputDeck();
  }

  return 0;
}