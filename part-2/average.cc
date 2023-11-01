// Rebekah Massoumi
// rebekahmassoumi@csu.fullerton.edu
// @rmassoumi
// Partners: @ctrochez67

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments < 2){
    std::cout << "error: you must supply at least one number";
    return 1;
  }

  // TODO: Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
 double sum = 0.0;
 for (std::string i : arguments) {
  std::stod(arguments.at(i));

  }
  double average = 0.0;
  average = sum / arguments.size();
  std::cout << "average = " << average;
  return 0;
}
