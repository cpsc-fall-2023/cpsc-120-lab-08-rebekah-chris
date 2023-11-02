// Rebekah Massoumi
// rebekahmassoumi@csu.fullerton.edu
// @rmassoumi
// Partners: @ctrochez67

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }
  double sum = 0.0;
  for (std::string& argument : arguments) {
    if (argument == arguments[0]) {
      continue;
    }
    sum += std::stod(argument);
  }

  double average = sum / static_cast<double>((arguments.size() - 1));
  std::cout << "average = " << average;
  return 0;
}
