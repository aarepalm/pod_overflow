#include <limits>
#include <iostream>
#include <bitset>

static const unsigned char BITS_IN_BYTE = 8;

int main()
{
  std::cout << "sizeof int is " << sizeof(int) << std::endl;

  std::cout << "max   int is " << std::numeric_limits<int>::max() << std::endl;
  std::cout << "max   int is " << std::bitset<sizeof(int)*BITS_IN_BYTE>(std::numeric_limits<int>::max()) << std::endl;
  
  std::cout << "max+1 int is " << std::numeric_limits<int>::max() + 1 << std::endl;
  std::cout << "max+1 int is " << std::bitset<sizeof(int)*BITS_IN_BYTE>(std::numeric_limits<int>::max() + 1) << std::endl;
  std::cout << std::endl;

  std::cout << "min   int is " << std::numeric_limits<int>::min() << std::endl;
  std::cout << "min   int is " << std::bitset<sizeof(int)*BITS_IN_BYTE>(std::numeric_limits<int>::min()) << std::endl;
  std::cout << std::endl;

  std::cout << "min-1 int is " << std::numeric_limits<int>::min() - 1 << std::endl;
  std::cout << "min-1 int is " << std::bitset<sizeof(int)*BITS_IN_BYTE>(std::numeric_limits<int>::min() -1) << std::endl;
  std::cout << std::endl;

  return 0;
}
