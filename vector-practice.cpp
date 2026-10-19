#include <iostream>
#include <vector>
using namespace std;

int main() {
vector<string>cars = {"Mazda","BMW","Mercedes"};

cars.push_back("Tesla");

for(string car : cars) {
cout << car << endl;
}
return 0;
}
