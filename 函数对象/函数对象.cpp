#include<iostream>
#include<set>
#include<algorithm>
#include<functional>


using namespace std;
//��������
class PrintInt
{
public:
	void operator()(int number) const
	{
		cout << number << " ";
	}
};

//��ͨ����
void printNum(int number){
	cout << number << " ";
}
int main(){
	
	set<int> a; //�Զ�����ĺ����
	set<int, less<int>> a1;  //less<int>ΪĬ�ϵĺ�������ʡ�ԣ�����ʾ��С��������
	set<int, greater<int>> a2; //��ʾ�Ӵ�С����

	//�㷨
	for_each(a.begin(), a.end(),printNum);// ���ú�����������Ե����������ڵ���������
	for_each(a.begin(), a.end(), PrintInt()); //���ú�����������������

	return 0;
}