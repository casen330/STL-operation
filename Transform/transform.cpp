#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<functional>
#include<iterator>
using namespace std;

int main(){
	vector<int> ivec;
	list<int> ilist;
	for (int i = 1; i < 10; i++)
	{
		ivec.push_back(i);
	}

	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	//����transform���б任                     Ԥ����ĺ�������ȡ����
	transform(ivec.begin(), ivec.end(), ivec.begin(), negate<int>());
	
	//����transform���б任��ʱ��Ҫ��֤Ŀ��������λ�ã�����ʹ�ò��������
	transform(ivec.begin(), ivec.end(), back_inserter(ilist),bind2nd(multiplies<int>(),10));
	//Ҳ��������transform�����ݰ󶨵�cout�У���������ʾ
	transform(ilist.begin(), ilist.end(), ostream_iterator<int>(cout, " "), negate<int>());
	

	//����transform�����������ںϲ������ٴ���һ��Ŀ������
	transform(ivec.begin(), ivec.end(), ivec.begin(), ivec.begin(), multiplies<int>());

	transform(ivec.begin(), ivec.end(), ivec.rbegin(), back_inserter(ilist), plus<int>());
	//�����ݰ���  cout����
	transform(ivec.begin(), ivec.end(), ilist.begin(),ostream_iterator<int>(cout, " "), plus<int>());

	return 0;
}