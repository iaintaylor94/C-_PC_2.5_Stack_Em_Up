#include <iostream>

#include "FileIO.h"

int main(int argc, char **argv) {
  FileIO fileIO(argc, argv);

  std::cerr << fileIO.getNumCases() << std::endl;
  std::cerr << fileIO.getNumShuffles() << std::endl;
  fileIO.printShuffle(fileIO.getShuffle());
  fileIO.printShuffle(fileIO.getShuffle());

  std::vector<int> originalDeck;
  for (int i = 0; i < NUM_CARDS_IN_DECK; i++) {
    originalDeck.push_back(i);
  }
  fileIO.printDeck(originalDeck);
}