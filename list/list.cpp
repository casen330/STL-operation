#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<string>

using namespace std;

int main(){
//	//vector<int> a;
//	//list<int> b;
//	//deque<int> c;
//
//	////vector<int>::size_type          a1;  //
//	////vector<int>::iterator           a2;  //
//	////vector<int>::const_iterator     a3;  //����������
//	////vector<int>::reverse_iterator   a4;  //����������������������һ��Ԫ����ǰ����
//	////vector<int>::const_reverse_iterator a5;  //�����������
//	////vector<int>::difference_type    a6;  //����������������������֮��ľ���
//	////vector<int>::value_type         a7;
//	////vector<int>::reference          a8=a;  //����
//	////vector<int>::const_reference	a9=a;  //������
//	//
//	//////list��deque ͬ������Щ����
//
//	//a.push_back(1);
//	//a.push_back(2);
//	//a.push_back(3);
//	//a.push_back(10);
//	//
//	//b.push_back(4);
//	//b.push_back(5);
//	//b.push_back(6);
//
//	//c.push_back(7);
//	//c.push_back(8);
//	//c.push_back(9);
//
//	//for (vector<int>::iterator iter = a.begin(); iter != a.end(); iter++)
//	//{
//	//	cout << *iter << endl;
//	//}
//	//vector<int>::iterator ite = a.begin();
//	//cout << "����0" << endl;
//	//a.insert(ite, 0);
//	//for (vector<int>::iterator iter = a.begin(); iter != a.end(); iter++)
//	//{
//	//	cout << *iter << endl;
//	//}
//	//cout << "����10�� 0" << endl;
//	//vector<int>::iterator itee = a.begin();
//	//cout << *itee <<"------------"<< endl;
//	//a.insert(itee,2,88);
//	//for (vector<int>::iterator iter = a.begin(); iter != a.end(); iter++)
//	//{
//	//	cout << *iter << endl;
//	//}
//	//int arr[4] = { 11, 22, 33, 44 };
//	//vector<int>::iterator iteee = a.begin();
//	//vector<int>::iterator firstit = a.begin();
//	//vector<int>::iterator lastit = firstit + a.size() / 2;
//	//a.insert(iteee, firstit,lastit);
//	//for (vector<int>::iterator iter = a.begin(); iter != a.end(); iter++)
//	//{
//	//	cout << *iter << endl;
//	//}
//
	//vector<int> ivec1;
	//vector<int> ivec2;
	//ivec1.push_back(5);
	//ivec1.push_back(7); 
	//ivec1.push_back(9);
	//ivec1.push_back(12);

	//ivec2.push_back(0);
	//ivec2.push_back(2);
	//ivec2.push_back(4);
	//ivec2.push_back(6);
	//ivec2.push_back(8);
	//ivec2.push_back(10);
	//ivec2.push_back(12);

	//if (ivec1>ivec2)
	//{
	//	cout << "ivec1 ��" << endl;
	//}

	vector<int> a;
	vector<int> b;
	a.push_back(10);
	a.push_back(20);
	a.push_back(30);
	a.push_back(40);
	b.push_back(100);
	b.push_back(200);
	b.push_back(300);
	cout << "a�е�Ԫ��" << endl;
	for (vector<int>::iterator iter = a.begin(); iter != a.end(); iter++)
	{
		cout << *iter << endl;
	}
	cout << "b�е�Ԫ��" << endl;
	for (vector<int>::iterator iter = b.begin(); iter != b.end(); iter++)
	{
		cout << *iter << endl;
	}
	/*cout << "a.swap(b);����****************" << endl;
	a.swap(b);
	cout << "a�е�Ԫ��" << endl;
	for (vector<int>::iterator iter = a.begin(); iter != a.end(); iter++)
	{
		cout << *iter << endl;
	}
	cout << "b�е�Ԫ��" << endl;
	for (vector<int>::iterator iter = b.begin(); iter != b.end(); iter++)
	{
		cout << *iter << endl;
	}*/

	/*cout << "b.swap(a);����****************" << endl;
	b.swap(a);
	cout << "a�е�Ԫ��" << endl;
	for (vector<int>::iterator iter = a.begin(); iter != a.end(); iter++)
	{
		cout << *iter << endl;
	}
	cout << "b�е�Ԫ��" << endl;
	for (vector<int>::iterator iter = b.begin(); iter != b.end(); iter++)
	{
		cout << *iter << endl;
	}*/

	cout << "ʹ��assign ��ֵ*************" << endl;	
	b.assign(a.begin(),a.end());
	cout << "a�е�Ԫ��" << endl;
	for (vector<int>::iterator iter = a.begin(); iter != a.end(); iter++)
	{
		cout << *iter << endl;
	}
	cout << "b�е�Ԫ��" << endl;
	for (vector<int>::iterator iter = b.begin(); iter != b.end(); iter++)
	{
		cout << *iter << endl;
	}
	return 0;
}

