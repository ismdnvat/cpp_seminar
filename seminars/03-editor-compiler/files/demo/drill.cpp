#include <iostream>
#include <vector>

int main() {   
std::vector<int> v;
	int x;
  while (std::cin >> x) {   
        v.push_back(x);
  }
std::cout << "debug: size=" << v.size() << '\n';   
std::cout << "debug: first=" << (v.empty() ? 0 : v[0]) << '\n';
std::cout << "debug: last=" << (v.empty() ? 0 : v.back()) << '\n';
	int max_x = 0;
for (int y : v) {
if (y > max_x) {
max_x = y;
}
}
    std::cout << max_x << '\n';  
}
