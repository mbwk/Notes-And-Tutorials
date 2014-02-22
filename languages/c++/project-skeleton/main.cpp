/**
 *  Problem with this program? Let me know.
 *
 *  Author:   Karl M. B.
 *  Github:   mbwk
 *  Twitter:  @mbwkarl
 *  IRC:      miyabe ON #sandbox @ irc.fyrechat.net
 *  Website:  www.mbwkarl.com
 */

#include <iostream>

int main(int argc, char ** argv)
{
  std::cout << "  Hello World!\n";
  std::cout << "  ============\n";
  std::cout << "# of args: " << argc - 1 << '\n';
  if (argc > 2) {
    std::cout << "arg list:\n";
    for (int i = 1; i < argc; ++i) {
      std::cout << '\t' << i << ".) " << argv[i] << '\n';
    }
  }
  std::cout << "  ============\n";
  std::cout << "  End of test.\n" << std::endl;
  return 0;
}

