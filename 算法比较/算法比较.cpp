#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<functional>
#include<iterator>
using namespace std;


//for_eachʹ�õĺ����������ã������ٶȿ�
void square(int & elem){
	elem = elem*elem;
}
//transformʹ�õĺ���������Ҫ������
int square2(int elem){
	return elem*elem;
}

int main(){
	vector<int> a;
	vector<int> b;
	for (int i = 1; i < 10; i++)
	{
		a.push_back(i);
		b.push_back(i);
	}

	for (vector<int>::iterator iter = a.begin(); iter != a.end(); ++iter)
		cout << *iter << " ";
	cout << endl;
	//for_each���в����������ã������ٶȿ�ܶ�
	for_each(a.begin(), a.end(), square);
	//transform���в������ڼ��ж�ο����������ٶȱȽ���
	transform(a.begin(), a.end(), a.begin(),square2);

	swap_ranges(a.begin(), a.end(), b.begin());

	return 0;
}