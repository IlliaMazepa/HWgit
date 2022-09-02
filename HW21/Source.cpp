#include "Queue.h"
#include <iostream>

using namespace std;

int main() {
	Queue<int>My;
	My.push(1);
	My.push(2);
	My.push(3);
	My.push(4);
	My.show();
	My.pop();
	My.show();







	return 0;
}