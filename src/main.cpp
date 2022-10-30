#include <iostream>

#include <LinkedList.h>
#include <Queue.h>

int main(void)
{
    std::cout << "Generating N (number of patients) and K (number that can be seen at one time)" << std::endl;
    std::cout << "Generating a random time between 15 and 50 minutes for each patient..." << std::endl;

    int N = 0, K = 0, time = 0;

    auto *q = new Queue<int>();
    auto *list = new LinkedList<int>();

        // deallocate memory
    delete q;
    q = nullptr;

    delete list;
    list = nullptr;
}