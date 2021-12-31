 #include<iostream>
 #include<stack>
 #include<queue>
 using namespace std;
  
 void ReverseQueueUsingStack(queue<int>& q) 
 {
       stack<int> s;
       // push all elements of queue to stack
       while (!q.empty()) 
       {
             s.push(q.front());
             q.pop();
       }
       // push all elements of the stack back to queue
       while (!s.empty()) 
       {
             q.push(s.top());
             s.pop();
       }
 }
  
 int main()
 {
       int n, x;
       queue<int> q;
       
       cout << "Enter number of elements you want to Push to Queue: ";
       cin >> n;
  
       cout<<"Enter Queue Elements"<<endl;
       
       for (int i = 0; i < n; ++i) 
       {
             cin >> x;
             q.push(x);
       }
       
       cout << "Front element of Queue: " << q.front() << endl;
       ReverseQueueUsingStack(q);
       cout << "Front element of Queue after Reverse: " << q.front() << endl;
 }