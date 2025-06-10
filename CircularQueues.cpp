#include<iostream>
using namespace std;

class Queues {
    private:
     int FRONT, REAR, max= 5;
    int queue_array[5];
     public:
    Queues() {
        FRONT = -1; 
        REAR = -1; 
}

    void insert () {
        int num;
        cout << "Enter the number: "; 
        cin >> num;
        cout << endl;

        if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR +1 )) { 
            cout << "\nQueue Overflow\n" ;
            return;
        }
        if (FRONT == -1) {
             FRONT = 0;
            REAR = 0;
        }
        else { 
            if (REAR == max - 1)
             REAR = 0;
            else 
                REAR++; 
                 }

        queue_array[REAR]  = num;
        }

    void remove () {
        if (FRONT == -1 ) { 
             cout << "Queue Overflow";
            return;
        }

        cout << "\nThe element deleted fron the queue is : " << queue_array[FRONT] << "\n"; 
         if (FRONT == REAR ) {
            FRONT = -1;
            REAR = -1;
        }
        else {
            if (FRONT == max - 1)
            FRONT = 0;
            else 
                FRONT++;
                }
    }

    void display () {
        int FRONT_position = FRONT ; 
         int REAR_position = REAR;
         if (FRONT == -1) { 
            cout << "Empty\n" <<endl;
            return;
        }

        cout << "\nElements in the queue are... \n";
        cout << "\n Elements in the queue are: "; 
        if (FRONT_position <= REAR_position) {
            while (FRONT_position <= REAR_position) {
                cout << queue_array[FRONT_position] << " ";
                FRONT_position++;
            }
            cout << endl;
        } 
        else {
            while (FRONT_position <= max -1) { 
                cout << queue_array[FRONT_position] << " ";
                FRONT_position++;
            }

            FRONT_position = 0; 