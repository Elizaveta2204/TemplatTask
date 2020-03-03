#include <iostream>
#include <vector>
#include "BinaryThree.cpp"
using namespace std;
int main()
{
	BinaryThree<int> th(3);
	th.Push(2);
	th.Push(4);
	th.Push(8);
	th.Push(1);
	th.Push(6);
	th.Push(5);
	th.Print();
	th.Printl();
	th.Pop(3);
	th.Print();
}
