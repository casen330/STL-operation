//#include<iostream>
//#include<string>
//using namespace std;
//
//class Screen{
//public:
//	//�������
//	typedef string::size_type index;
//
//	Screen(index ht = 0, index wd = 0) :contents(ht*wd, ' '), cursor(0), height(ht), width(wd){
//
//	}
//
//	char get()const{
//		return contents[cursor];
//	}
//	char get(index r, index c) const
//	{
//		index row = r*width;
//		return contents[row + c];
//	}
//private:
//	string contents;
//	index cursor;
//	index height, width;
//
//}obj1,obj2,obj3;
//
//class Y;
//class X{
//private:
//	Y *ptr;
//public:
//	X *ptr;
//	X &obj;
//};
//
//int main(){
//
//	return 0;
//}

//this ָ��

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Person{
//public:
//	Person(const string &nm, const string &addr){
//
//	}
//	string getName()const
//	{
//		return this->name;
//	}
//	string getAddr()const
//	{
//		return this->address;
//	}
//private:
//	string name;
//	string address;
//};
//class Screen
//{
//public:
//	typedef string::size_type index;
//private:
//	string contents;
//	index cursor;
//	index height, width; 
//};
//int main(){
//	Person p("Ccc", "xxxxx12");
//	Person p2("CCC", "xxxxx122");
//
//	return 0;
//}

//��Ԫ

//#include<iostream>
//#include<string>
//using namespace std;
//
//
//class Screen{
//public:
//	typedef string::size_type index;
//	Screen(int ht = 0, int wd = 0) :contents(ht*wd, ' '), cursor(0), height(ht), width(wd){}
//
//	int area() const
//	{
//		return  height * width;
//	}
//	friend int calaArea(Screen & screen);   //��Ԫ����
//	friend  class Window_magr;    //��Ԫ��
//	friend int Dog::foo(Screen &);  //ֻ��Dog���е�foo������Ϊ��Ԫ����
//private:
//	string contents;
//	index cursor;
//	int height, width;
//};
//class Dog{
//public:
//	foo(){}
//
//};
//class Window_mgr
//{
//public:
//	void relocate(int r, int c, Screen& s)
//	{
//		
//	}
//};
////�������������ĳ�Ա����
//int calaArea(Screen & screen)
//{	
//	
//	return screen.height * screen.width;
//}
//int main()
//{
//
//	Screen a(60, 100);
//	
//	cout << "ok" << endl;
//	return 0;
//}

//static ��̬��Ա

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Account
//{
//public:
//	Account(string name, double money) :owner(), amount(money){}
//	double getAmount() const
//	{
//		return this->amount;
//	}
//
//	void applyint(){
//		amount += amount*interestRate;
//	}
//	void deposit(double money)
//	{
//		this->amount += money;
//	}
//
//
//	static double	getRate(){ return interestRate; }  //��̬��Ա����������ֱ��ʹ����������
//	static void rate(double newRate)
//	{
//		interestRate = newRate;
//	}
//private:
//	string owner;
//	double amount;
//	static double interestRate;
//};
//
//double Account::interestRate = 0.015; //�����еľ�̬��Ա���г�ʼ��
//
//int main(){
//	
//	Account::rate(0.05);  //�ڴ�������ǰ����̬��Ա����������ֱ��ʹ����������
//
//	Account a("ccc", 1000);
//	Account b("bbb", 2000);
//	
//	a.deposit(500);
//	b.deposit(600);
//
//	cout << a.getAmount() << endl;
//	cout << b.getAmount() << endl;
//	cout << a.getRate() << endl;
//	a.rate(0.02);
//	cout << b.getRate() << endl;
//
//	a.applyint();
//	b.applyint();
//	cout << a.getAmount() << endl;
//	cout << b.getAmount() << endl;
//
//	return 0;
//}

//���ƹ��캯���͸�ֵ������

//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//class Sales_item{
//
//public:
//	Sales_item() :units_sold(0), revenue(0.0){
//		cout << "������Ĭ�ϵĹ��캯��" << endl;
//	}  //�޲ι��캯����Ĭ�Ϲ��캯��
//	Sales_item(const string &book) :isbn(book), units_sold(0), revenue(0.0){
//		cout << "�����˴�һ���ַ��������Ĺ��캯��" << endl;
//	}
//
////һ������²���Ҫ�Լ�д���ƹ��캯���͸�ֵ������
//
//	//���ƹ��캯�� Ҳ�ǹ��캯����һ�֣�ֻ����һ�����������Ҳ���Ϊ (const Sale_item &orig) һ�㶼��const
//	Sales_item(const Sales_item &orig) 
//		:isbn(orig.isbn), units_sold(orig.units_sold), revenue(orig.revenue) //������Ķ����Ƶ���ǰ����
//	{
//		cout << "���ƹ��캯���������ˣ�" << endl;
//	}  //������һ�㶼�ǿյ�
//
//	//��ֵ������  һ����������������Ҫ�Լ�д
//	Sales_item& operator=(const Sales_item &rhs){
//
//		cout << "��ֵ��������������" << endl;
//		isbn = rhs.isbn;
//		units_sold = rhs.units_sold;
//		revenue = rhs.revenue;
//		return *this;
//	}
//
//private:
//	string isbn;
//	unsigned units_sold;
//	double revenue; 
//};
//
//Sales_item foo(Sales_item item){
//	Sales_item temp;
//	temp = item;
//	return temp;
//}
//
//// ��һ������������ݳ�Ա��ָ���ʱ�򣬶�̬�������ڴ��ʱ�򣬱����Լ�д���ƹ��캯���͸�ֵ������
//
//class Noname{
//public:
//	Noname() :pstring(new string), i(0), d(0.0){}
//	Noname(const Noname& other) :pstring(new string(*(other.pstring))), i(other.i), d(other.d){}  //���ƹ��캯��
//
//	//���ظ�ֵ������
//	Noname& operator=(const Noname &rhs)
//	{
//		pstring = new string;   //����ֱ�Ӱ�ָ�븳ֵ��ָ�룬Ӧ�ð�ָ����ָ����ַ�����ֵ���µ�ָ��
//		*pstring = *(rhs.pstring);
//
//		i = rhs.i;
//		d = rhs.d;
//		return *this; 
//	}
//private:
//	string *pstring;
//	int i;
//	double d;
//};
//
//int main(){
//	Sales_item a; //����Ĭ���޲ι��캯��
//	Sales_item b("0-201-78345-x"); //������һ�����������õ����вι��캯��
//
//	Sales_item c(b);
//	a = b;
//	Sales_item item = string("9-99-99999-99");  //�����˴�һ���ַ��������Ĺ��캯����Sales_item(const string &book) :isbn(book), units_sold(0), revenue(0.0){}
//	cout << endl << "��һ��foo��" << endl;
//	Sales_item ret;
//	ret = foo(item);
//	cout << endl << "��һ��vector��" << endl;
//	vector<Sales_item> svec(5);  //���ȵ���һ��Ĭ�ϵĹ��캯����Ȼ���ڵ�����θ��ƹ��캯��
//
//	cout << endl << "��һ�����飺" << endl;
//	Sales_item primer_eds[] = {
//		string("0-000-0000-1"),
//		string("0-000-0000-2"),
//		string("0-000-0000-3"),
//		Sales_item()
//	};
//
//	Noname x, y;
//	//Ĭ�ϵĸ��ƹ��캯���͸�ֵ���캯����û�кܺõĴ���ָ�룬�����Ҫ�Լ�д���ƹ��캯���͸�ֵ���캯��
//	Noname z(x); //C++���Զ�����Ĭ�ϵĹ��캯��
//	x = y; //C++���Զ�����Ĭ�ϵĸ�ֵ���캯��
//
//	return 0;
//}

//��������

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Noname{
//public:
//	Noname() :pstring(new string), i(0), d(0.0){ 
//		//һ�㳣�õ��� ���ڹ��캯���� ���ļ����������ݿ⡢��̬�����ڴ�
//		cout << "���캯���������ˣ�" << endl; 
//	}
//	Noname(const Noname & other);  //���ƹ��캯��
//	Noname& operator=(const Noname &rhs);  //��ֵ������
//	~Noname();  //��������,����������û�в�������������������Զֻ����һ��
//private:
//	string *pstring;
//	int i;
//	double d;
//};
////���ƹ��캯��
//Noname::Noname(const Noname &other){
//	pstring = new string;
//	*pstring = *(other.pstring);
//	i = other.i;
//	d = other.d;
//}
////��ֵ������
//Noname& Noname::operator=(const Noname &rhs){
//	pstring = new string;
//	*pstring = *(rhs.pstring);
//	i = rhs.i;
//	d = rhs.d;
//	return *this;
//}
////��������
//Noname::~Noname(){
//	//��Ӧ�������������У��ر��ļ����ر����ݿ����ӡ����ն�̬������ڴ�
//
//	cout << "���������������ˣ�" << endl;
//	delete pstring;
//
//	//д������������ԭ�� ���д�������������ͱ���ͬʱҪд���ƹ��캯���͸�ֵ������ 
//}
//int main(){
//	Noname a;
//
//	Noname *p = new Noname; //û�е�����������
//	delete p;   //��New�����ģ�������delete�����
//	return 0;
//}

//��ơ�ǳ����

//#include<iostream>
//#include<cstring>
//
//using namespace std;
//
//class demo{
//public:
//	demo(int pa, char *cstr){
//		this->a = pa;
//		this->str = new char[104];
//		strcpy_s(this->str,20, cstr);
//	}
//
////ûд���ƹ��캯����C++���Զ�дһ����Ĭ�ϵĸ��ƹ��캯�����е���ǳ����
//	demo(demo & obj){
//		this->a = obj.a;
//		//this->str = obj.str; //���ﲻ�ԣ�Ӧ��Ҫ��ƣ���������ǳ���ƣ�ֻ������ָ��
//		this->str = new char[1024];  //�����ָ�룬Ҫд���ƹ��캯���������
//		if (str != 0)
//		{
//			strcpy_s(this->str,20,obj.str);
//		}
//	}
//	~demo(){ delete str; }
//public:  //Ӧ����˽�еģ�Ϊ�����ӷ��㣬���óɹ��е�
//	int a;
//	char *str;  //����ָ�����ݳ�Ա��Ӧ����new��̬���ڶ��Ϸ����ڴ棬Ȼ����ָ��ȥ�������䵽�Ĵ洢�ռ�
//};
//int main(){
//	demo a(10,"hello");	
//	demo b = a; //��a���Ƶ�b
//	cout << a.a << "," << a.str << endl;
//	cout << b.a << "," << b.str << endl;
//
//	b.a = 8;
//	b.str[0] = 'p';
//	cout << a.a << "," << a.str << endl;
//	cout << b.a << "," << b.str << endl;
//
//	return 0;
//}

//ָ�����

//#include<iostream>
//#include"plain-ptr.h"
//#include"value-ptr.h"
//#include"smart-ptr.h"
//using namespace std;
////����ָ��
//void test_AHasPtr(){
//	int i = 42;
//	AHasPtr p1(&i, 42);
//	AHasPtr p2 = p1;
//	cout << p2.get_ptr_val() << endl;
//	//�޸��κ�һ������Ӱ������һ�������������ָ��
//	p1.set_ptr_val(0);
//	cout << p2.get_ptr_val() << endl;
//}
////����ָ��
//void test_BHasPtr(){
//	int obj = 0;
//	BHasPtr ptr1(&obj, 42);
//	BHasPtr ptr2(ptr1);
//	cout << ptr1.get_ptr_val() << "," << ptr1.get_int() << endl;
//	cout << ptr2.get_ptr_val() << "," << ptr2.get_int() << endl;
//	//�޸�һ����Ӱ������һ������������ǳ���ƣ����ǻ��������ָ��
//	ptr2.set_ptr_val(2);
//	ptr2.set_int(22);
//	cout << "�޸��Ժ�" << endl;
//	cout << ptr1.get_ptr_val() << "," << ptr1.get_int() << endl;
//	cout << ptr2.get_ptr_val() << "," << ptr2.get_int() << endl;
//
//
//}
////���
//void test_CHasPtr(){
//	int obj = 0;
//	CHasPtr ptr1(obj, 42);
//	CHasPtr ptr2(ptr1);
//	cout << ptr1.get_ptr_val() << "," << ptr1.get_int() << endl;
//	cout << ptr2.get_ptr_val() << "," << ptr2.get_int() << endl;
//	//�޸��κ�һ��������Ӱ������һ�������ǻ���������Ķ���ռ�ô������ڴ�
//	ptr2.set_ptr_val(6);
//	ptr2.set_int(48);
//	cout << "�޸��Ժ�" << endl;
//	cout << ptr1.get_ptr_val() << "," << ptr1.get_int() << endl;
//	cout << ptr2.get_ptr_val() << "," << ptr2.get_int() << endl;
//}
//int main(){
//	cout << "����ָ��" << endl;
//	test_AHasPtr();
//
//	cout << endl << "ֵ���࣬���" << endl;
//	test_CHasPtr();
//
//	cout << endl << "����ָ��" << endl;
//	test_BHasPtr();
//
//	return 0;
//}
//


////���ز�����
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Dog{
//
//};
//
//class Sales_item{
//
//public:
//	Sales_item(string &book, unsigned count, double price) 
//		:isbn(book), units_sold(count), revenue(price*count){}
//	Sales_item() :units_sold(0), revenue(0.0){}
//	
//	friend ostream& operator<<(ostream& out, const Sales_item& s);
//	friend istream& operator>>(istream& in, Sales_item& s);
//
//	Sales_item& operator+=(const Sales_item& rhs);  //���޸��˵�ǰ����Ҫ�������ã�����Ҫ��Ϊ��Ա����
//	Sales_item& operator-=(const Sales_item& rhs);
//
//	friend bool operator==(const Sales_item&, const Sales_item&);
//private:
//	string isbn;
//	signed units_sold;
//	double revenue;
//};
//
////�������������
//ostream& operator<<(ostream& out, const Sales_item& s)
//{
//	out << s.isbn << "\t" << s.units_sold << "\t" << s.revenue;
//	return out;
//}
////�������������
//istream& operator>>(istream& in, Sales_item& s)
//{
//	double price;
//	in >> s.isbn >> s.units_sold >> price;
//	if (in)  //�ж������Ƿ����
//		s.revenue = s.units_sold * price;
//	else
//		s = Sales_item();  //��������ˣ��򽫶�����ΪĬ�Ͽն���
//	return in;
//}
//
////�ӷ�������һ��дΪ�ǳ�Ա����
//Sales_item operator+(const Sales_item& lhs, const Sales_item& rhs) //Ҫ����һ����ֵ�����Բ��ܷ�������
//{
//	Sales_item ret(lhs);
//	ret += rhs;
//	return ret;
//
//}
//Sales_item& Sales_item::operator+=(const Sales_item& rhs){
//	this->units_sold += rhs.units_sold;
//	this->revenue += rhs.revenue;
//	return *this;
//}
////����
//Sales_item operator-(const Sales_item& lhs, const Sales_item& rhs)
//{
//	Sales_item ret(rhs);
//	ret -= rhs;
//	return ret;
//}
//Sales_item& Sales_item::operator-=(const Sales_item& rhs){
//	this->units_sold -= rhs.units_sold;
//	this->revenue -= rhs.revenue;
//	return *this;
//}
////���ص���"=="
//inline bool operator==(const Sales_item &lhs, const Sales_item &rhs){
//	return lhs.units_sold == rhs.units_sold && lhs.revenue == rhs.revenue && lhs.isbn == rhs.isbn;
//}
////���ز�����"!=" �Ͳ���д�� ��Ա������
//inline bool operator!=(const Sales_item &lhs, const Sales_item & rhs){
//	return !(lhs == rhs);
//}
//
//int main()
//{
//	Dog a;
//
//	Sales_item item(string("0-000-00000-1"), 2, 25);
//	
//	cout << item << endl;
//
//	cin >> item;
//	cout << item << endl;
//
//	cout << "hello" << endl;
//	system("pause");
//	return 0;
//}


//���ظ�ֵ������

//#include<iostream>
//#include<cstring>
//using namespace std;
//
//
//class String
//{
//public:
//	String(char const *chars = "");
//
//	String &operator=(String const &);
//
//	void print();
//private:
//	char *ptrChar;
//};
//
//String &String::operator=(String const &str){
//	if (strlen(ptrChar)!=strlen(str.ptrChar))
//	{
//		char *ptrHold = new char[strlen(str.ptrChar) + 1];
//		delete[] ptrChar;	
//		ptrChar = ptrHold;
//	}
//	
//	strcpy(ptrChar, str.ptrChar);
//	return *this;  //����this��ָ��Ķ��󣬸�ֵ�������뷵��*this������
//}
//
//String::String(char const *chars){
//	chars = chars ? chars : "";
//	ptrChar = new char[strlen(chars) + 1];
//	strcpy(ptrChar, chars);
//}
//
//void String::print()
//{
//	cout << ptrChar << endl;
//}
//
//int main(){
//	String s("hello");
//	String s2("Dog");
//	s.print();
//	s2.print();
//
//	s = s2;
//	s.print();
//
//	system("pause");
//	return 0;
//}


//�����±������

//#include<iostream>
//
//using namespace std;
//
//class String{
//public:
//	String(char const *chars = "");
//
//	char &operator[](size_t index) throw(String); //�ɱ��Ա�������׳��쳣
//	char operator[](rsize_t index) const throw(String); //������Ա����
//
//	void print();
//
//private:
//	char*ptrChars;
//	static String errorMessage;
//};
//
//void String::print(){
//	cout << ptrChars << endl;
//}
//
//String String::errorMessage("Subscript out of range");
//
//char &String::operator[](size_t index) throw(String)  //�ɱ��Ա����
//{
//	if (index>=strlen(ptrChars))
//	{
//		throw errorMessage;
//	}
//	return ptrChars[index];
//}
//char String::operator[](size_t index) const throw(String)  //������Ա����
//{
//	if (index >= strlen(ptrChars))
//	{
//		throw errorMessage;
//	}
//	return ptrChars[index];
//}
//
//
//String::String(char const *chars)
//{
//	chars = chars ? chars : "";
//	ptrChars = new char[strlen(chars) + 1];
//	strcpy(ptrChars, chars);
//}
//
//
//int main(){
//
//	String s("hello");
//
//	cout << s[0] << endl;
//
//	s.print();
//
//	s[0] = 'q';
//	s.print();
//
//	String  const S2("dog");  //���ó�����Ա����
//	cout << S2[0] << endl;
//
//	cout << "Hello" << endl;
//	system("pause");
//	return 0;
//}


// ���س�Ա���ʲ�����

//#include<iostream>
//#include"string.h"
//#include"pointer.h"
//using namespace std;
//
//
//
//int main(){
//	String s("Hello String");
//	s.display();
//
//	String *ps = &s;  //��ͨ��ָ�룬���ײ�������ָ��
//	ps->display();
//
//	//��������ָ��
//	try
//	{
//		Pointer p1("C++");
//		p1->display();  //�����Ժ�Ϳ���ֱ������
//
//		String s = *p1;  //������ָ����н�����
//		s.display();
//
//
//		Pointer p2;
//		p2->display();  //δ��ʼ�������׳��쳣
//	}
//	catch (String const &error){
//		error.display();
//	}
//
//	cout << "hello" << endl;
//	system("pause");
//	return 0;
//}


// ���������Լ�������

//#include<iostream>
//
//using namespace std;
//
//class String{
//public:
//	String(char const *chars = "");
//	String(String const &str);
//	~String();
//
//	void display() const;
//
//	String &operator++(); //ǰ++  ���ص�������
//	String const operator++(int); //��++,  C++�ڵ��õ�ʱ����Զ���һ���㣬����Ҫд����   ���ص��ǿ���
//
//
//	String &operator--();
//	String const operator--(int);
//
//private:
//	char *ptrChars;
//};
//
//String &String::operator++()
//{
//	for (size_t i = 0; i < strlen(ptrChars); ++i){
//		++ptrChars[i];
//	}
//	return *this;
//}
//
//String const String::operator++(int)
//{
//	String copy(*this); //��ԭ�����ַ�����һ��copy,����copy
//	++(*this);
//	return copy;
//}
//
//String &String::operator--()
//{
//	for (size_t i = 0; i < strlen(ptrChars); ++i){
//		--ptrChars[i];
//	}
//	return *this;
//}
//String const String::operator--(int){
//	String copy(*this);
//	--(*this);
//	return copy;
//}
//
//void String::display()const
//{
//	cout << ptrChars << endl;
//}
//
//String::String(char const *chars){
//	chars = chars ? chars : "";
//	ptrChars = new char[strlen(chars) + 1];
//	strcpy(ptrChars, chars);
//}
//
//String::String(String const &str)
//{
//	ptrChars = new char[strlen(str.ptrChars) + 1];
//	strcpy(ptrChars, str.ptrChars);
//}
//
//String::~String(){
//	delete[] ptrChars;
//}
//
//int main(){
//
//	String s("ABC");
//	s.display();
//
//	++s;
//	s.display();
//
//	s++;
//	s.display();
//
//
//	String s1("456");
//	s1.display();
//	s1--;
//	s1.display();
//	String s2("987");
//	s2.display();
//	--s2;
//	s2.display();
//	system("pause");
//	return 0;
//}


//// ��������


//#include<iostream>
//#include<vector>
//#include<list>
//#include<algorithm>
//using namespace std;
//
//// **��ƺ�������ʱһ��ϰ��ʹ��struct
//
////class absint{
////public:
////	int operator()(int val){
////
////	}
////};
//
//struct absInt{
//	//  ���ز�����������operator�����С���ž��Ǻ������ò�����
//	int operator() (int val){
//		return val < 0 ? -val : val;
//	}
//};
////��ͨ��ģ�庯��
//template<typename elementType>
//void FunDisplayElement(const elementType &element)
//{
//	cout << element << "";
//}
//
//
////��������
//template<typename elementType>
//struct DisplayElement{
//	//�洢״̬
//	int m_nCount;
//	DisplayElement(){
//		m_nCount = 0;  //���캯����ʼ����Ա
//	}
//	void operator() (const elementType &element)
//	{
//		++m_nCount;
//		cout << element << "";
//	}
//};
//
//int main()
//{
//	int i = -23;
//	absInt absobj;
//	unsigned int j = absobj(i);  //��Ϊ����ʹ�õķ��������ں��������԰Ѷ��������������
//
//	cout << i << endl;
//	cout << j << endl;
//
//
//	vector<int> a;
//	for (int n = 0; n < 10; ++n)
//		a.push_back(n);
//
//	list<char> b;
//	for (char c = 'a'; c < 'k'; ++c)
//		b.push_back(c);
//
//	//ʹ��STL���㷨
//	for_each(a.begin(), a.end(), DisplayElement<int>());  //for_each ���� a.begin()  ��  a.end() ֮�������Ԫ��
//
//	//��ʾ״̬
//	DisplayElement<int> mResult;
//	mResult = for_each(a.begin(), a.end(), mResult);
//	cout << endl;
//	cout << "����Ϊ��" << mResult.m_nCount << endl;  //����������Ա���״̬
//
//
//	for_each(b.begin(), b.end(), DisplayElement<char>());
//
//	cout << "Hello ��������" << endl;
//	return 0;
//}

//һԪ��������һԪν��

//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//template<typename numberType>
//struct IsMultiple  //�ж��ǲ���������
//{
//	numberType m_Divisor;
//	IsMultiple(const numberType& divisor)
//	{
//		m_Divisor = divisor;
//	}
//
//	bool operator()(const numberType& element) const  //���ص��ò��������ҷ���ֵΪbool�����Խ���һԪν��
//	{
//		return ((element % m_Divisor) == 0);
//	}
//
//};
//
//int main(){
//	vector<int> vecIntegers;
//	for (int i = 25; i < 101; ++i)
//		vecIntegers.push_back(i);
//	IsMultiple<int> a(4);  //�����Ƶĺ�������. IsMultiple<int>(4) Ϊ�����ĺ������󣬿�ʡ��һ��������ֱ��ʹ�������档
//	vector<int>::iterator iElement;
//	iElement=find_if(vecIntegers.begin(), vecIntegers.end(), a);  //find_if��һ������ֵ����һ��������
//	if (iElement != vecIntegers.end())
//		cout << "��һ��4�������������ǣ�" << *iElement << endl;
//	system("pause");
//	return 0;
//}


//��Ԫ��������

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//template<typename elementType>
//class CMultiply //�˷�
//{
//public:
//	elementType operator()(const elementType& elem1, const elementType elem2){
//		return elem2*elem1;
//	}
//};
//
//int main(){
//
//	vector<int> a, b;
//	for (int i = 0; i <= 9; ++i)
//		a.push_back(i);
//	for (int j = 100; j <= 109; ++j)
//		b.push_back(j);
//	vector<int> vecResult;
//	vecResult.resize(10);
//	
//	transform(a.begin(), a.end(), b.begin(), vecResult.begin(), CMultiply<int>()); //�任�㷨
//	for (size_t nIndex = 0; nIndex < vecResult.size(); nIndex++)
//	{
//		cout << vecResult[nIndex] << ' ';
//	}
//
//	cout << endl << "hello" << endl;
//	system("pause");
//	return 0;
//}

//����ֵΪbool�Ķ�Ԫ�������󣨶�Ԫν�ʣ�

//#include<iostream>
//#include<set>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//class CCompareStringNoCase
//{
//public:
//	bool operator() (const string&str1, const string& str2) const
//	{
//		//��������ĸ��ΪСд��ĸ
//		string str1LowerCase;
//		str1LowerCase.resize(str1.size());
//		transform(str1.begin(), str1.end(), str1LowerCase.begin(), tolower); //tolower �����Ǻ���ָ�룬����Ҫʹ�����ţ����ž��Ǻ�����
//
//		string str2LowerCase;
//		str2LowerCase.resize(str2.size());
//		transform(str2.begin(), str2.end(), str2LowerCase.begin(), tolower);
//
//		return (str1LowerCase < str2LowerCase);
//	}
//};
//
//int main(){
//	set<string> mx;  //Ĭ�ϵ�setʹ�õ���Ĭ�ϵ�ν�ʣ����ִ�Сд
//	set<string,CCompareStringNoCase> names;  //�Լ���д��Ԫν�ʣ����Ӳ����ִ�Сд�Ĺ���
//	names.insert("Tina");
//	names.insert("jim");
//	names.insert("Jack");
//	names.insert("San");
//	names.insert("hello");
//
//	set<string,CCompareStringNoCase>::iterator iNameFound = names.find("jim");
//	if (iNameFound!=names.end())
//	{
//		cout << "Found it!" << *iNameFound<< endl;
//	}
//	else
//	{
//		cout << "Not found!" << endl;
//	}
//	system("pause");
//	return 0;
//}


//ת��������ת��������

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Dog
//{
//public:
//	Dog(string n, int a, double w) :name(n), age(a), weight(w){}
//	operator int() const //ת������, �����ǳ�Ա�������޷������ͣ��޲�����ͨ��Ϊconst
//	{
//		return age;
//	}
//	operator double() const
//	{
//		return weight;
//	}
//private:
//	int age;
//	double weight;
//	string name;
//};
//
//int main()
//{
//	int a, b;
//	a = 10;
//	b = a;
//	Dog d("bill",6,15.0);
//
//	b = d;  //ͨ��ת����������Dogת��Ϊint���͵�b
//
//	system("pause");
//	return 0;
//}


//�����������

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Item_base
//{
//
//public:  //������ⲿֻ��ʹ�ù��г�Ա����
//	Item_base(string book = " ", double sales_price = 0.0) :isbn(book), price(sales_price){}
//	//int x;
//	string book() const
//	{
//		return isbn;
//	}
//
//	//������麯���Ժ󣬱��̳����Ժ��������оͿ������¶���ú���
//	//���麯��ֻ�ܱ��̳У������Ա����¶���
//	virtual double net_price(size_t n) const  //�麯��
//	{
//		return n*price;
//	}
//private:  //ֻ��������ڲ�����ʹ��
//	string isbn;
//protected:    //�ܱ��������ݳ�Ա��ר���������̳е�
//	double price;
//	
//};
//
//class Bulk_item : public Item_base  //���м̳�
//{
//public:
//	Bulk_item(const string book = "", double sales_price = 0.0,
//		size_t qty = 0, double disc_rate = 0.0) :Item_base(book, sales_price), //��ʼ������
//		min_qty(qty), discount(disc_rate){}
//
//	void test(){
//		//cout << x << endl;
//		cout << price << endl;  //�ӻ���̳����ܱ����ĳ�Ա����������ĳ�Ա������ʹ��
//	}
//	void test2(const Bulk_item &d, const Item_base &b)
//	{
//		cout << d.price << endl;  //ͨ���������ʹ�û�����ܱ�����Ա
//		//cout << b.x << endl;
//		//cout << b.price << endl;  //ͨ�����������ʹ�û�����ܱ�����Ա��������ܱ�����Աֻ��������ڲ�ʹ�ã������Ǳ�������Ԫʹ�ã������Ǳ��̳�
//	}
//
//	double net_price(size_t cnt) const  //�ض���̳������麯��
//	{
//		if (cnt >= min_qty)
//		{
//			return cnt*(1 - discount)*price;
//		}
//		else
//			return cnt*price;
//	}
//private:
//	size_t min_qty;
//	double discount;
//};
//
//void print_total(ostream &os, Item_base*item, size_t n)  //���item��һ������Ķ�������û�����麯���������������Ķ��������������嶨��ĺ��������ʵ���˶�̬��
//{
//	os << "ISBN" << item->book() << "\tnumber sold;" << n << "\ttotal price:" << item->net_price(n) << endl;
//}
//
//int main(){
//	Item_base item("0-1234567",90.0);
//	cout << item.book() << "," << item.net_price(10) << endl;
//
//	Bulk_item item2("0-1234567", 90.0, 10, 0.12);
//	cout << item2.book() << "," << item2.net_price(10) << endl;
//
//	item2.test();
//	item2.test2(item2, item);
//	//cout << item2.x << endl;  //�̳��˻��๫�еĳ�Ա
//
//
//	Item_base* a = new Item_base("0-1234567-0", 11.0);
//	Bulk_item* b = new Bulk_item("0-1234567-1", 22.0, 2, 0.05);
//
//	print_total(cout, a, 2);
//	print_total(cout, b, 3);  //***�ܹ����ջ������ĵط��������Դ�һ���������
//
//	//��ϰ���ʵ�ֶ�̬�󶨣���̬��
//	Item_base* books[5];  //ָ������,  *** һ��ָ���������ָ�룬����ָ��������Ҳ����ָ�����������
//	books[0] = new Item_base("0-123456-1", 90.0);
//	books[1] = new Bulk_item("0-123456-2", 100.0, 6, 0.05);
//	books[2] = new Item_base("0-123456-3", 80.0);
//	books[3] = new Bulk_item("0-123456-4", 70.0, 3, 0.15);
//	books[4] = new Bulk_item("0-123456-5", 90.0, 5, 0.25);
//
//	int num[5];
//	num[0] = 2;
//	num[1] = 10;
//	num[2] = 1;
//	num[3] = 5;
//	num[4] = 3;
//
//	//���Զ�̬
//	for (int i = 0; i < 5; i++)  
//	{
//		print_total(cout, books[i], num[i]);  //ͨ������Ķ������ͣ�ѡ����û�����麯���������������д���麯����
//	}
//	system("pause");
//	return 0;
//}


//���ּ̳�

//#include<iostream>
//
//using namespace std;
//
//class A
//{
//public: 
//	A(){
//		a = 10;
//		b = 20;
//		c = 30;
//	}
//	int a;
//protected:
//	int b;
//private:
//	int c;
//};
//// Ĭ�ϵļ̳���private˽�м̳�
//class BB :A
//{
//	int x; //Ĭ����˽�е�
//};
//// struct Ĭ�ϵļ̳���public���м̳�
//struct BBB :A
//{
//	int m; //Ĭ���ǹ��е�
//};
//
////���м̳У����ı���������ݳ�Ա�����ͣ��ǹ�����Ȼ�ǹ��У��Ǳ�����Ȼ�Ǳ�����Ա
//class B1 :public A  //B1�̳��˻���A�е�a,b,c,������Ϊc��˽�еģ����Բ�����
//{
//public:
//	void test(){
//		cout << a << endl;
//		cout << b << endl;  //�����б�����Ա������������ʹ�ã��������ⲿʹ��
//	}
//};
//
////˽�м̳�, �̳����Ĺ��к��ܱ�����Ա�������˽�г�Ա
//class B2 :private A
//{
//public:
//	using A::a;  //��A�м̳е�public���г�Ա���public���г�Ա
//	void test()
//	{
//		cout << a << endl;
//		cout << b << endl;
//	}
//};
//
////�����̳�, ��A����Ĺ��г�Ա����˱�����Ա
//class B3 :protected A
//{
//public:
//	void test()
//	{
//		cout << a << endl;
//		cout << b << endl;
//	}
//};
//
//class C :public B1
//{
//	void test(){
//		cout << a << endl;   
//		cout << b << endl;
//	}
//};
//
//int main(){
//
//
//	cout << "test" << endl;
//	system("pause");
//	return 0;
//}

////������Ĺ��캯��
//
//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	int X;
//};
//
//class B :public A
//{
//public:
//	int Y;
//};
//
//
//class Base1{
//public:
//	Base1(int i){
//		b1 = i;
//		cout << "Base1�Ĺ��캯��������." << endl;
//	}
//	void print() const
//	{
//		cout << b1 << endl;
//	}
//private:
//	int b1;
//
//};
//
//class Base2{
//public:
//	Base2(int i){
//		b2 = i;
//		cout << "Base2�Ĺ��캯��������." << endl;
//	}
//	void print() const
//	{
//		cout << b2 << endl;
//	}
//private:
//	int b2;
//};
//
//class Base3{
//public:
//	Base3(){
//		b3 = 0;
//		cout << "Base3ȱʡ�Ĺ��캯��." << endl;
//	}
//	void print() 
//	{
//		cout << b3 << endl;
//	}
//private:
//	int b3;
//
//};
//
//class Member
//{
//public:
//	Member(int i)
//	{
//		m = i;
//		cout << "Member�Ĺ��캯��������." << endl;
//	}
//	int GetM(){
//		return m;
//	}
//private:
//	int m;
//};
//class Derived :public Base1, public Base2, public Base3  //���м̳�����������,
//{
//public:
//	Derived(int i, int j, int k, int l);
//	void Print();
//private:
//	int d;
//	Member mem;
//};
//Derived::Derived(int i, int j, int k, int l) :Base1(i), Base2(j), mem(k)  //�ڹ��������ʱ��Ҫ�ȹ�����࣬�����ʱ����Դ���������Ȼ�Ļ���Ĭ�ϵ���ȱʡ�Ĺ��캯��
//{
//	d = l;
//	cout << "Derived�Ĺ��캯��������." << endl;
//}
//
//void Derived::Print(){
//	Base1::print();
//	Base2::print();
//	Base3::print();
//	cout << mem.GetM() << endl;
//	cout << d << endl;
//}
//
//
//int main()
//{
//	B b;  //�ڴ�������Ķ����ʱ���ȱ��� ����/���� �������
//	b.X = 0;
//	b.Y = 1;
//
//	Derived obj(1, 2, 3, 4);
//
//	return 0;
//}


//���������������

//#include<iostream>
//using namespace std;
//
//class Base{
//public:
//	Base(){
//		b1 = b2 = 0;
//	}
//	Base(int i, int j);
//	~Base();
//	void Print(){
//		cout << b1 << "," << b2 << ",";
//	}
//private:
//	int b1, b2;
//};
//Base::Base(int i, int j){
//	b1 = i;
//	b2 = j;
//	cout << "Base�Ĺ��캯�������ã�" << b1 << "," << b2 << endl;
//}
//Base::~Base()
//{
//	cout << "Base���������������ã�" << b1 << "," << b2 << endl;
//}
//
//class Derived :public Base{
//public:
//	Derived(){
//		d = 0;
//	}
//	Derived(int i, int j, int k);
//	~Derived();
//	void Print();
//private:
//	int d;
//};
//Derived::Derived(int i, int j, int k):Base(i,j),d(k){
//	cout << "Derived�Ĺ��캯�������ã�" << d << endl;
//}
//Derived::~Derived(){
//	cout << "Derived����������������:" << d << endl;
//}
//void Derived::Print(){
//	Base::Print();
//	cout << d << endl;
//}
//
//
//int main()
//{
//	Derived objD1(1, 2, 3), objD2(4, 5, 6);
//	objD1.Print();
//	objD2.Print();
//
//	/*system("pause");*/
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
////����ö��
//enum BREED {Red, Yellow, Golden};
//
//
//class Mammal  //���鶯��
//{
//public:
//	Mammal();
//	~Mammal();
//
//	//��ȡ��������ͨ�������������Ա��������װ
//	int GetAge() const { return itsAge; }
//	void SetAge(int age) { itsAge = age; }
//	int GetWeight() const { return itsWeight; }
//	void SetWeight(int weight) { itsWeight = weight; }
//
//	void Speak() const { cout << "Mammal������!\n"; }
//	void Sleep() const{ cout << "Shhh. I'm sleeping.\n"; }
//protected:
//	int itsAge;
//	int itsWeight;
//};
//class Dog :public Mammal
//{
//public:
//	Dog();
//	~Dog();
//
//	BREED GetBreed() const { return itsBreed; }
//	void SetBreed(BREED breed) { itsBreed = breed; }
//
//	void WagTail() const { cout << "Tail wagging...\n"; }
//	void BegForFood() const { cout << "Begging for food...\n"; }
//
//private:
//	BREED itsBreed;
//};
//
//Mammal::Mammal() :itsAge(3), itsWeight(5){
//	cout << "Mammal�Ĺ��캯��������...." << endl;
//}
//Mammal::~Mammal()
//{
//	cout << "Mammal����������������...." << endl;
//}
//
//Dog::Dog() :itsBreed(Red){
//	cout << "Dog�Ĺ��캯��������...." << endl;
//}
//Dog::~Dog()
//{
//	cout << "Dog����������������...." << endl;
//}
//int main(){
//	Dog Fido;
//	Fido.Speak();
//	Fido.WagTail();
//	cout << "Fido is " << Fido.GetAge() << " years old" << endl;
//	return 0;
//}


//ת����̳�

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Item_base
//{
//
//public:  //������ⲿֻ��ʹ�ù��г�Ա����
//	Item_base(string book = " ", double sales_price = 0.0) :isbn(book), price(sales_price){}
//	//int x;
//	string book() const
//	{
//		return isbn;
//	}
//
//	//������麯���Ժ󣬱��̳����Ժ��������оͿ������¶���ú���
//	//���麯��ֻ�ܱ��̳У������Ա����¶���
//	virtual double net_price(size_t n) const  //�麯��
//	{
//		return n*price;
//	}
//private:  //ֻ��������ڲ�����ʹ��
//	string isbn;
//protected:    //�ܱ��������ݳ�Ա��ר���������̳е�
//	double price;
//	
//};
//
//class Bulk_item : public Item_base  //���м̳�
//{
//public:
//	Bulk_item(const string book = "", double sales_price = 0.0,
//		size_t qty = 0, double disc_rate = 0.0) :Item_base(book, sales_price), //��ʼ������
//		min_qty(qty), discount(disc_rate){}
//
//	void test(){
//		//cout << x << endl;
//		cout << price << endl;  //�ӻ���̳����ܱ����ĳ�Ա����������ĳ�Ա������ʹ��
//	}
//	void test2(const Bulk_item &d, const Item_base &b)
//	{
//		cout << d.price << endl;  //ͨ���������ʹ�û�����ܱ�����Ա
//		//cout << b.x << endl;
//		//cout << b.price << endl;  //ͨ�����������ʹ�û�����ܱ�����Ա��������ܱ�����Աֻ��������ڲ�ʹ�ã������Ǳ�������Ԫʹ�ã������Ǳ��̳�
//	}
//
//	double net_price(size_t cnt) const  //�ض���̳������麯��
//	{
//		if (cnt >= min_qty)
//		{
//			return cnt*(1 - discount)*price;
//		}
//		else
//			return cnt*price;
//	}
//private:
//	size_t min_qty;
//	double discount;
//};
//
//void print_total(ostream &os, Item_base *item, size_t n)  //���item��һ������Ķ�������û�����麯���������������Ķ��������������嶨��ĺ��������ʵ���˶�̬��
//{
//	os << "ISBN" << item->book() << "\tnumber sold;" << n << "\ttotal price:" << item->net_price(n) << endl;
//}
//
////������������ת���� �ڵ������º�����ʱ�򣬵ڶ����������Դ��������࣬��Ϊ���������ֱ��ת��Ϊ����
////������󣬵���ʹ�� " . "   ������ת�������õķ�����Ȼ�ǻ���ķ�����
//void print_total_1(ostream &os, const Item_base item, size_t n)
//{
//	os << "ISBN: " << item.book() << "\tnumber sold: " << n << "\ttotal price." << item.net_price(n)<<endl;
//}
////����ָ�룬����ʹ�� " -> "    ��ָ��ת��������ʵ����ȫת���������������ָ�����ʵ�ֵ���������ķ�������ʵ�ֶ�̬��
//void print_total_2(ostream &os, const Item_base *item, size_t n)
//{
//	os << "ISBN: " << item->book() << "\tnumber sold: " << n << "\ttotal price." << item->net_price(n) << endl;
//}
////�������ã�����ʹ�� " . "   ������ת������ʵ�ֶ�̬��
//void print_total_3(ostream &os, const Item_base &item, size_t n)
//{
//	os << "ISBN: " << item.book() << "\tnumber sold: " << n << "\ttotal price." << item.net_price(n) << endl;
//}
//
//
//int main(){
//	Item_base item("0-1234567",90.0);
//	cout << item.book() << "," << item.net_price(10) << endl;
//
//	Bulk_item item2("0-1234567", 90.0, 10, 0.12);
//	cout << item2.book() << "," << item2.net_price(10) << endl;
//
//	item2.test();
//	item2.test2(item2, item);
//	//cout << item2.x << endl;  //�̳��˻��๫�еĳ�Ա
//
//	//ת��
//	print_total_1(cout, item, 10);
//	print_total_1(cout, item2, 10); //���Ƕ���ת���������⣡
//
//	print_total_2(cout, &item, 10);
//	print_total_2(cout, &item2, 10); //����ָ��ת������ȷ��
//
//	print_total_3(cout, item, 10);
//	print_total_3(cout, item2, 10);  //��������ת������ȷ��
//
//	//ǿ�ƽ�������ת��Ϊ����
//	Bulk_item *p = static_cast<Bulk_item *>(&item);  //������ָ���������������ǿ��ת������������Σ�գ���C++�̳е�ʱ�򣬴�������Ҫ������ת��Ϊ�����ࡣ
//	cout << p->net_price(10) << endl;
//
//
//
//	Item_base* a = new Item_base("0-1234567-0", 11.0);
//	Bulk_item* b = new Bulk_item("0-1234567-1", 22.0, 2, 0.05);
//
//	print_total(cout, a, 2);
//	print_total(cout, b, 3);  //***�ܹ����ջ������ĵط��������Դ�һ���������
//
//	//��ϰ���ʵ�ֶ�̬�󶨣���̬��
//	Item_base* books[5];  //ָ������,  *** һ��ָ���������ָ�룬����ָ��������Ҳ����ָ�����������
//	books[0] = new Item_base("0-123456-1", 90.0);
//	books[1] = new Bulk_item("0-123456-2", 100.0, 6, 0.05);
//	books[2] = new Item_base("0-123456-3", 80.0);
//	books[3] = new Bulk_item("0-123456-4", 70.0, 3, 0.15);
//	books[4] = new Bulk_item("0-123456-5", 90.0, 5, 0.25);
//
//	int num[5];
//	num[0] = 2;
//	num[1] = 10;
//	num[2] = 1;
//	num[3] = 5;
//	num[4] = 3;
//
//	//���Զ�̬
//	for (int i = 0; i < 5; i++)  
//	{
//		print_total(cout, books[i], num[i]);  //ͨ������Ķ������ͣ�ѡ����û�����麯���������������д���麯����
//	}
//	system("pause");
//	return 0;
//}

// ��Ԫ��̳�

//#include<iostream>
//using namespace std;
//
//class Base{
//	friend class Frnd;  //Frnd��Base����Ԫ������Frnd�ǿ���ʹ��Base���ܱ�����Ա
//	friend class F1;
//protected:
//	int i;
//};
//
//class B1 :public Base{
//	friend class Frnd;  //Ҫ��ȷ��ָ����Ԫ��ϵ��������д��
//private:
//	int j;
//};
//
//class Frnd{
//public:
//	int mem(Base b){ return b.i;}
//	int mem(B1 b1){ return b1.i;}
//};
//
//class F1 :public Frnd{
//public:
//	int mem(Base b)  
//};
//
//int main(){
//
//	system("pause");
//	return 0;
//}

//��̬��Ա���̳�

//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	static size_t object_count()
//	{
//		return 99;
//	}
//protected:
//	static const size_t obj_count=100;
//};
//
//class B :public A
//{
//public:
//	void f(const B &b, const B *b1){
//		cout << A::obj_count << endl;
//		cout << B::obj_count << endl;
//		cout << b.obj_count << endl;
//		cout << obj_count << endl;
//		cout << b1->obj_count << endl;
//
//		cout << A::object_count() << endl;
//		cout << B::object_count() << endl;
//		cout << b.object_count() << endl;
//		cout << object_count() << endl;
//		cout << b1->object_count() << endl;
//	}
//};
//class C :public B
//{
//
//};
//
//int main(){
//
//	B b;
//	b.f(b,&b);
//	system("pause");
//	return 0;
//}

////���麯���������

//#include<iostream>
//using namespace std;
//
////Shpae��һ�������ࣺ������һ���������麯�����࣬���ܴ�������ֻ�ܼ̳У������ڼ̳е�ʱ����븲�Ǽ̳й����Ĵ��麯��
//class Shape
//{
//public:
//	Shape(){}
//	virtual ~Shape(){}
//	virtual double GetArea() = 0; // �����С�=0���ľͽд��麯���������Ķ���дҲ���ԣ���дҲ����
//	virtual double GetPerim() = 0;
//	virtual void Draw() = 0;
//};
//
////����Ķ������ʡ������Ϊ����һ�����麯����һ��Ҳ����д����
////void Shape::Draw()
////{
////	cout << "...";  //���д����дһЩ�����๫���Ĵ���
////}
//
//class Circle :public Shape
//{
//	//����Ҫ���Ǵӳ�����Shape�̳ж����Ĵ��麯��
//public:
//	Circle(int radius) :itsRadius(radius){}
//	virtual ~Circle(){}  //ֻҪ��������һ����Ա�������麯�����������������������麯��
//	double GetArea(){ return 3.14*itsRadius*itsRadius; }
//	double GetPerim(){ return 3 * 3.14*itsRadius; }
//	void Draw();
//private:
//	double itsRadius;
//};
//
//void Circle::Draw()
//{
//	cout << "Circle Drawing! " << endl;
//}
//
//class Rectangle :public Shape
//{
//public:
//	Rectangle(int len,int width) :itsWidth(width),itsLength(len){}
//	virtual ~Rectangle(){}
//	//��д�̳ж����Ĵ��麯��֮����Щ������Ȼ���麯���������������Ҫд���麯��
//	double GetArea(){ return itsLength*itsWidth; }
//	double GetPerim(){ return 2 * itsWidth + 2 * itsLength; }
//	virtual int GetLength(){ return itsLength; }
//	virtual int GetWidth(){ return itsWidth; }
//	void Draw();
//private:
//	int itsWidth;
//	int itsLength;
//};
//void Rectangle::Draw(){
//	for (int i = 0; i < itsLength; i++)
//	{
//		for (int j = 0; j < itsWidth; j++)
//		{
//			cout << "* ";
//		}
//		cout << endl;
//	}
//}
//
//class Square :public Rectangle
//{
//public:
//	Square(int len);
//	Square(int len, int width);
//	virtual ~Square(){}
//	double GetPerim(){ return 4 * GetLength(); }
//};
//Square::Square(int len) : Rectangle(len, len){}
//Square::Square(int len, int width) : Rectangle(len, width){
//	if (GetLength() != GetWidth())
//		cout << "Error,not a square" << endl;
//}
//
//int main(){
//
//	//Shape a;  //������ʵ����������
//	//Circle c(10); //�Ѿ���д�˼̳ж����ĳ����࣬��˿���ʵ������
//	//c.Draw();
//	//Rectangle r(5, 5);
//	//r.Draw();
//
//	//Square s(8);
//	//s.Draw();
//
//	int choice;
//	bool fQuit = false;
//	Shape *sp = NULL; //����ָ����Ҫ��ʼ����ָ�������new ���������󡣻����ָ�����ָ�����������ࡣ
//
//	while (fQuit==false)
//	{
//		cout << "1.Circle  2.Rectangle  3.Square  0.Quit: ";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			sp = new Circle(5);  //ָ�봴������
//			break;
//		case 2:
//			sp = new Rectangle(10, 20);
//			break;
//		case 3:
//			sp = new Square(8);
//			break;
//		case 0:
//			fQuit = true;
//			break;
//		}
//		if (fQuit==false)
//		{
//			sp->Draw();
//			delete sp;  //��new�����Ķ���һ��Ҫ��deleteɾ��
//			cout << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}

//�����������

//#include<iostream>
//using namespace std;
//
//enum COLOR{ wite, black, blue, yellow, red };
//
//class Animal{
//public:
//	Animal(int age) :itsAge(age){ cout << "Animal �Ĺ��캯�������á�����" << endl; }
//	virtual ~Animal(){ cout << "Animal ���������������á�����" << endl; }
//	virtual int GetAge(){ return itsAge; }
//	virtual void SetAge(int a){ itsAge = a; }
//	
//	virtual void Speak() const = 0;
//	virtual void Eat() const = 0;
//	virtual void Move() const = 0;
//
//private:
//	int itsAge;
//};
//
//class Fish :public Animal
//{
//public:
//	Fish(int a) :Animal(a){ cout << "Fish �Ĺ��캯�������á�����" << endl; }
//	virtual ~Fish(){ cout << "Fish ���������������á�����" << endl; }
//	virtual void Speak() const{ cout << "Fish speaking..." << endl; }
//	virtual void Eat() const{ cout << "Fish eating..." << endl; }
//	virtual void Move() const{ cout << "Fish swimming..." << endl; }
//};
//
//class Mammal :public Animal
//{
//public:
//	Mammal(int a, COLOR color) :Animal(a), itsColor(color){ cout << "Mammal �Ĺ��캯�������á�����" << endl; }
//	virtual ~Mammal(){ cout << "Mammal ���������������á�����" << endl; }
//	virtual void Speak() const{ cout << "Mammal speaking������" << endl; }
//private:
//	COLOR itsColor;
//};
//
//class Dog :public Mammal
//{
//public:
//	Dog(int age, COLOR color) :Mammal(age, color){ cout << "Dog �Ĺ��캯�������á�����" << endl; }
//	virtual ~Dog(){ cout << "Dog ���������������á�����" << endl; }
//
//	virtual void Speak() const { cout << "Dog speaking..." << endl; }
//	virtual void Eat() const{ cout << "Dog eating.." << endl; }
//	virtual void Move() const{ cout << "Dog running..." << endl; }
//};
//
//class Cat :public Mammal
//{
//public:
//	Cat(int age, COLOR color) :Mammal(age, color){ cout << "Cat �Ĺ��캯�������á�����" << endl; }
//	virtual ~Cat(){ cout << "Cat ���������������á�����" << endl; }
//	virtual void Eat() const {	cout << "Cat eating..." << endl;	}
//	virtual void Move() const{ cout << "Cat jumping..." << endl; }
//
//};
//
//
//int main(){
//	int choice;
//	Animal *a = NULL;
//	bool fQuit = true;
//	while (fQuit)
//	{
//		cout << "1.Fish   2.Dog   3.Cat   :";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			a = new Fish(1);
//			break;
//		case 2:
//			a = new Dog(2,black);
//			break;
//		case 3:
//			a = new Cat(4, wite);
//			break;
//		default:
//			fQuit = false;
//			break;
//		}
//		if (fQuit)
//		{
//			a->Speak();
//			a->Eat();
//			a->Move();
//			delete a;
//			cout << endl;
//		}
//	}
//	return 0;
//}

//ģ���뷺�ͱ��

//#include<iostream>
//#include<string>
//#include<iomanip>
//using namespace std;
//
//template<class T>  //��ģ�壬T�����κ�һ������
//class Queue
//{
//	struct Node
//	{
//		T a;
//		Node *next;
//	};
//public:
//	Queue();
//	void push(T b);
//	void pop();
//	int getlenth();
//	virtual void print();
//private:
//	Node *head;
//	Node *rear;
//};
//
//template<class T>  //����ҲҪд��ģ���������Ϊ���õ���ģ��
//void Queue<T>::push(T b)
//{
//	Node *p1 = new Node;
//	p1->a = b;
//	p1->next = NULL;
//	rear->next = p1;
//	rear = p1;
//	head->a++;
//	cout << setw(2) << b << setw(2) << "�������" << endl;
//}
//
//template<class T>  // ÿһ����ģ���еĳ�Ա����ǰ��Ҫд��
//void Queue<T>::pop()
//{
//	Node *p;
//	p = head->next;
//	cout << " " << setw(2) << p->a << setw(2) << "����" << endl;
//	head->next = p->next;
//	delete p;
//	head->a--;
//}
//template<class T>
//int Queue<T>::getlenth()
//{
//	return head->a;
//}
//
//template<class T>
//void Queue<T>::print()
//{
//	Node *p;
//	p = head->next;
//	cout << "�����е�Ԫ���ǣ� " << endl;
//	while (p)
//	{
//		cout << p->a << " -> ";
//		p = p->next;
//	}
//	cout << "Null" << endl;
//}
//
//template<class T>
//Queue<T>::Queue()
//{
//	rear = head = new Node();
//}
//
//int main(){
//
//	Queue<int> q; //ʹ����ģ���ʱ��Ҫ�ü�����ָ�����������
//	q.push(10);
//
//	Queue<double> d;  //�����ڱ�׼ģ������е� Vector��list����
//	d.push(2.3);
//
//	/*Queue<string> s;
//	s.push("abcede");*/
//
//	q.print();
//	d.print();
//	//s.print();
//
//	system("pause");
//	return 0;
//}

// ˳�����(���飩

//#include<iostream>
//#include"˳�����.h"
//
//using namespace std;
//
//int main()
//{
//	cout << "Test..." << endl;
//
//	Queue<char> q(4);
//	q.Push('A');
//	q.Push('B');
//	q.Push('C');
//	cout << q.Front() << "," << q.Rear() << endl;
//	q.Push('D');
//
//	cout << q.Front() << "," << q.Rear() << endl;
//	q.Push('E');
//	cout << q.Front() << "," << q.Rear() << endl;
//	q.Push('F');
//	cout << q.Front() << "," << q.Rear() << endl;
//	q.Pop();
//	q.Push('G');
//	cout << q.Front() << "," << q.Rear() << endl;
//	return 0;
//}

//��ʽ���У�����

//#include<iostream>
//#include"��ʽ����.h"
//using namespace std;
//
//int main(){
//	cout << "Test......" << endl;
//	Queue<int> myQ;
//	myQ.enQueue(10);
//	myQ.enQueue(20);
//	myQ.enQueue(30);
//	cout << myQ.getFront() << endl;
//	myQ.dequeue();
//	cout << myQ.getFront() << endl;
//
//	for (size_t i = 0; i < 8; i++)
//	{
//		for (size_t j = 0; j < 8; j++)
//		{
//			myQ.enQueue(j);
//		}
//		while (!myQ.isEmpty())
//			cout << myQ.dequeue() << endl;
//	}
//
//	
//	return 0;
//}

//����ģ��

//#include<iostream>
//#include<string>
//#include<fstream>
//#include<sstream>
//using namespace std;
//
//template<typename T>
//int compare(const T &v1, const T &v2)
//{
//	if (v1>v2)
//	{
//		return 1;
//	}
//	if (v1<v2)
//	{
//		return -1;
//	}
//	return 0;
//}
//
//template<class T>  //���е�class����û���κι�ϵ�����ܺ�typename һ���ġ�
//T isabl(const T &val)
//{
//	return val>0 ? val : -val;
//}
//
//template<typename T1,typename T2>
//T1& print(T1& s, T2 val)
//{
//	s << val;
//	return s;
//}
//
//template<class T>
//const T& bigger(const T& v1, const T& v2) //����ʱconst�����Ժ�����������ҲӦ����const
//{
//	return v1 > v2 ? v1 : v2;
//}
//
//int main(){
//
//	int result;
//
//	string oristr = "this is a test.";
//	string desstr;  
//	ostringstream oss(desstr); //�ַ�����
//	ofstream outFile("result.dat");  //�ļ�
//	//����������
//	print(cout, -1) << endl;
//	print(cout, 9.99) << endl;
//	print(cout, -0.05) << endl;
//	//������ļ�
//	print(outFile, -2) << endl;
//	print(outFile, -0.33) << endl;
//	print(outFile, "dfsdfa") << endl;
//	outFile.close(); //�ر��ļ�
//	//������ַ�����
//	print(oss, -3) << endl;
//	print(oss, -0.009) << endl;
//	print(oss, "sdf") << endl;
//	cout << oss.str() << endl;  //����ַ����� 
//
//
//	result=compare(1, 2);
//	cout <<"int:      "<< result << endl;
//	
//	result = compare(2.1, 2.0);
//	cout << "dobule:  "<< result << endl;
//
//	result = compare("abc", "def");
//	cout << "string:   " << result << endl;
//
//	double a = -9.1;
//	cout << isabl(a) << endl;
//
//	double v1 = 1.23;
//	double v2 = 3.45;
//	double v3 = 3;
//
//	cout << bigger(v1,v2) << endl;
//	cout << bigger(v2, v3) << endl;
//
//
//	system("pause");
//	return 0;
//}

//�쳣

//#include<iostream>
//
//using namespace std;
//
//int my_cp(const char *src_file, const char* dest_file){
//	FILE *in_file, *out_file;
//	in_file = fopen(src_file, "rb");// �����Ʒ�ʽ��ȡ�ļ�
//	if (in_file==NULL)  //��ͳ�ķ�����������������ˣ��͸�һ������ķ���ֵ
//	{
//		return 1;
//	}
//	out_file = fopen(dest_file, "wb");  //д���ļ�
//	if (out_file==NULL)
//	{
//		return 2;
//	}
//	char rec[256]; //���棬һ�����256���ֽ�
//	size_t bytes_in, bytes_out;
//	while ((bytes_in = fread(rec, 1, 256, in_file)) > 0) //ʵ�ʶ�ȡ���ֽ���
//	{
//		bytes_out = fwrite(rec, 1, bytes_in, out_file);
//		if (bytes_in != bytes_out)  //�鿴��ȡ��д����ֽ����ǲ���һ���������һ�������������һ������ֵ
//		{
//			return 3;
//		}
//	}
//}
//
////�׳�����
//void my_cp2(const char *src_file, const char* dest_file){
//	FILE *in_file, *out_file;
//	in_file = fopen(src_file, "rb");// �����Ʒ�ʽ��ȡ�ļ�
//	if (in_file == NULL)  //��ͳ�ķ�����������������ˣ��͸�һ������ķ���ֵ
//	{
//		//return 1;
//		throw 2; //throw�����׳��쳣�����������֣��ַ����������
//	}
//	out_file = fopen(dest_file, "wb");  //д���ļ�
//	if (out_file == NULL)
//	{
//		//return 2;
//		throw 2; //throw�����׳��쳣�����������֣��ַ����������
//	}
//	char rec[256]; //���棬һ�����256���ֽ�
//	size_t bytes_in, bytes_out;
//	while ((bytes_in = fread(rec, 1, 256, in_file)) > 0) //ʵ�ʶ�ȡ���ֽ���
//	{
//		bytes_out = fwrite(rec, 1, bytes_in, out_file);
//		if (bytes_in != bytes_out)  //�鿴��ȡ��д����ֽ����ǲ���һ���������һ�������������һ������ֵ
//		{
//			//return 3;
//			throw 3; //throw�����׳��쳣�����������֣��ַ����������
//		}
//	}
//}
//
////�׳��ַ���
//void my_cp3(const char *src_file, const char* dest_file){
//	FILE *in_file, *out_file;
//	in_file = fopen(src_file, "rb");// �����Ʒ�ʽ��ȡ�ļ�
//	if (in_file == NULL)  //��ͳ�ķ�����������������ˣ��͸�һ������ķ���ֵ
//	{
//		//return 1;
//		//throw 2; //throw�����׳��쳣�����������֣��ַ����������
//		throw "��Դ�ļ�����";
//	}
//	out_file = fopen(dest_file, "wb");  //д���ļ�
//	if (out_file == NULL)
//	{
//		//return 2;
//		//throw 2; //throw�����׳��쳣�����������֣��ַ����������
//		throw "��Ŀ���ļ�����";
//	}
//	char rec[256]; //���棬һ�����256���ֽ�
//	size_t bytes_in, bytes_out;
//	while ((bytes_in = fread(rec, 1, 256, in_file)) > 0) //ʵ�ʶ�ȡ���ֽ���
//	{
//		bytes_out = fwrite(rec, 1, bytes_in, out_file);
//		if (bytes_in != bytes_out)  //�鿴��ȡ��д����ֽ����ǲ���һ���������һ�������������һ������ֵ
//		{
//			//return 3;
//			//throw 3; //throw�����׳��쳣�����������֣��ַ����������
//			throw "�����ļ�ʱ����";
//		}
//	}
//}
//
////Ҫ�׳�����
//class BadScrFiel{};
//class BadDestFile{};
//class BadCopy{};
//
////�׳�����
//void my_cp3(const char *src_file, const char* dest_file){
//	FILE *in_file, *out_file;
//	in_file = fopen(src_file, "rb");// �����Ʒ�ʽ��ȡ�ļ�
//	if (in_file == NULL)  //��ͳ�ķ�����������������ˣ��͸�һ������ķ���ֵ
//	{
//		//return 1;
//		//throw 2; //throw�����׳��쳣�����������֣��ַ����������
//		//throw "��Դ�ļ�����";  //�׳��ַ���
//		throw BadScrFiel();  //�׳��������ù��캯����������
//	}
//	out_file = fopen(dest_file, "wb");  //д���ļ�
//	if (out_file == NULL)
//	{
//		//return 2;
//		//throw 2; //throw�����׳��쳣�����������֣��ַ����������
//		//throw "��Ŀ���ļ�����";
//		throw BadDestFile();  //�׳�����
//	}
//	char rec[256]; //���棬һ�����256���ֽ�
//	size_t bytes_in, bytes_out;
//	while ((bytes_in = fread(rec, 1, 256, in_file)) > 0) //ʵ�ʶ�ȡ���ֽ���
//	{
//		bytes_out = fwrite(rec, 1, bytes_in, out_file);
//		if (bytes_in != bytes_out)  //�鿴��ȡ��д����ֽ����ǲ���һ���������һ�������������һ������ֵ
//		{
//			//return 3;
//			//throw 3; //throw�����׳��쳣�����������֣��ַ����������
//			//throw "�����ļ�ʱ����";
//			throw BadCopy(); //�׳�����
//		}
//	}
//}
//
//
//int main(){
//
//	cout << "test..." << endl;
//
//	int result;
//	if ((result = my_cp("1.txt","2.txt")) != 0)
//	{
//		switch (result)
//		{
//
//		case 1:
//			printf("��Դ�ļ�����\n");
//			break;
//		case 2:
//			printf("��Ŀ���ļ�����\n");
//			break;
//		case 3:
//			printf("�����ļ�ʱ����\n");
//			break; 
//		default:
//			printf("����δ֪����\n");
//			break;
//		}
//	}
//
//	try{
//		my_cp2("1.txt", "2.txt");  //�п��ܳ���Ĵ��붼���������������쳣���ͻ���ת��catch��������������
//		my_cp3("1.txt", "2.txt");  //�п��ܳ���Ĵ��붼���������������쳣���ͻ���ת��catch��������������
//	}
//
//	//catch�����Ⱥ�˳��ģ���ִ����һ��catch��������򲻲�������
//	catch(int e)  //���������쳣   
//	{
//		printf("�����쳣������",e);
//	}
//	catch (const char * e)  //�����ַ����쳣
//	{
//		printf("�����쳣������", e);
//	}
//	//�����׳��Ķ������
//	catch (BadScrFiel e) 
//	{
//		printf("�����쳣����Դ�ļ�ʱ����\n");
//	}
//	catch (BadDestFile e)
//	{
//		printf("�����쳣����Ŀ���ļ�ʱ����\n");
//	}
//	catch (BadCopy e)
//	{
//		printf("�����쳣������ʱ����\n");
//	}
//	catch (...) //ץס�����쳣
//	{
//		printf("����δ֪�쳣\n");
//	}
//	printf("OK!\n");
//	system("pause");
//	return 0;
//}

//�쳣��

//#include<iostream>
//using namespace std;
//const int DefaultSize = 10;
//
//class Array  //ʵ�ֶ�̬���鹦��
//{
//public:
//	Array(int itsSize = DefaultSize);
//	~Array(){ delete[] pType; }   //һ���ָ�붼�ڹ��캯�������new��Ȼ��������������delete
//
//	//���������
//	int &operator[](int offSet);  //�±����������
//	const int &operator[](int offSet) const;  //�±������һ�㶼��������һ����������һ���ǳ�����
//
//
//	//��������accessors
//	int GetitsSize() const { return itsSize; }
//
//	//�쳣��
//	class xBoundary{};
//	class xSize{
//	public:
//		xSize(){}
//		xSize(int size) :itsSize(size){}
//		~xSize(){}
//		int getSize(){ return itsSize; }
//
//		virtual void printErr(){
//			cout << "�±귢���쳣����" <<itsSize<< endl;
//		}
//	protected:
//		int itsSize;
//	};
//	class xTooSmall :public xSize{
//	public:
//		xTooSmall(int size) :xSize(size){}
//		virtual void printErr(){
//			cout << "�±�̫С��" << xSize::itsSize << endl;
//		}
//	};
//	class xTooBig :public xSize{
//	public:
//		xTooBig(int size) :xSize(size){}
//		virtual void printErr(){
//			cout << "�±�̫��" << xSize::itsSize << endl;
//		}
//	};
//private:
//	int *pType; // ָ�뱣������
//	int itsSize;
//};
//
//int& Array::operator[](int offSet)   //�ǳ��������±���������أ�����д
//{
//	int size = this->GetitsSize();
//	if (offSet >= 0 && offSet < size) //�ж��ǲ��ǺϷ����±귶Χ
//		return pType[offSet];
//	else
//		throw xBoundary(); //�׳��쳣
//}
//const int& Array::operator[](int offSet) const  //���������±����������,������
//{
//	int size = this->GetitsSize();
//	if (offSet >= 0 && offSet < size) //�ж��ǲ��ǺϷ����±귶Χ
//		return pType[offSet];
//	else
//		throw xBoundary(); //�׳��쳣
//}
//
//Array::Array(int size) :itsSize(size)
//{
//	if (size < 10)
//		throw  xTooSmall(size);
//	else if (size>1000)
//		throw xTooBig(size);
//
//	pType = new int[size];
//	for (int i = 0; i < size; i++)
//	{
//		pType[i] = 0;
//	}
//}
//int main(){
//	try{
//		//Array arr1;  // ����������ʹ�ö���ʱ�����Ĭ��ֵ
//		//Array arr2(12);
//		//Array intArray(20);
//		//arr2[5] = 90;
//		//arr2[40] = 90;
//
//		Array intArray(5);
//		//for (int j = 0; j < 100; j++)
//		//{
//		//	intArray[j] = j;
//		//	cout << "intArray[" << j << "] okay..." << endl;  //�������쳣��
//		//}
//	}
//	catch (Array::xBoundary)
//	{
//		cout << "�±�Խ���ˡ�����" << endl;
//	}
//	catch (Array::xSize& theExp)  //һ��Ҫ�����û���ָ�������ݶ���
//	{
//		theExp.printErr();
//	}
//	//ʹ���麯�����̳й�ϵ��Ȼ��Ϳ��Լ�catch��д����ʹ�ö�̬����ɶ��catch�Ĳ������ϣ�
//	//catch (Array::xTooBig theExp)
//	//{
//	//	cout << "�±겻��̫��" << theExp.getSize() << endl;
//	//}
//	//catch (Array::xTooSmall theExp)
//	//{
//	//	cout << "�±겻��̫С��" << theExp.getSize() << endl;
//	//}
//	catch (...)
//	{
//		cout << "����δ֪���󡣡���" << endl;
//	}
//	cout << "Done" << endl;
//
//	cout << "test..." << endl;
//	return 0;
//}

//��׼�쳣��

//#include<iostream>
//#include<new>
//
//using namespace std;
//
//class Dog{
//public:
//	Dog(){
//		parr = new int[1000000];  //4MB
//	}
//private:
//	int *parr;
//};
//
//int main(){
//	Dog *pdog;
//	try{
//		for (int i = 1; i < 1000; i++)
//		{
//			pdog = new Dog();
//			cout << i << ": new dog �ɹ���" << endl;
//		}
//	}
//	catch (bad_alloc err){
//		cout << "new dog ʧ��: " << err.what() << endl;
//	}
//	return 0;
//}

///C++��׼����쳣

//#include<iostream>
//#include<exception>
//#include<bitset>
//#include<string>
//#include<stdexcept>
//using namespace std;
//
//int main(){
//	try{
//		string s("10h1101");  //������г���1��0 �⻹�б���ַ��������ַǷ����ַ��쳣
//		bitset<10> b(s);
//		cout << "bitset ok." << endl;
//	}
//	catch (invalid_argument err){
//		cout << "bitset error: " << err.what() << endl;
//	}
//}

///�Լ���д�쳣��

//#include<iostream>
//#include<stdexcept>
//using namespace std;
//
//class student
//{
//public:
//	student(int age){
//		if (age<0 || age>150)
//			throw out_of_range("The age can not be small than 0 or bigger than 150!!");
//		this->m_age = age;
//	}
//private:
//	int m_age;
//};
//
//int main(){
//	try{
//		student Zhang(500);
//		cout << "The age of student is right!" << endl;
//	} 
//	catch (out_of_range err)
//	{
//		cout << "The age of student is wrong: " << err.what() << endl;
//	}
//	return 0;
//}

//�Լ�д�쳣�࣬�̳б�׼�쳣��

//#include<iostream>
//#include"Stack.h"
//
//using namespace std;
//
//int main(){
//	try{
//		Stack<int> st;
//		st.push(1);
//		st.push(2);
//		st.push(3);
//
//		cout << st.top() << endl;
//		cout << st.pop() << endl;
//		cout << st.pop() << endl;
//		cout << st.top() << endl;
//		cout << st.pop() << endl;
//		cout << st.pop() << endl;
//	}
//	catch (const exception& e)
//	{
//		cerr << "�����쳣��" << e.what() << endl;
//	}
//	cout << "Hello Stack." << endl;
//	return 0;
//}


//����ָ��

//#include<iostream>
//#include<memory>
//#include"smart_point.h"
//using namespace std;
//
//class Dog{
//
//};
//
////ʹ��C++д�õ�����ָ������ֹ�ڴ�й©
//void demo2(){
//	auto_ptr<double> pd(new double);  //ʹ������ָ�룬�ں�������ǰ����дdelete��auto_ptr��ͷ�ļ�#include<memory> ����
//	*pd = 28.5;
//	cout << *pd << endl;  
//	auto_ptr<Dog> pDog(new Dog()); //Ҳ��������������
//	smart_pointer<Dog> spDog(new Dog());  //�Լ���������ָ��
//}
//
//
//void demo1(){
//	double d;
//	d = 23.4;
//
//	double *pd = new double;  //�Ӷ��Ͻ����ڴ���䣬Ȼ�󸳸�ָ��pd
//	*pd = 11.1;
//	
//	cout << d << endl;
//	cout << *pd << endl;
//
//	//����֮ǰ������ʹ��deleteɾ��ָ�룬��������ڴ�й©
//	delete pd;  //ɾ��pd��ָ����ڴ�����ջ�
//
//	return;  //���������ص�ʱ��d�������ˣ�d��ֵ23.4Ҳ��û����
//}
//
//int main(){
//	demo1();
//	demo2();
//	return 0;
//}


// �����ռ�

//#include<iostream>
//
////��ͷ�ļ��в�Ҫʹ�����µķ���  using��Ҫ��ʹ�õ�ʱ��ֱ��ֻ�� std::~ �ķ���
//using namespace std;  //����Ὣstd�����е����ƶ��������
//using std::cout;  //�������ʲôдʲô
//using std::endl; 
//
//namespace MyApp  //���ƿռ��п���д�������������඼����
//{
//	void processTrans(){
//
//	}
//}
//
//namespace MyApp  //�����ж��������ͬ�����ƿռ䣬���໥��ͻ�����е�����������ͬ
//{  
//	namespace test //���ƿռ����Ƕ�׵�
//	{
//
//	}
//}
//
//class ant //û�����κ����ƿռ��е����ƣ�����ֱ��ʹ�á� ::ant ����ʹ��
//{
//
//};
//
//
//namespace bs = MyApp;  //����ʹ��bs������������� MyApp���Լ򻯴���
//int main(){
//	using namespace MyApp;  //�����Լ�����������ռ�
//	processTrans();  //��using���Ժ�ֱ��ʹ�á���ʹ�����з�ʽ
//	MyApp::processTrans;  //ֱ��ͨ��::�����Լ�����������ռ�
//
//	return 0;
//}

///��̳�

//#include<iostream>
//using namespace std;
//
//enum COLOR{ Red, Blue, Green, Black, White};
//
//class Animal   //�����
//{
//public:
//	Animal(int);
//	virtual ~Animal(){ cout << "Animal �������������á�����" << endl; }
//	virtual int GetAge(){ return itsAge; }
//	virtual void SetAge(int age){ itsAge = age; }
//private:
//	int itsAge;
//};
//Animal::Animal(int age) :itsAge(age)
//{
//	cout << "Animal�Ĺ��캯�������á�����" << endl;
//}
//
////�п��ܱ��̳е����еĺ���Ӧ�������麯��
//class Horse:virtual	public Animal  //Horse��̳�Animal
//{
//public:
//	Horse(int age, COLOR color, int height);
//	virtual ~Horse(){ cout << "Horse ���������������á�����" << endl; }
//	virtual void Whinny() const { cout << "Whinny...." << endl; }
//	virtual int GetHeight() const { return itsHeight; }
//	virtual COLOR GetColor() const { return itsColor; }
//private:
//	int itsHeight;
//	COLOR itsColor;
//};
//Horse::Horse(int age,COLOR color, int height) :Animal(age),itsColor(color),itsHeight(height)
//{
//	cout << "Horse �Ĺ��캯�������á�����" << endl;
//} 
//
//class Bird:virtual public Animal //BirdҲ����̳�Animal
//{
//public:
//	Bird(int age, COLOR color,bool migrates);
//	virtual ~Bird(){ cout << "Bird ���������������á�����" << endl;	}
//	virtual void Chrip() const { cout << "Chirp..." << endl; } //���
//	virtual void Fly() const { cout << "I can fly..." << endl; }
//	virtual bool GetMigration() const { return itsMigration; }
//	virtual COLOR GetColor() const{ return itsColor; }
//private:
//	bool itsMigration; //���Ƿ�Ǩ��
//	COLOR itsColor;
//};
//Bird::Bird(int age, COLOR color,bool migrates) :Animal(age),itsColor(color),itsMigration(migrates)
//{ 
//	cout << "Bird �Ĺ��캯�������á�����" << endl;
//}
//
//class Pegasus /*��ɵ���*/ : public Horse, public Bird
//{
//public:
//	Pegasus(int, COLOR,int, bool, long);
//	~Pegasus(){ cout << "Pegasus ���������������á�����" << endl; }
//	void Chrip() const { Whinny(); }
//	virtual long GetNumberBelievers() const{ return itsNumberBelievers; }
//private:
//	long itsNumberBelievers;
//};
//
//
//Pegasus::Pegasus(int age,COLOR c, int h, bool m, long n ) :Horse(age,c, h), Bird(age,c, m), itsNumberBelievers(n), Animal(age) //���캯��������ʱҪ�����м̳еĻ��඼�����
//{
//	cout << "Pegasus �Ĺ��캯�������á�����" << endl;
//}
//
//int main(){
//	Pegasus *pPeg = new Pegasus(2, Blue,5, true, 10);
//	pPeg->Fly();
//	pPeg->Whinny();
//	pPeg->Chrip();
//
//	COLOR c = pPeg->Bird::GetColor(); //���Խ��һ�����������
//	COLOR c1 = pPeg->Horse::GetColor();  
//
//	//int age = pPeg->GetAge();  //Pegasus��Bird��Horse�ж��̳��˴�����е�GetAge()����ô�ͻ���ֶ����ԣ�����ʹ�����������
//	int age = pPeg->GetAge();  //��ʹ������̳��Ժ󣬾ͱ����˲���������
//
//	cout << "�� " << pPeg->GetNumberBelievers() << " ������������ "<<pPeg->Bird::GetColor()<<" ��ɫ�ķ�������" << endl;
//
//	delete pPeg;  //delete�����ʱ�򣬾͵�������������
//	system("pause");
//	return 0;
//}


//���һ�ڣ����⹤���뼼��

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Item_base
//{
//public:
//	virtual double net_price(size_t n) const
//	{
//		class Cat{ };  //�ֲ��࣬�����ڴ˺���֮��ʹ��
//
//		return n*price;
//	}
//	class Dog{};   //Ƕ����
//public:
//	string isbn;
//protected:
//	double price;
//};
//class Bulk_item :public Item_base
//{
//public:
//	double net_price(size_t cnt) const
//	{
//		if (cnt > min_qty)
//		{
//			return cnt*(1 - discount)*price;
//		}
//		else
//			return cnt*price;
//	}
//private:
//	size_t min_qty;
//	double discount;
//};
//
//union TokenValue //���ϣ���������)��union��ֻ������double�İ˸��ֽ�
//{
//	char cval;    //char��һ���ֽ�    ռ��union�е�һ���ֽ�
//	int ival;     //int���ĸ��ֽ�     ռ��union�е�1~4���ֽ�
//	double dval;  //double�ǰ˸��ֽ�  ռ��union�������Լ�
//};
//
////λ��һ��ʹ���޷��ŵ���������
//typedef unsigned int Bit;
//class File{
//public:
//	Bit mode : 2; //��32λBit�е���λ�� mode
//	Bit modified : 1;
//	Bit prot_owner : 3;
//	Bit prot_group : 3;
//	Bit prot_word : 3;
//};
//
//enum { READ = 01, WRITE = 02 };
//
//int main(){
//
//	File myFile;
//	myFile.mode = WRITE;  //ʹ��λ��
//
//	int x;
//	volatile int y;  //��ʧ�ģ�����C++����Ҫ��������������Ż�
//
//
//	TokenValue myToken = { 'a' };  //ռ����union�е�һ���ַ�
//	cout << myToken.ival << endl;  // ��ȡint���ǣ���Ϊ��һ���ַ��ǡ�a' ���ԣ���������97
//
//	Item_base *pItem = new Item_base();  //������new�������ڴ棬��������
//
//	allocator<Item_base> a;  //ʹ��allocator�����ڴ棬����ָ���ڴ��С�������Լ������ڴ�
//	a.allocate(100);
//
//	Item_base *bp = new Item_base();
//	Bulk_item *dp = new Bulk_item();
//
//	Item_base *bp2 = dp;  //���������ת��Ϊ�����������ת��
//	Bulk_item *dp2 = dynamic_cast<Bulk_item*>(bp);//ʹ�ö�̬����ת����������RTTI���ѻ������ת������������
//	if (typeid(Bulk_item) == typeid(*dp))  //ʹ��typeid�������
//		cout << "Bulk_item ����" << endl;
//	cout << typeid(*bp).name() << endl;  ///typeid����ֵΪtypeinform���᷵������
//	cout << typeid(*dp).name() << endl;
//
//	string Item_base::*p = &Item_base::isbn; //pָ��ָ�������Item_base���ַ�����Ա 
//	double(Item_base::* pmf)(size_t) const = &Item_base::net_price;  //ָ��Item_base��ĺ�����ָ�� pmf
//
//	Item_base::Dog dog;  //Ƕ����Dog�Ķ�����
//
//	system("pause");
//	return 0;
//}