#include <iostream>
#include <string>
using namespace std;
struct Node
{
	string str;
	Node *next = NULL;
};
class string_queue
{
  private:
	Node *head;

  public:
	string_queue() : head(NULL){};
	void push(string a)
	{
		Node *temp = new Node;
		temp->str = a;
		temp->next = head;
		head = temp;
	}
	void pop()
	{
		if (head != NULL)
		{
			Node *temp = head;
			while (temp->next)
			{
				temp = temp->next;
			}
			head = head->next;
			cout << temp->str;
			delete temp;
		}
	}
	~string_queue()
	{
		while (head != NULL)
		{
			Node *temp = head;
			head = head->next;
			delete temp;
		}
	}
};
int main()
{
	string_queue b;
	string a;
	cin >> a;
	b.push(a);
	b.pop();

	return 0;
}
