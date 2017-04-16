#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<iterator>
using namespace std;

int main(){
	list<int> ilist;
	for (int i = 0; i < 10; i++)
	{
		ilist.push_back(i);
	}
	for (list<int>::iterator iter = ilist.begin(); iter != ilist.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	vector<int> ivec(ilist.size() * 2);
	for (vector<int>::iterator iter = ivec.begin(); iter !=ivec.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	//����֮ǰ���뿼�Ǹ��Ƶ�Ŀ�������Ƿ����㹻�Ŀռ䣬���û�пռ����ʹ�ò�������������п���back_inserterΪ���������
	copy(ilist.begin(), ilist.end(), back_inserter(ivec));

	//��ǰ�濪ʼ����
	copy(ilist.begin(), ilist.end(), ivec.begin());
	//�Ӻ��濪ʼ����
	copy_backward(ilist.begin(), ilist.end(), ivec.end());

	//��������copy�����ݿ�����������У�ʹ�������������
	copy(ilist.begin(), ilist.end(), ostream_iterator<int>(cout, " ")); //Ч��������forѭ������ʾ����

	//�������������
	copy(ilist.rbegin(), ilist.rend(), ivec.back());
	reverse_copy(ilist.begin(), ilist.end(), ivec.begin()); //�����滻�������������������ٶȸ���
	

	return 0;
}