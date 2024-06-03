#include "FileIO.h"

bool FileIO::usage (int argc, char **argv) {
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
    return false;
  }
  
  return true;
}
void FileIO::openIn (char *fN) {
  inFile.open(fN);
  
  if (!inFile) std::cerr << "Error opening file " << fN << std::endl;
  else std::cerr << "Opened file " << fN << std::endl;
}
void FileIO::openOut (char *fN) {
  std::string fileName = fN;
  outFile.open (fileName + ".out");

  if (!outFile) std::cerr << "Error opening file " << fileName << ".out" << std::endl;
  else std::cerr << "Opened file " << fileName << ".out" << std::endl;
}


// Accessors
int FileIO::getNumCases() {
  int numCases = 0;
  inFile >> numCases;

  return numCases;
}
int FileIO::getNumShuffles () {
  int ns = 0;

  inFile >> ns;
  
  return ns;
}
std::vector<int> FileIO::getShuffle () {
  std::vector<int> shuffle;

  for (int i = 0; i < NUM_CARDS_IN_DECK; i++) {
    int card = 0;
    inFile >> card;
    shuffle.push_back(card);
  }

  return shuffle;
}
int FileIO::getShuffleID () {
  int shuffID = 0;
  inFile >> shuffID;
  return shuffID;
}
void FileIO::printShuffle (std::vector<int> shuffle) {
  for (auto it = shuffle.begin(); it != shuffle.end(); it++) {
    std::cerr << *it << " ";
  }
  std::cerr << std::endl;
}
void FileIO::printDeck (std::vector<int> deck) {
  for (auto it = deck.begin(); it != deck.end(); it++) {
    int value = *it % NUM_VALUES_IN_SUIT;
    int suit = *it / NUM_VALUES_IN_SUIT;

    switch (value) {
      case 0:
        std::cout << "2 ";
        break;
      case 1:
        std::cout << "3 ";
        break;
      case 2:
        std::cout << "4 ";
        break;
      case 3:
        std::cout << "5 ";
        break;
      case 4:
        std::cout << "6 ";
        break;
      case 5:
        std::cout << "7 ";
        break;
      case 6:
        std::cout << "8 ";
        break;
      case 7:
        std::cout << "9 ";
        break;
      case 8:
        std::cout << "Ten ";
        break;
      case 9:
        std::cout << "Jack ";
        break;
      case 10:
        std::cout << "Queen ";
        break;
      case 11:
        std::cout << "King ";
        break;
      case 12:
        std::cout << "Ace ";
        break;
      default:
        std::cerr << "Invalid Value" << std::endl;
        break;
    }

    switch (suit) {
      case 0:
        std::cout << "of Clubs" << std::endl;
        break;
      case 1:
        std::cout << "of Diamonds" << std::endl;
        break;
      case 2:
        std::cout << "of Hearts" << std::endl;
        break;
      case 3:
        std::cout << "of Spades" << std::endl;
        break;
      default:
        std::cerr << "Invalid suit" << std::endl;
        break;
    }
  }
}