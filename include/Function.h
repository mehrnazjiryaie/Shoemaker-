#include <iostream>
#include <vector>
#include "SportShoe.h"
#include "FemaleShoe.h"
#include "MaleShoe.h"

void shoes(std::vector<SportShoe> &, std::vector<FemaleShoe> &, std::vector<MaleShoe> &);                                                                  // prototype
void history(std::vector<SportShoe>, std::vector<FemaleShoe>, std::vector<MaleShoe>);                                                                      // prototype
void edit(unsigned int, std::vector<SportShoe> &, std::vector<FemaleShoe> &, std::vector<MaleShoe> &, std::string, std::string, std::string, unsigned int, double, std::string); // prototype
void show(unsigned int, std::vector<SportShoe> &, std::vector<FemaleShoe> &, std::vector<MaleShoe> &, std::string, std::string, std::string, unsigned int, double, std::string); // prototype