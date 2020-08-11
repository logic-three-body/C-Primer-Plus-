#include"stack.h"
#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	Stack st;//create an empty stack
	char ch;
	Item po;
	cout << "Please enter A to add a purchase order,\n"
		<< "P to process a PO ,or Q to quit.\n";
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
		{
			continue;
		}
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'A':
		case 'a':
			cout << "Enter a PO number to add: ";
				cin >> po;
				if (st.isfull())
				{
					cout << "stack is already full\n";
				}
				else
				{
					st.push(po);
				}
				break;
		case 'P':
		case 'p':
			if (st.isempty())
			{
				cout << "stack is already empty\n";
			}
			else
			{
				st.pop(po);
				cout << "PO#" << po << " poped\n";
			}
			break;
		}
		cout << "Please enter A to add a purchase order,\n"
			<< "P to process a PO ,or Q to quit.\n";
	}
	cout << "BYE\n";
	return 0;
}