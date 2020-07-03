#include <algorithm>
#include <cfloat>
#include <cmath>
int main()
{
    return std::max (
        static_cast<int>(std::floor(std::log10(LDBL_MAX_EXP))) + 1,
        static_cast<int>(std::floor(std::log10(LDBL_MIN_EXP))) + 1);
}
