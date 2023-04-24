#include <chrono>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
  cout << "Hello world" << endl;
  auto        now = std::chrono::system_clock::now();
  std::time_t now_time = std::chrono::system_clock::to_time_t(now);
  std::cout << std::ctime(&now_time) << std::endl;
  std::chrono::duration<int, std::ratio<86400>> one_day(1);

  auto        tomorrow = now + one_day;
  std::time_t tomorrow_time = std::chrono::system_clock::to_time_t(tomorrow);

  std::cout << std::ctime(&tomorrow_time) << std::endl;


  string s { "Lets see if we can remove spaces" };


  auto it = remove_if(begin(s), end(s), [=](auto x) { return x == ' '; } );

  cout << s << endl;


  s.erase(it, end(s));

  cout << "After " << s << endl;


  
  return 0;
}
