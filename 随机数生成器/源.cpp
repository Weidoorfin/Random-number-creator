#include<cstdalign>
#include<iostream>
using namespace std;
int re[1000005];
int ra(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}
int main()
{
	cout << "欢迎使用由魏多芬制作的随机数生成器" << endl << "该程序所有解释权属于魏多芬";
	cout << endl << "--------------------------------" << endl;
	while(true)
	{
		
		memset(re, 0, sizeof(0));
		cout << "请选择您的随机取数方式：" << endl << "输入\"1\"即为经典模式（在[1-57]的范围内随机）" << endl << "输入\"2\"即为自由模式（自定区间）" << endl;
		int j;
		cin >> j;
		switch (j)
		{
		case 1:
		{
			cout << "请输入您需要的随机数的数量：" << endl;
			int p;
			cin >> p;
			if (p > 57)
			{
				cout << "非法操作！请重试！" << endl;
				break;
			}
			cout << "您生成的随机数是:" << endl;
			for (int i = 0; i < p; i++)
			{
				re[i] = ra(1, 57);
				for (int j = 0; j < i; j++)
				{
					if (re[i] == re[j])
					{
						re[i] = ra(1, 57);
						j = 0;
					}
				}					
				cout << re[i] << " ";
			}
			break;
		}
		case 2:
		{
			cout << "请输入您的区间" << endl << "输入样例:输入22 55即代表在[22,55]区间内随机" << endl;
			int a, b;
			cin >> a >> b;
			cout << "请输入您需要的随机数的数量：" << endl;
			int p;
			cin >> p;
			if (p > b-a+1)
			{
				cout << "非法操作！请重试！" << endl;
				break;
			}
			cout << "您生成的随机数是:" << endl;
			for (int i = 0; i < p; i++)
			{
				re[i] = ra(a, b);
				for (int j = 0; j < i; j++)
				{
					if (re[i] == re[j])
					{
						re[i] = ra(a, b);
						j = 0;
					}
				}
				cout << re[i] << " ";
			}
			break;
		}
		default:
			break;
		}
		cout << endl << "继续取数请输入1，退出程序请输入0" << endl;
		bool es;
		cin >> es;
		if (es);
		else
			break;
	}
	return 0;
}