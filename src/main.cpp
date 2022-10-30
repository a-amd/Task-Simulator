#include <iostream>
#include <random>

#include <LinkedList.h>
#include <Queue.h>

int get_random_int(int min, int max)
{
    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> uni(min, max);

    return uni(rng);
}

int main(void)
{
    std::cout << "Generating N (number of patients) and K (number that can be seen at one time)" << std::endl;

    int N = 0, K = 0, time = 0;

    auto *q = new Queue<int>();
    auto *list = new LinkedList<int>();

    N = get_random_int(1, 20); // N from 5 to 50
    std::cout << "Value choosen for N is: " << N << std::endl;
    K = get_random_int(1, 10); // K from 5 to 15
    std::cout << "Value choosen for K is: " << K << std::endl;

    std::cout << "Generating a random time between 15 and 50 minutes for each patient..." << std::endl;
    for (int i = 0; i < N; i++)
    {
        time = get_random_int(1, 15);
        q->enqueue(time);
        std::cout << "Patient " << (i + 1) << " random time to be seen by medical staff is: " << time << " minutes" << std::endl;
    }

    for (int i = 0; i < K && !q->isEmpty(); i++)
    {
        list->insertInOrder(q->dequeue());
    }

    std::cout << "The number of patients being seen should be: " << K << ". And currently " << list->getSize() << " patients are being seen" << std::endl;

    int total_time = 0;
    while (list->getSize() > 0)
    {
        int tmp = list->deleteFront();
        total_time += tmp;
        list->subtract(tmp);
        if (!q->isEmpty())
            list->insertInOrder(q->dequeue());
    }

    std::cout << "The total time comes out to: " << total_time << " minutes" << std::endl;

    // deallocate memory
    delete q;
    q = nullptr;

    delete list;
    list = nullptr;
}