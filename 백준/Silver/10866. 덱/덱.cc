#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
	int data;
	Node* prev;
	Node* next;
	Node(int num) { data = num; prev = nullptr; next = nullptr; }
};


class Deque
{
	Node* head;
	Node* tail;
	int m_size;

public:
	Deque() 
	{ 
		head = new Node(-1);  
		tail = new Node(-1); 
		head->next = tail;
		tail->prev = head;
		m_size = 0; 
	}
	bool empty()
	{
		if (m_size == 0)
			return true;
		else
			return false;
	}
	int size()
	{
		return m_size;
	}
	int front()
	{
		if (empty())
			return -1;
		else
			return head->next->data;
	}
	int back()
	{
		if (empty())
			return -1;
		else
			return tail->prev->data;
	}
	void push_front(int num)
	{
		Node* newNode = new Node(num);

		head->next->prev = newNode;
		newNode->next = head->next;
		newNode->prev = head;
		head->next = newNode;
		m_size++;
	}
	void push_back(int num)
	{
		Node* newNode = new Node(num);
		
		tail->prev->next = newNode;
		newNode->prev = tail->prev;
		newNode->next = tail;
		tail->prev = newNode;
		m_size++;
	}
	int pop_front()
	{
		if (empty())
			return -1;
		Node* tmp = head->next;
		int front = tmp->data;
		head->next = tmp->next;
		tmp->next->prev = head;
		delete tmp;
		m_size--;
		return front;
	}
	int pop_back()
	{
		if (empty())
			return -1;
		Node* tmp = tail->prev;
		int back = tmp->data;
		tail->prev = tmp->prev;
		tmp->prev->next = tail;
		delete tmp;
		m_size--;
		return back;
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	Deque d;

	while (N--)
	{
		string cmd;
		cin >> cmd;
		
		if (cmd == "push_front")
		{
			int n;
			cin >> n;
			d.push_front(n);
		}
		else if (cmd == "push_back")
		{
			int n;
			cin >> n;
			d.push_back(n);
		}
		else if (cmd == "pop_front")
		{
			cout << d.pop_front() << '\n';
		}
		else if (cmd == "pop_back")
		{
			cout << d.pop_back() << '\n';
		}
		else if (cmd == "front")
		{
			cout << d.front() << '\n';
		}
		else if (cmd == "back")
		{
			cout << d.back() << '\n';
		}
		else if (cmd == "size")
		{
			cout << d.size() << '\n';
		}
		else if (cmd == "empty")
		{
			cout << d.empty() << '\n';
		}
	}

	return 0;
}