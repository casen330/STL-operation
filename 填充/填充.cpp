#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<string>
#include<iterator>
using namespace std;
int main(){
	
	list<string> slist;
	slist.push_back("Hello");
	slist.push_back("Hi");
	slist.push_back("Good Morning");

	//ʹ��fill������䣬���������еĶ��滻Ϊ��casenxu��
	fill(slist.begin(), slist.end(), "casenxu");


	for (list<string>::iterator iter = slist.begin(); iter != slist.end(); ++iter)
	{
		cout << *iter << endl;
	}

	list<string> slist2;
	//ʹ��fill_n����ѡ�����ĸ���
	fill_n(back_inserter(slist2), 9, "casenxu");
	//�����ֵ�󶨵�cout����,��cout�����10��float���͵�7.4
	fill_n(ostream_iterator<float>(cout, " "), 10, 7.4);
	cout << "slist2: **********" << endl;
	fill(slist2.begin(), slist2.end(), "again");
	for (list<string>::iterator iter = slist.begin(); iter != slist.end(); ++iter)
	{
		cout << *iter << endl;
	}
	cout << "�滻7��֮��Ľ��" << endl;
	//ʹ��fill_n��slist2ǰ7����ֵȫ�滻Ϊ��xu��
	fill_n(slist2.begin(),7, "xu");
	for (list<string>::iterator iter = slist2.begin(); iter != slist2.end(); ++iter)
	{
		cout << *iter << endl;
	}
	//fill��fill_nֻ�����̶���ֵ

	//generate��generate_n�������ú��������
	list<int> ilist;
	generate_n(back_inserter(ilist), 5, rand);
	for (list<int>::iterator iter = ilist.begin(); iter != ilist.end(); ++iter)
	{
		cout << *iter << endl;
	}
	

	generate(ilist.begin(), ilist.end(), rand);
	for (list<int>::iterator iter = ilist.begin(); iter != ilist.end(); ++iter)
	{
		cout << *iter << endl;
	}

	return 0;
}