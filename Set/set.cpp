#include<iostream>
#include<set>

using namespace std;

//ͳһ��ʾ�����е�����(ģ�庯������������ʾ���е�����
template <typename Container> void PrintContents(const Container &a)
{
	Container::const_iterator iter = a.begin();
	while (iter!=a.end())
	{
		cout << *iter << endl;
		++iter;
	}
	cout << endl;
}


int main(){

	set<int> a;
	multiset<int> ma;
	//�������Զ������ 
	a.insert(60);  
	a.insert(-1);
	a.insert(3000);
	cout << "��ʾset��������ݣ�" << endl;
	set<int>::const_iterator i = a.begin();
	while (i!=a.end())
	{
		cout << *i << endl;
		++i;
	}

	ma.insert(3000);
	ma.insert(a.begin(), a.end());  //����a����ʼ��ma
	ma.count(3000);  //ͳ������ 3000 �ĸ���

	//����
	set<int>::iterator i_found = a.find(-1); //����find���������� -1�����ص���һ��������
	if (i_found!=a.end())
	{
		cout << "Found it" << *i_found << endl;
	}

	//ɾ��
	a.erase(3000);  //����ɾ����Ҳ����ʹ��������������ɾ��һ����Χ�ڵ�ֵ��
	a.clear(); //ɾ��a�����е�����


	return 0;
}