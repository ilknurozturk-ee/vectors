#include <iostream>
#include <vector>
using namespace std;

int main() {

vector<string> drinks = {"Boba","Herbal Tea","Coffee"} ;

drinks.push_back("Soda");

for(string drink : drinks) {
cout << drink << endl;
}
return 0;
}
