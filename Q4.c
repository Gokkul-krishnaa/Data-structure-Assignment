#include <stdio.h>

int queue[100], front = -1, rear = -1;

void enqueue(int x) {
    if(rear == 99)
        printf("Queue Full\n");
    else {
        if(front == -1) front = 0;
        queue[++rear] = x;
    }
}

void dequeue() {
    if(front == -1)
        printf("Queue Empty\n");
    else {
        printf("Printed document: %d\n", queue[front]);
        front++;
    }
}

void display() {
    if(front == -1)
        printf("No documents\n");
    else {
        for(int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice, x;

    while(1) {
        printf("\n1.Add 2.Print 3.Display 4.Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter doc number: ");
                scanf("%d", &x);
                enqueue(x);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
        }
    }
}