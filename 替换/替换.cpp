#include<iostream>
#include<algorithm>
#include<list>
#include<functional>
#include<iterator>
using namespace std;

int main(){

	list<int> ilist;
	for (int i = 2; i < 8; i++)
		ilist.push_back(i);
	for (int i = 4; i < 10; ++i)
		ilist.push_back(i);

	//��replace�����滻�������е���6��ֵ������42
	replace(ilist.begin(), ilist.end(), 6, 42); 
	//����replace_if ��ilist��С��5�������滻��0��  less<int>()ΪԤ����ĺ�������  Ԥ����ĺ��������� bind2nd()
	replace_if(ilist.begin(), ilist.end(), bind2nd(less<int>(), 5), 0);

	list<int> ilist2;
	for (int i = 2; i < 7; i++)
		ilist2.push_back(i);
	for (int i = 4; i < 10; ++i)
		ilist2.push_back(i);

	for (list<int>::iterator iter = ilist2.begin(); iter != ilist2.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	//����replace_copy��ilist2�е����ݶ�copy�� cout���У���copy�����н�5�滻Ϊ55
	replace_copy(ilist2.begin(), ilist2.end(), ostream_iterator<int>(cout, " "), 5, 55);
	//����replace_copy_if��ilist2�е�����copy��cout���У����滻��ʹ��Ԥ���庯�����󣬽�С��5�Ķ��滻Ϊ44
	replace_copy_if(ilist2.begin(), ilist2.end(), ostream_iterator<int>(cout, " "), bind2nd(less<int>(), 5), 44);
	//��copy�����н������������滻Ϊ0
	replace_copy_if(ilist2.begin(), ilist2.end(), ostream_iterator<int>(cout, " "), bind2nd(modulus<int>(), 2), 0);

	return 0;
}