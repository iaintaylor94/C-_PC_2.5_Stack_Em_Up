#ifndef _STACK_EM_H_
#define _STACK_EM_H_


#include "FileIO.h"
#include "Dealer.h"

class StackEM {
  FileIO fileIO;
  Dealer dealer;

public:
  StackEM() {};
  StackEM(int argc, char **argv) {
    fileIO.openFiles(argc, argv);
  };
  ~StackEM() {};

  int numCases;
  int numShuffles;

  void getNumCases (void);
  void getNumShuffles (void);

  void updateShuffles (void);
  void processDeck (void);

  void outputDeck (void);
};

#endif