#include <iostream>
#include "Queue.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    Queue<int> que = Queue<int>(3);
    que.push(2);
    que.push(4);
    que.push(5);
    Queue<int> que2 = Queue<int>(2);
    que2.push(19);
    que2.push(22);
    Queue<int> mergerQues = merger_Queues(que, que2);
    for (int i = 0; i < 5; i++)
        cout << mergerQues.pop() << endl;
    return 0;
}