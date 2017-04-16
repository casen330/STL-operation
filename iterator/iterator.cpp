#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<string>

using namespace std;

//bool found(vector<int>::iterator first, vector<int>::iterator last, int val)
//{
//	while (first!=last)
//	{
//		if (*first==val)
//		{
//			break;
//		}
//		else
//		{
//			first++;
//		}
//	}
//	if (first==last)
//	{
//		return false;
//	}
//	else
//	{
//		return true;
//	}
//}
//vector<int>::iterator found(vector<int>::iterator first, vector<int>::iterator last, int val)
//{
//	while (first != last)
//	{
//		if (*first == val)
//		{
//			break;
//		}
//		else
//		{
//			first++;
//		}
//	}
//	return first;
//}

int main(){
	
	//vector<int> a;
	//a.push_back(1);
	//a.push_back(2);
	//a.push_back(3);
	//a.push_back(4);

	//vector<int>::iterator  first = a.begin();	
	//vector<int>::iterator last = a.end();

	////bool judge = found(first, last, 3);
	///*if (judge)

	//{
	//	cout << "Found it." << endl;
	//}
	//else
	//{
	//	cout << "Not found." << endl;
	//}*/
	//if (found(first,last,5) != last)
	//{
	//	cout << "Found it." << endl;
	//}
	//else
	//{
	//	cout << "Not found." << endl;
	//}

	const vector<int> svec(11,10);
	
	list<string> slist;
	string str;
	cout << "Enter some strings:" << endl;
	
	while (cin>>str)
	{
		
		slist.push_back(str);
	}
	for (vector<int>::const_iterator iter = svec.begin(); iter !=svec.end(); iter++)
	{
		cout << *iter << endl;
	}
	cout << "list***************************" << endl;
	for (list<string>::iterator it = slist.begin(); it != slist.end(); it++)
	{
		cout << *it << endl;
	}

	return 0;
}