#include <limits>
int main() {
  return std::numeric_limits<long double>::is_iec559 ? 1 : 0;
}
