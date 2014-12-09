#include <iostream>
using namespace std;

struct addr{
	int aptnum;
};
struct girl{
	int age;
	addr address;
};

struct boy{
	girl girlfriend[10];
};

