// task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "queue.h"
using namespace std;


int main()
{
    Queue<const char*> queue_1(6);
    for (int i = 1; i <= 8; i++)
    {
        queue_1.push("a");
    }
    cout << endl << "First queue" << endl;
    queue_1.Print();
    
    queue_1.Print();
    queue_1.pop();
    queue_1.Print();
    Queue<int> queue_2(4);
    for (int i = 9; i <= 13; i++)
    {
        queue_2.push(i);
    }
    cout << endl << "Second queue" << endl;
    queue_2.Print();
    queue_2.pop();
    queue_2.Print();
    Queue<int> queue_1_2(6);
    
    queue_1_2.MergingQueues(queue_2);
    cout << "First + Second" << endl;
    queue_1_2.Print();
}