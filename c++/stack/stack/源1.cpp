#include<iostream>
#include<cctype>
#include"stack.h"
int main()
{
	using namespace std;
	Stack st;
	char ch;
	unsigned long po;
	while (cin >> ch&& toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'A':
		case 'a':cout << "enter";
			cin >> po;
			if (st.isfull())
				cout << "full\n";
			else
				st.push(po);
			break;
		case 'P':
		case 'p': if (st.isempty())
			cout << "empty\n";
				  else{
					  st.pop(po);
					  cout << po << "popped\n";
				  }
				  break;
		}
	}
	st.Cul();
	cin.get();
	cin.get();
	return 0;
}