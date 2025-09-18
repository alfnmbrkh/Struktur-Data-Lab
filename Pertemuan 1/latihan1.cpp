#include <iostream>
using namespace std;

#define MAX 5
int stack[MAX];
int top = -1;

// push 
void push(int value) {
    if (top == MAX -1){
        cout << "Stack Penuh!!\n";
    } else {
        top++;
        stack[top] = value;
        cout << value << " ditambahkan dalam stack\n";
    }
}

// pop
void pop() {
    if (top == -1) {
        cout << "Stack Kosong!!\n";
    } else {
        cout << "\n" << stack[top] << " Dihapus Dari Stack.\n";
        top--;
    }
}

//nampilin stack
void display () {
    if(top == -1) {
        cout << "Stack Kosong!!\n";
    } else {
        cout << "\nIsi stack : \n";
            for(int i = top; i >= top; i--) {
        cout << stack[i] << " ";
        }
    }
}

int main() {
    push(50);
    push(40);
    push(30);
    push(20);
    push(10);

    pop();
    pop();
    pop();
    pop();
    pop();

    if (top == -1) {
        cout << "stack kosong!\n";
    }
    return 0;
}