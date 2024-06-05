#ifndef _FILEIO_H_
#define _FILEIO_H_

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Cards.h"


class FileIO {
std::ifstream inFile;
std::ofstream outFile;

// Open Files
bool usage (int, char**);
void openIn (char*);
void openOut (char*);


public:
  FileIO() {};
  FileIO(int argc, char **argv) {
    if (usage(argc, argv)) {
      openIn(argv[1]);
      openOut(argv[1]);
    }
  }
  ~FileIO() {
    inFile.close();
    outFile.close();
  }

  // Accessors
  void stripBlank(void);

  int getNumCases (void);
  int getNumShuffles(void);
  std::vector<int> getShuffle(void);
  int getShuffleID (void);

  void printShuffle (std::vector<int>);
  void printDeck (std::vector<int>);
};

#endif