#include <vector>
#include <iostream>
#include <algorithm>

void myFunction(int myInt)
{
std::cout << "myInt = " << myInt << std::endl;
}

int main()
{
std::vector<int> myVector;
std::vector<int>::iterator myIterator;
int i;

i = 0;
while (i < 10)
{

myVector.push_back(i++);
}
for(myIterator = myVector.begin(); myIterator != myVector.end(); ++myIterator)
{
if (*myIterator == 2)
{
myVector.erase(myIterator);
myVector.insert(myIterator, 80);
}
}
std::for_each(myVector.begin(), myVector.end(), myFunction);
return 0;
}

