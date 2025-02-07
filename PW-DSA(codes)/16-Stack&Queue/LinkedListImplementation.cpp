// Create a stack using LinkedList
#include <iostream>
using namespace std;
class Node{ //User Defined DataType
public:
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class Stack{
    public:
    Node* head;
    int sz;
    Stack(){
        head = NULL;
        sz = 0;
    }
    void push(int val){
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
        sz++;
    }
    void pop(){
        head = head->next;
        sz--;
    }
    int size(){
        return sz;
    }
    int top(){
        return head->val;
    }
    void display(){
        Node *temp = head;
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.size() << endl;
    st.display();
    st.pop();
    cout << st.size() << endl;
}