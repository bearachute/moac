// comment
#include <queue>
#include <iostream>

int main()
{
std::queue<int> myQueue;
int i;
i = 0;
while (i < 10)
myQueue.push(i++);

std::cout << "Size of the queue: " << myQueue.size() << std::endl;
std::cout << "First element of q: " << myQueue.front() << std::endl;
std::cout << "Last element of q: " << myQueue.back() << std::endl;
while (!myQueue.empty())
{
std::cout << myQueue.front() << std::endl;
myQueue.pop();
}
return 0;
}
