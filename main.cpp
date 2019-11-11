#include <iostream>
#include "commandExecuter.h"

int main(int argc, char **argv) {
  std::ifstream in;
  in.exceptions(std::ifstream::failbit);
  try {
    in.open(argv[1]);
  }
  catch (const std::ifstream::failure &ex) {
    std::cerr << "Cannot open the file\n";
  }
  parser a(in);
  commandExecuter();

  return 0;
}