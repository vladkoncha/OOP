#include <iostream>
#include "parser.h"

int main(int argc, char **argv) {
  std::ifstream in;
  in.exceptions(std::ifstream::failbit);
  try {
    in.open("in.txt");
  }
  catch (const std::ifstream::failure &ex) {
    std::cerr << "Cannot open the file\n";
  }
  parser a(in);
  a.commandExecuter();

  return 0;
}