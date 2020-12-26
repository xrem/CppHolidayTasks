#include <iostream>
// ���������� ����������� ������ � �������.
#include <fstream>
#include <string>
#include <vector>
// ���������� ������ ��� �����.
#include <sstream>

int f(int n)
{
	if (n <= 2)
	{
		return n;
	} else if (n % 2 == 0)
	{
		return n - 1 + f(n / 2);
	} else
	{
		return n + f(n / 3);
	}
}

// ������� 20.
void main()
{
	// ������� 16-�� ������.
	std::cout << f(44) << std::endl;

	// ������� 17-�� ������.
	for (int i = 1903; i <= 9310; i++)
	{
		if (i % 11 == 0 && i % 23 != 0)
		{
			std::cout << i << std::endl;
			break;
		}
	}

	// ��������� 18-�� ������.
	unsigned int data[15][15];
	std::ifstream input_data;
	input_data.open("C:\\Users\\XAdmin\\Downloads\\inf_2021\\18\\20.in.txt");
	for (int row = 0; row < 15; row++)
	{
		for (int num = 0; num < 15; num++)
		{
			input_data >> data[row][num];
		}
	}
	input_data.close();

	std::vector<unsigned int> results;
	// 28 ������� (14 = 0, 14 = 1), ��� 1 - �������� ����, ��� 0 - �������� ������
	for (unsigned int mask = 0; mask < 268435455; mask++)
	{
		// �� ��������� ������� ��������� ��������� � �������� (�������� �������)
		// ���� � ������ ����� 14 ����� � 14 ������, �������� � ������ ��������� �������
	}
	// -------
	
	// ������� 24-�� ������.
	input_data.open("C:\\Users\\XAdmin\\Downloads\\inf_2021\\24\\20.in.txt");
	std::string brackets;
	std::getline(input_data, brackets);
	input_data.close();
	bool open_bracket_found = false;
	auto iter = brackets.begin();
	unsigned int counter = 0;
	while(iter != brackets.end())
	{
		if (*iter == '(')
		{
			open_bracket_found = true;
		}
		if (*iter == ')' && open_bracket_found == true)
		{
			open_bracket_found = false;
			counter++;
		}
		iter++;
	}
	std::cout << counter << std::endl;

	// ������� 25-�� ������.
	std::vector<unsigned int> numbers;
	// ���� ���������� �����
	for (unsigned int i = 1395; i <= 22717; i++)
	{
		std::stringstream temp_stream;
		temp_stream << i << std::endl;
		std::string int_string;
		std::getline(temp_stream, int_string);
		temp_stream.clear();
		for(char c : int_string)
		{
			temp_stream << c << '\t';
		}

		//auto s = int_string.begin();
		//while(s != int_string.end())
		//{
        //	temp_stream << *s << '\t';
		//}
		
		temp_stream << std::endl;
		std::vector<unsigned int> number_by_digit;
		for(int j = 0; j < int_string.size(); j++)
		{
			int x;
			temp_stream >> x;
			number_by_digit.push_back(x);
		}
		bool skip_number = false;
		for (int j = 0; j < number_by_digit.size() - 1; j++)
		{
			if (number_by_digit[j] > number_by_digit[j+1])
			{
				skip_number = true;
				break;
			}
		}
		if (skip_number)
		{
			continue;
		}
		numbers.push_back(i);
	}
	// ������� �����:
	unsigned int sum = 0;
	for (auto number : numbers)
	{
		sum += number;
	}
	std::cout << sum << std::endl;
}