#include<iostream>
using namespace std;

class Queues {
    private:
     int FRONT, REAR, max= 5;
    int queue_array[5];
     public:
    Queues() {
        FRONT = -1; 