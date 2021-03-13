#include <bits/stdc++.h>

enum Strategy { Selection };

void selectionSort(std::vector<int> &xs)
{
  // for every iteration i take the min of array from i to end and swap with i
  for (auto x = xs.begin(); x != xs.end(); ++x ) {
    int current = *x;
    auto current_min = x;
    for (auto y = x; y != xs.end(); ++y) {
      current_min = *current_min > *y ? y : current_min;
    }
    iter_swap(current_min, x);
  }
}

void print_vec(std::vector<int> &xs) {
  for (auto x : xs) {
    std::cout << x << " ";
  }

  std::cout << std::endl;
}

void sort(std::vector<int> &xs, Strategy strategy)
{
  switch (strategy) {
  case Selection: {
    selectionSort(xs);
    break;
  }
  default:
    std::cout << "strategy not found" << std::endl;
    break;
  }
}

int main(int argc, char **argv)
{
  auto xs = std::vector<int>{0, 9, 1, 8, 2, 7, 3, 6, 4, 5};
  print_vec(xs);
  sort(xs, Selection);
  print_vec(xs);

  return 0;
}
