#include <GL/freeglut.h>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <random>
#include <thread>
#include <vector>

using namespace std;

const int t = 10; // par
const int gens = 100;

// const int xbits = 6;
// const int ybits = 8;
const int xbits = 4;
const int ybits = 4;

const int xlimit = pow(2, xbits);
const int ylimit = pow(2, ybits);

#include "generation.h"
#include "life.h"
#include "visualizer.h"

int main() {
  srand(time(0));
  life a(gens);

  for (int i = 0; i < gens; i++) {
    cout << "Generation " << i + 1 << ":\n";
    a.generations[i].print();
    cout << "\n";
  }

  GeneticVisualizer visualizer(a.generations);
  visualizer.run();

  return 0;
}
