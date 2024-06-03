#ifndef _FILEIO_H_
#define _FILEIO_H_

#include <iostream>
#include <fstream>
#include <string>


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
};


};

#endif