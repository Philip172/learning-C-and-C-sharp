#include <stdio.h>


int main()
{
	char d[1001];
	char w[1001];
	char t[1001];
	char r[2002];
	int flag = 1;
	int i = 0, k = 0, j = 0;

	//заполнение d[]
	while ((d[i] = getchar()) != '*')i++;
	getchar();//уничтожение Enter


	//заполнение w[]
	while ((w[k] = getchar()) != '\n')k++;
	w[k] = ' ';
	k = 0;

	//заполнение t[]
	while ((t[k] = getchar()) != '\n')k++;
	t[k] = ' ';


	//обнуление счётчиков(множественное присваивние)
	i = j = k = 0;

	//если флаг =1 выполняем код
	while (flag == 1)
	{

		r[j] = d[i];
		j++;
		i++;


		//побуквенное сравнение слова с частью массива
		if (r[j - 1] == w[k])
		{
			//слово оканчивается пробелом
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

	//вставка слова t
	while ((r[j] = t[k]) != ' ')
	{
		j++;
		k++;
	}
	j++;
	k++;

	//хвост из d
	while ((r[j] = d[i]) != '*')
	{
		j++;
		i++;
	}


	//вывод ответа
	j = 0;
	while (r[j] != '*')
	{
		putchar(r[j]);
		j++;
	}
	putchar('*');

	return 0;
}