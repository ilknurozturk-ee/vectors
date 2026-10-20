#include <iostream>
#include <vector>
using namespace std;

int main() {

vector<int> myNumbers = {10,20,30,40};

myNumbers.push_back(50);

for(int i=0; i< myNumbers.size() ;i++) {
 cout << myNumbers[i] << endl;
 }
 return 0;
 }
