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
	cout << "��ӭʹ����κ��������������������" << endl << "�ó������н���Ȩ����κ���";
	cout << endl << "--------------------------------" << endl;
	while(true)
	{
		
		memset(re, 0, sizeof(0));
		cout << "��ѡ���������ȡ����ʽ��" << endl << "����\"1\"��Ϊ����ģʽ����[1-57]�ķ�Χ�������" << endl << "����\"2\"��Ϊ����ģʽ���Զ����䣩" << endl;
		int j;
		cin >> j;
		switch (j)
		{
		case 1:
		{
			cout << "����������Ҫ���������������" << endl;
			int p;
			cin >> p;
			if (p > 57)
			{
				cout << "�Ƿ������������ԣ�" << endl;
				break;
			}
			cout << "�����ɵ��������:" << endl;
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
			cout << "��������������" << endl << "��������:����22 55��������[22,55]���������" << endl;
			int a, b;
			cin >> a >> b;
			cout << "����������Ҫ���������������" << endl;
			int p;
			cin >> p;
			if (p > b-a+1)
			{
				cout << "�Ƿ������������ԣ�" << endl;
				break;
			}
			cout << "�����ɵ��������:" << endl;
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
		cout << endl << "����ȡ��������1���˳�����������0" << endl;
		bool es;
		cin >> es;
		if (es);
		else
			break;
	}
	return 0;
}