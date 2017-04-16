#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<functional>

using namespace std;

bool bothEvenOrOdd(int elem1, int elem2){
	return elem1 % 2 == elem2 % 2;
}

int main(){

	vector<int> ivec;
	list<int> ilist;
	for (int i = 1; i < 8; i++)
	{
		ivec.push_back(i);
	}
	for (int i = 3; i < 10; i++)
	{
		ilist.push_back(i);
	}
	for (vector<int>::iterator iter = ivec.begin(); iter !=ivec.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;
	for (list<int>::iterator iter = ilist.begin(); iter != ilist.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	// �Ƚ�,equal����ֵΪbool����
	bool result = equal(ivec.begin(), ivec.end(), ilist.begin());
	if (result)
	{
		cout << "�������������" << endl;
	}
	//����ν���ж����������ж�Ӧ�����Ƿ�ͬΪ������ͬΪż��
	bool result2 = equal(ivec.begin(), ivec.end(), ilist.begin(), bothEvenOrOdd);
	if (result2)
	{
		cout << "��ͬΪ������ͬΪż��" << endl;
	}


	//�ҳ����������е�һ������ȵ��� ������ֵ��һ��pair����һ�Զ���������
	//��һ��������ָ���һ�������в���ȵ������ڶ���������ָ��ڶ��������в���ȵ���	
	pair<vector<int>::iterator, list<int>::iterator> result3;
	result3 = mismatch(ivec.begin(), ivec.end(), ilist.begin());
	//���û���ҵ�����ȵ�������ô��һ����������Ϊ end
	if (result3.first==ivec.end())
	{
		cout << "û���ҵ�����ȵ���" << endl;
	}
	else
	{
		cout << "�ҵ���!" << endl << " ��һ����Ϊ��" << *result3.first << "�ڶ�������ȵ���Ϊ��" << *result3.second << endl;
	}
	//ʹ��Ԥ����ĺ���������ν��,less_equal<int>(),�����һ�������е���С�ڵ��ڵڶ��������е������򷵻�true�������ң����򷵻��ҵĵ�ֵ�ĵ�����
	result3 = mismatch(ivec.begin(), ivec.end(), ilist.begin(), less_equal<int>());


	//����һ�������ǲ��Ǳȵڶ����������С��������Ƚϵ�ֵ��һ����˭�����࣬˭�ʹ󣩣���һ��������ȣ��͸��ݲ���ȵ������Ƚϴ�С����ȫ����ȣ�����ȣ�
	//�����һ��һ������С����һ�����䣬�򷵻�true������false�����һ��������ڵ��ڵڶ�������
	bool result4 = lexicographical_compare(ilist.begin(), ilist.end(), ivec.begin(), ivec.end());
	if (result4)
	{
		cout << "��һ������С�ڵڶ������䣡" << endl;
	}
	else
	{
		cout << "��һ��������ڵ��ڵڶ������䣡" << endl;
	}
	return 0;
}