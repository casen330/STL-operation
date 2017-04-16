// ɾ��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<algorithm>
#include<list>
#include<vector>
#include<functional>
#include<set>
#include<iterator>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{

	list<int> ilist;
	for (int i = 1; i <= 6; i++)
	{
		ilist.push_back(i);
		ilist.push_front(i);
	}
	for (list<int>::iterator iter = ilist.begin(); iter != ilist.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	//remove����������ɾ���������߼���ɾ��
	//����ԭ���ݵ�begin��end��������ʾΪ��       1 2 3 4 5 6
	//ɾ��3����ԭ���ݵ�begin��end��������ʾΪ��1 2 4 5 6 6  ԭ������Ԫ�ظ�����û�м�С�����Ҫ���ɾ������Ҫʹ��erase
	remove(ilist.begin(), ilist.end(), 3);
	for (list<int>::iterator iter = ilist.begin(); iter != ilist.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	//remove ����ֵΪ�����������ص����߼��յ�
	list<int>::iterator end;   
	end = remove(ilist.begin(), ilist.end(), 3);  //���صĵ��������ǵ�ԭ���ݵ����һ������һ��
	
	cout << "һ��ɾ���ˣ�" << distance(end, ilist.end()) << "��" << endl;

	//������ɾ��
	ilist.erase(end, ilist.end()); //��remove���صĵ�������ԭ������֮�����ȫ��ɾ������ʵ����������ɾ��

	//����remove��eraseʵ��������ɾ��
	ilist.erase(remove(ilist.begin(), ilist.end(), 3), ilist.end());
	//���� remove_if �� erase ʵ�ִ�����������ɾ�� С��4����
	ilist.erase(remove_if(ilist.begin(), ilist.end(), bind2nd(less<int>(), 4)), ilist.end());

	multiset<int> iset;
	//��ilist��ֵ�����Ƶ�iset�У��ڸ��ƹ����У�ɾ��С��3������ֵ
	remove_copy_if(ilist.begin(), ilist.end(), inserter(iset, iset.end()), bind2nd(less<int>(), 3));

	//��ilist�е����ݸ��Ƶ� cout���У���ɾ�����е�3
	remove_copy(ilist.begin(), ilist.end(), ostream_iterator<int>(cout, " "), 3);

	//ɾ�����д���4��
	remove_copy_if(ilist.begin(), ilist.end(), ostream_iterator<int>(cout, " "), bind2nd(greater<int>(), 4));


	//ʹ��uniqueɾ���ظ���,posָ����õ����һ�����ݵ���һ��
	list<int>::iterator pos;
	pos = unique(ilist.begin(), ilist.end());
	//����ν����ɾ��,ɾ����ǰһ����������С������
	//����ɾ��ǰ��1 4 4 6 1 2 2 3 1 6 6 6 5 7 5 4 4
	//    ɾ����1 4 4 6 6 6 6 7
	pos = unique(ilist.begin(), ilist.end(), greater<int>());

	//ʹ��unique_copy��һ�������е����ݸ��Ƶ���һ�������У��ڸ��ƹ����н�һЩ�������ظ���ɾ��
	unique_copy(ilist.begin(), ilist.end(), iset.begin());
	unique_copy(ilist.begin(), ilist.end(), ostream_iterator<int>(cout," "));
	//ʹ��ν����Լ��
	unique_copy(ilist.begin(), ilist.end(), iset.begin(), greater<int>());

	return 0;
}

