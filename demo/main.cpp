#include <hash_calculation.hpp>

int main() {
  size_t num_of_threads;
  size_t rotation;
  num_of_threads = std::thread::hardware_concurrency();
  rotation = 4;
  hash_calc("../file.json", num_of_threads, rotation);
}