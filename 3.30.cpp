//#include <iostream>
//using namespace std;
//
//#define MAXSIZE 0xffff
//
//class CyclicQueue
//{
//private:
//	int* space;
//	int maxsize;
//	int rear;
//	int front;
//	int len = 0;
//public:
//	CyclicQueue() :rear(0), front(0), maxsize(MAXSIZE)//��ͷβָ�붼��ֵΪ0 ������һ��Ԫ�� ���ѭ��
//	{
//		space = new int[maxsize];
//		if (space == nullptr)
//		{
//			cout << "��̬�洢����ʧ�ܣ�" << endl;
//			exit(1);
//		}
//	}
//
//	CyclicQueue(int size) :rear(0), front(0), maxsize(size)
//	{
//		space = new int[maxsize];
//		if (space == nullptr)
//		{
//			cout << "��̬�洢����ʧ�ܣ�" << endl;
//			exit(1);
//		}
//	}
//
//	~CyclicQueue()
//	{
//		delete[] space;
//	}
//	bool empty();
//	bool full();
//	int size();
//	int Front();
//	int back();
//	void push(int tp);
//	int pop();
//};
//bool CyclicQueue::empty()
//{
//	return rear == front ? true : false;
//}
//
//bool CyclicQueue::full()
//{
//	return (rear + 1) % maxsize == front ? true : false;
//}
//
//int CyclicQueue::Front()
//{
//	if (!empty())
//	{
//		if (front == 0)
//		{
//			return space[++front];
//		}
//		else
//		{
//			return space[front % maxsize];
//		}
//	}
//	else
//	{
//		cout << "�ӿ� ��Ԫ��" << endl;
//		return -1;
//	}
//}
//
//int CyclicQueue::back()
//{
//	if (!empty())
//	{
//		return space[rear];
//	}
//	else
//	{
//		cout << "�ӿ� ��Ԫ��" << endl;
//		return -1;
//	}
//}
//
//void CyclicQueue::push(int tp)
//{
//	if (!full())
//	{
//		rear = (rear + 1) % maxsize;
//		space[rear] = tp;
//		len++;
//	}
//	else
//	{
//		cout << "���� �޷����" << endl;
//	}
//}
//
//int CyclicQueue::pop()
//{
//	if (!empty())
//	{
//		front++;
//		len--;
//		return space[front % maxsize];
//	}
//	else
//	{
//		cout << "�ӿ� �޷�����" << endl;
//		return -1;
//	}
//}
//
//int CyclicQueue::size()
//{
//	return len;
//}
//
//int main()
//{
//	CyclicQueue queue(7);
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		string choice;
//		cin >> choice;
//		if (choice == "front")
//		{
//			cout << queue.Front() << endl;
//		}
//		else if (choice == "back")
//		{
//			cout << queue.back() << endl;
//		}
//		else if (choice == "push")
//		{
//			int m;
//			cin >> m;
//			queue.push(m);
//		}
//		else if (choice == "pop")
//		{
//			cout << queue.pop() << endl;
//		}
//		else if (choice == "size")
//		{
//			cout << queue.size() << endl;
//		}
//		else
//		{
//			cout << "�������" << endl;
//		}
//	}
//}
