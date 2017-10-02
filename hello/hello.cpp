#include <iostream>
using namespace std;
#include <string>

/*int main()
{
	string name;
	cin >> name;
	cout << "Hello there " + name + "!" << endl;

	return 0;
}*/
int main()
{
	int val;
	int sum = 0;
	while(cin >> val){
		sum += val;
	}
	cout << sum;
}
