#include <limits>
int main() {
  return std::numeric_limits<float>::is_iec559 ? 1 : 0;
}
