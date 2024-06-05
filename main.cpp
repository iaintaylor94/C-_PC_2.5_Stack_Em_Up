#include <iostream>

#include "FileIO.h"
#include "Dealer.h"

int main(int argc, char **argv) {
  FileIO fileIO(argc, argv);
  Dealer dealer;

  int numCases = fileIO.getNumCases();
  for (int i = 0; i < numCases; i++) {

    // Get shuffles
    int numShuffles = fileIO.getNumShuffles();
    for (int i = 0; i < numShuffles; i++) {
      dealer.updateShuffles (fileIO.getShuffle());
    }

    // Init deck
    dealer.initDeck();

    // Get/Process ID
    int ID = fileIO.getShuffleID();
    while (ID != -1) {
      dealer.updateDeck(ID);
      ID = fileIO.getShuffleID();
    }

    fileIO.printDeck (dealer.updatedDeck());
  }

  return 0;
}