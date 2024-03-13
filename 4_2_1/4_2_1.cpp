#include <iostream>
#include <vector>
#include <list>

using namespace std;

template<typename Container>
void print(Container& cont, char c) {

	for (auto i = cont.begin(); i != cont.end(); ++i) {
		if (i != cont.begin()) {
			cout << c;
		}
		cout << *i;
	}
}



int main()
{
	list<int> vec = {1,2,3};
	print(vec, ',');
	return 0;
}
