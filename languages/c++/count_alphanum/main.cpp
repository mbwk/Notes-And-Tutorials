/**
 *  Problem with this program? Let me know.
 *
 *  Author:   Karl M. B.
 *  Github:   mbwk
 *  Twitter:  @mbwkarl
 *  IRC:      miyabe ON #sandbox @ irc.fyrechat.net
 *  Website:  www.mbwkarl.com
 *
 *  Description:
 * --------------
 *  This program is a simple demo. It's purpose is to count the number
 *  of times each character appears in a string, and print these values
 *  out.
 *
 *  Key learning outcomes of this exercise are mostly getting familiar
 *  with C++ style I/O, working out a comfortable C++ workflow, and
 *  a quick brush-up on pointers.
 *
 *  Once the base program has been implemented, I hope to demo a few
 *  different sorting algorithms.
 *
 *  TODO list:
 *  1. File I/O - done
 *  2. Handling input - done
 *  3. Counting alphanums with a std::map - wip
 *  4. Selecting output method - tbc
 *  5. Sorting algorithms - tbc
 *    a.) Bubble sort
 *    b.) Selection sort
 *    c.) Insertion sort
 *    d.) Shell sort
 *    e.) Quick sort
 */

#include <iostream>
#include <fstream>
#include <cerrno>
#include <map>
#include <algorithm>
#include <string>

// SNIP: http://stackoverflow.com/questions/2602013/
std::string get_file_contents(const char *filename)
{
  std::ifstream in(filename, std::ios::in | std::ios::binary);
  if (in)
  {
    std::string contents;
    in.seekg(0, std::ios::end); // move input position indicator to EOF
    contents.resize(in.tellg()); // resize string to size of file
    in.seekg(0, std::ios::beg); // seek to beginning of file
    in.read(&contents[0], contents.size()); // ippai dana~
    in.close();
    return(contents);
  }
  throw(errno);
}

std::string * check_for_alphanums(std::string &instr)
{
  std::transform(instr.begin(), instr.end(), instr.begin(), ::tolower);
  std::map<char, int> charmap; // le ebin hashmap faec
  std::string * outstr = new std::string;
  for (char& c : instr)
  {
    if ((' ' == c) || ('\n' == c)) {
      std::cout << "Whitespace, ignoring...\n";
    }
    else if (!charmap.count(c))
    {
      std::cout << "undiscovered char \'" << c
        << "\' found, adding new pair to hashmap...\n";
      charmap.insert( std::pair<char,int>(c, 1) );
    } else {
      std::cout << "Pre-existing char \'" << c
        << "\' found, incrementing corresponding key...\n";
      ++charmap.at(c);
    }
  }
/*
  for ()
  {
    // for each key - value in charmap - print to stdout
  }
*/
  return outstr;
}

int main(int argc, char ** argv)
{
  std::cout << "  Hello World!\n";
  std::cout << "  ============\n";
  std::string input;
  if (2 <= argc)
  {
    std::cout << "Reading in file...\n";
    input = get_file_contents(argv[1]);
  }
  else if (1 == argc)
  {
    std::cout << "Please enter your sentence: ";
    std::getline(std::cin, input);
  }

  std::cout << "  ============\n";
  std::cout << "  End of test.\n" << std::endl;
  return 0;
}

