// Estimates pi by placing random points on a square
// with an area of 1 and counting the number of
// points inside the circle's quarter arc.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Functions
bool pointIsInsideTheCircle(double x, double y) { return x * x + y * y <= 1; }

int main() {
  int totalPoints, insidePoints = 0;
  printf("Enter the number of iterations: ");
  scanf("%d", &totalPoints);
  printf("\n");

  srand(time(NULL));

  for (int i = 0; i < totalPoints; i++) {
    double x = (double)rand() / RAND_MAX;
    double y = (double)rand() / RAND_MAX;

    if (pointIsInsideTheCircle(x, y)) {
      insidePoints++;
    }
  }

  double pi = 4.0 * insidePoints / totalPoints;
  printf("Estimated pi: %f\n", pi);
}