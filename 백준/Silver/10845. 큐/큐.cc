#include <iostream>
#include <string>
using namespace std;

class Queue
{
	int data[10000];
	int begin, end;

public:
	Queue() { begin = 0; end = 0; }
	void push(int num)
	{
		data[end++] = num;
	}
	bool empty()
	{
		if (begin == end)
			return true;
		else
			return false;
	}
	int pop()
	{
		if (empty())
			return -1;
		begin += 1;
		return data[begin - 1];
	}
	int size()
	{
		return end - begin;
	}
	int front()
	{
		if (empty())
			return -1;
		else
			return data[begin];
	}
	int back()
	{
		if (empty())
			return -1;
		else
			return data[end - 1];
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	Queue q;

	while (N--)
	{
		string cmd;
		cin >> cmd;
		if (cmd == "push")
		{
			int num;
			cin >> num;
			q.push(num);
		}
		else if (cmd == "pop")
		{
			cout << q.pop() << '\n';
		}
		else if (cmd == "size")
		{
			cout << q.size() << '\n';
		}
		else if (cmd == "empty")
		{
			cout << q.empty() << '\n';
		}
		else if (cmd == "front")
		{
			cout << q.front() << '\n';
		}
		else if (cmd == "back")
		{
			cout << q.back() << '\n';
		}
	}

	return 0;
}