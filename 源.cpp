#include <stdio.h>

struct pointer1
{
	int Snum;
	char Name[3] = { '0','0','0' };
};										/*声明一种“变量类型”在末尾需要打'；'(分号)*/
struct pointer2
{
	int Snum;
	char Name[3] = { '0','0','0' };
	int other;
}p1, p2;
struct									/*声明变量类型的三种格式(见下)*/
{
	int Snum;
	char Name[3] = { '0','0','0' };
} p3, p4;									/*1）:给定变量类型的名字；2）:给定变量类型和变量的名字；3）:只给定变量名字*/


int main()
{
	struct pointer1 sixth, * S;				/*定义一个该类型(struct pointer)的变量*/
	struct pointer1 Sixth[49];

	p3 = { 19070406,{'c','j','l'} };						/*定义一个结构变量并给该结构变量赋初值方法1*/
	//p4 = { .Snum = 19070406,.Name[] = {0,0,0} };				/*定义一个结构变量并给该结构变量赋初值方法2*/

	//*S->sixth;	/*存在疑问*/
	sixth.Snum = 19070406;						/*给结构变量的某一个成员变量赋值*/
	for (int i = 0; i < 3; i++)
	{
		sixth.Name[i] = { 'c' };				/*给该结构变量中的数组某一下标赋值方式*/
	}
	printf("%i\n", sixth.Snum);

	//*sixth.Name = &{ 'c','j','l' };
	//printf("%c%c%c",*sixth.Name );					/**/


	return 0;
}
int student(struct pointer1 one)			/*在函数中调用这个变量类型变量的所有成员值*/
{
	one.Snum;
	return 0;
}