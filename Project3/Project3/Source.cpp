#include <stdio.h>


int main()
{
	char d[1001];
	char w[1001];
	char t[1001];
	char r[2002];
	int flag = 1;
	int i = 0, k = 0, j = 0;

	//���������� d[]
	while ((d[i] = getchar()) != '*')i++;
	getchar();//����������� Enter


	//���������� w[]
	while ((w[k] = getchar()) != '\n')k++;
	w[k] = ' ';
	k = 0;

	//���������� t[]
	while ((t[k] = getchar()) != '\n')k++;
	t[k] = ' ';


	//��������� ���������(������������� �����������)
	i = j = k = 0;

	//���� ���� =1 ��������� ���
	while (flag == 1)
	{

		r[j] = d[i];
		j++;
		i++;


		//����������� ��������� ����� � ������ �������
		if (r[j - 1] == w[k])
		{
			//����� ������������ ��������
			if (w[k] == ' ')
			{
				flag = 0;
			}
			else
			{
				k++;
			}
		}
		else
		{
			while (r[j - 1] != ' ')
			{
				r[j] = d[i];
				j++;
				i++;
			}
			k = 0;
		}
	}

	k = 0;

	//������� ����� t
	while ((r[j] = t[k]) != ' ')
	{
		j++;
		k++;
	}
	j++;
	k++;

	//����� �� d
	while ((r[j] = d[i]) != '*')
	{
		j++;
		i++;
	}


	//����� ������
	j = 0;
	while (r[j] != '*')
	{
		putchar(r[j]);
		j++;
	}
	putchar('*');

	return 0;
}