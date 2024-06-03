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