#include <stdio.h>

struct pointer1
{
	int Snum;
	char Name[3] = { '0','0','0' };
};										/*����һ�֡��������͡���ĩβ��Ҫ��'��'(�ֺ�)*/
struct pointer2
{
	int Snum;
	char Name[3] = { '0','0','0' };
	int other;
}p1, p2;
struct									/*�����������͵����ָ�ʽ(����)*/
{
	int Snum;
	char Name[3] = { '0','0','0' };
} p3, p4;									/*1��:�����������͵����֣�2��:�����������ͺͱ��������֣�3��:ֻ������������*/


int main()
{
	struct pointer1 sixth, * S;				/*����һ��������(struct pointer)�ı���*/
	struct pointer1 Sixth[49];

	p3 = { 19070406,{'c','j','l'} };						/*����һ���ṹ���������ýṹ��������ֵ����1*/
	//p4 = { .Snum = 19070406,.Name[] = {0,0,0} };				/*����һ���ṹ���������ýṹ��������ֵ����2*/

	//*S->sixth;	/*��������*/
	sixth.Snum = 19070406;						/*���ṹ������ĳһ����Ա������ֵ*/
	for (int i = 0; i < 3; i++)
	{
		sixth.Name[i] = { 'c' };				/*���ýṹ�����е�����ĳһ�±긳ֵ��ʽ*/
	}
	printf("%i\n", sixth.Snum);

	//*sixth.Name = &{ 'c','j','l' };
	//printf("%c%c%c",*sixth.Name );					/**/


	return 0;
}
int student(struct pointer1 one)			/*�ں����е�������������ͱ��������г�Աֵ*/
{
	one.Snum;
	return 0;
}