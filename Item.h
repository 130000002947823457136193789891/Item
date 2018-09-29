#include <istream>


typedef int DataType;
class Item
{
public:
	DataType data;
	Item *next;
	Item(){next=NULL;}
};
class Link
{
public:
	Item *head;                               //����ͷָ��
	Link (){head=NULL;}                       //���캯��
	~Link(){DeleteAll();}
	void Initiate();
	void DeleteAll();
	void HeadCreate(int n);                   //��ͷ������
	void TailCreate(int n);                   //��β������
	void HeadCreateWithHead(int n);           //��������ͷ��������ͷ��
    void TailCreateWithHead(int n);            //��������ͷ��������β��
	int Length();
	Item *Locatex(DataType x);             //����ֵΪx������Ԫ��
	Item *Locate(int i);                    //���ҵ�i��Ԫ��
	DataType Get(int i);
	bool Insert (DataType x,int i);         //�������i�����֮ǰ����x
	bool Deleted(int i);                    //ɾ�������е�i�����
	void Print();
};