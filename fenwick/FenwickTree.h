#pragma once
class fenwick
{
private:
	int n; // size
	int *f; //fenwick tree

public:
	fenwick()
	{
		n = 0;
	}
	fenwick(int size)
	{
		if (size <= 0)
			return;
		this->~fenwick();
		n = size;
		f = new int[n];
		for (int i = 0; i < n; i++)
			f[i] = 0;
	}
	fenwick(int *array, int size)
	{
		if (size <= 0)
			return;
		n = size;
		f = new int[n];
		for (int i = 0; i < n; i++)
			f[i] = 0;
		for (int i = 0; i < n; i++)
			add(i, array[i]);
	}
	~fenwick()
	{
		delete[] f;
	}
	//сумма элементов от 0 до right
	int sum(int right)
	{
		if (right > n || right < 0 || n == 0)
			return 0;
		int result = 0;
		for (; right >= 0; right = (right & (right + 1)) - 1)
			result += f[right];
		return result;
	}
	//сумма элементов от left до right
	int sum(int left, int right)
	{
		return sum(right) - (left == 0 ? 0 : sum(left - 1));
	}
	//сумма всех элементов
	int sum()
	{
		return sum(n - 1);
	}
	//увеличение fenwick[index] на value
	void add(int index, int value)
	{
		if (index > n || index < 0 || n == 0)
			return;
		for (; index < n; index |= index + 1)
			f[index] += value;
	}
	//увеличение fenwick[index] на value в диапозоне от left до right
	void add(int left, int right, int value)
	{
		if (left < 0 || left > right || right > n || n == 0)
			return;
		for (; left <= right; left++)
			add(left, value);
	}
	//получение значение элемента
	int getValue(int index)
	{
		return index > n || index < 0 || n == 0 ? 0 : sum(index, index);
	}
	//получение fenwick[index]
	int getTreeValue(int index)
	{
		return index > n || index < 0 || n == 0 ? 0 : f[index];
	}
	//получение размера
	int getSize()
	{
		return n;
	}
	//получение дерева
	int* getTree()
	{
		return f;
	}
	//инициализация дерева
	void create(int size) {
		if (size <= 0)
			return;
		this->~fenwick();
		n = size;
		f = new int[n];
		for (int i = 0; i < n; i++)
			f[i] = 0;
	}
};