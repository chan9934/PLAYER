#include <iostream>
#include <vector>

using namespace std;
class Parent
{
public:
	Parent()
	{
		cout << "Parent Construct" << endl;
	}
	virtual ~Parent()
	{
		cout << "Parent Destruct" << endl;
	}

private:
	int a;
};

class Child : public Parent
{
public:
	Child()
	{
		cout << "Child Construct" << endl;
	}
	virtual ~Child()
	{
		cout << "Child Destruct" << endl;
	}
public:
	void ChildDo()
	{
		cout << "a" << endl;
	}
};

int main()
{
	vector<Parent*> Data;
	Data.push_back(new Child());
	Data.push_back(new Parent());
	Data.push_back(new Child());
	Data.push_back(new Child());
	for (int i = 0; i < Data.size(); ++i)
	{
		Child* CastC = dynamic_cast<Child*>(Data[i]);
		if (CastC)
		{
			CastC->ChildDo();
		}
	}
	Parent* P1 = new Child();




	Child* CastC = dynamic_cast<Child*>(P1);
	if (CastC != nullptr)
	{
		CastC->~Child();
	}

	Parent* pParent = new Child();
	delete pParent;


	return 0;
}