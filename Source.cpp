# include <iostream>

double Strap(double b1,double b2, double h) //���������� ������� ��������, ���� �������� ��������� � ������
{
	return h * ((b1 + b2) / 2.0);
}

double Scircle(double r) //���������� ������� ����� ����� ��� ������
{
	return 3.14 * r * r;
}

double Lcircle(double r) //���������� ����� ���������� ����� �� ������
{
	return 2 * 3.14 * r;
}

double Striangle(double a, double h)//���������� ������� �������������� ������������ ����� ��� ������
{
	return a * h / 2;
}

double Hypotenuse(double a, double b) //���������� ���������� � ������� ������� ��������
{
	return sqrt(a * a + b * b);
}

int NumSum(int num)//���������� ����� ���� �����
{
	int sum = 0;
	while (num > 0) {
		int dig = num % 10;
		sum = sum + dig;
		num=num/10;
	}

	return sum;
}

void Roots(double k, double d, double n)//���������� ������ ���������: k*x^2+dx+n
{
	if (d * d - 4 * k * n > 0)// ������������ > 0
	{
		double x1 = (-d + sqrt(d * d - 4 * k * n)) / (2 * k);
		double x2 = (-d - sqrt(d * d - 4 * k * n)) / (2 * k);
		std::cout << "The first root; x1 = " << x1 << std::endl;
		std::cout << "The second root; x2 = " << x2 << std::endl;
	}

	else if (d*d - 4 * k * n == 0) // ������������ = 0
	{
		double x3= (-d) / (2 * k);
		std::cout << "There is only one root x = " << x3 << std::endl;
	}

	else if(d * d - 4 * k * n < 0)// ������������ < 0
	{
		std::cout << "There is no roots in your equation"<< std::endl;
	}
}

void Med(double a, double b, double c) //���������� ������ ������������, ������������ �� ������ ��������� ������������
{//�.�. ������� ����� ������� �������, �� ��� �������� �������� ������� � ������� ������ ������������ ����� ����������� � ����:
	//a/2, b/2, c/2
	// ����� � ������� ����� ������ (sqrt((2 * a * a + 2 * b * b - c * c) / 4); ����������� ����  �������:
	double mc = sqrt((2 * (a / 2) * (a / 2) + 2 * (b / 2) * (b / 2) -  (c / 2) * (c / 2)) / 4);
	double mb = sqrt((2 * (a / 2) * (a / 2) + 2 * (c / 2) * (c / 2) -  (b / 2) * (b / 2)) / 4);
	double ma = sqrt((2 * (b / 2) * (b / 2) + 2 * (c / 2) * (c / 2) -  (a / 2) * (a / 2)) / 4);

	std::cout << "Median to the a side ma = " << ma << std::endl;
	std::cout << "Median to the b side ma = " << mb << std::endl;
	std::cout << "Median to the c side ma = " << mc << std::endl;
}

void time(int sec) //���������� ���������� ������� �� ���������� ������, ������� ������ � ������ ���
{
	int hour = sec / 3600;
	int min = (sec - hour * 3600) / 60;
	int secNow = (sec - hour * 3600 - min * 60);

	std::cout << "The time is:" << hour << " hours : " << min << " minutes : " << secNow << " seconds"<<std::endl;
	
}

void EqualTri(double a, double b, double c) //������ �������������� �� �����������
{
	if (a == b) // ���� a = b, �� ����������� �������������� � ���������� c
	{
		std::cout << "The triangle is equilateral with the base on the side c" << std::endl;
	}
	else if (b == c) // ���� b = c, �� ����������� �������������� � ���������� a
	{
		std::cout << "The triangle is equilateral with the base on the side a" << std::endl;
	}
	else if (a == c)// ���� a = c, �� ����������� �������������� � ���������� b
	{
		std::cout << "The triangle is equilateral with the base on the side b" << std::endl;
	}
	else if (a == c && c == b)// ���� a = c = b, �� ����������� ��������������
	{
		std::cout << "The triangle is equilateral" << std::endl;
	}
	else //����������� �� ��������������
	{
		std::cout << "The triangle is not equilateral" << std::endl;
	}
}

void sale(int num) //��������� ��������� ������� �� ������� 10%, ������� ���� ��� �������, ��� ����� ������� > 1000
{ 
	if (num > 1000) 
	{
		double numS = 0;
		numS = num - num * 0.1;
		std::cout << "There will be a 10% sale for you. You have to pay - " << numS << std::endl;
	
	}
	else 
	{
		double numS = 0;
		numS = num;
		std::cout << "There will be no sale for you. You have to pay - "<< numS << std::endl;
	}
}

void idealperson(double height, double weight)
{
	double IDweight = height - 100;// ���������� ���������� ����
	if (weight == IDweight) // ��������� ����������
	{
		std::cout << "You have the ideal weught for your height" << std::endl;
	}
	else if (weight < IDweight)// �������
	{
		std::cout << "You have an underweight. You have to gain "<< IDweight - weight << " kg." << std::endl;
	}
	else //�������
	{
		std::cout << "You have an overweight. You have to lose " << weight - IDweight << " kg." << std::endl;
	}
}

void rand_proizv(int a, int b, int c)//����� �� ������������ ��������� ����� �����, ���������� �������������
{
	int d = a * b;
	if (d == c)
	{
		std::cout << "You win! " << a << " * " << b << " = " << c << std::endl;
	}
	else
	{
		std::cout << "You lose! " << a << " * " << b << " <> " << c << std::endl;
	}
}

void Time_cost(int cost, double length, int day)//����������� ������ � ������� ���� �� ����� ������
{
	double c = cost * length;
	if (day == 6 || day == 7)
	{
		std::cout << "There will be a 10% sale for you. You have to pay - " << c * 0.8 << std::endl;
	}
	else
	{
		std::cout << "There will be no sale for you. You have to pay - " << c << std::endl;
	}
}

void TimeOFtheYEAR(int month)
{
	if (month == 12 || month == 1 || month == 2)
	{
		std::cout << "It's winter time!!" << std::endl;
		if (month == 12)
		{
			std::cout << "It's time to get ready for the New Year!! It's December!!" << std::endl;
		}
		else if (month == 1)
		{
			std::cout << "It's time to get ready for the Christmas!! It's January!!" << std::endl;
		}
		else
		{
			std::cout << "It's EXTREMELY cold outside!! It's February!!" << std::endl;
		}
	}


	if (month == 3 || month == 4 || month == 5)
	{
		std::cout << "It's spring time!!" << std::endl;
		if (month == 3)
		{
			std::cout << "It's time to get ready for the Women's Day!! It's March!!" << std::endl;
		}
		else if (month == 4)
		{
			std::cout << "It's time to get ready for the Fool's Day!! It's April!!" << std::endl;
		}
		else
		{
			std::cout << "It's time to get ready for the Day of Spring and Work!! It's May!!" << std::endl;
		}
	}

	if (month == 6 || month == 7 || month == 8)
	{
		std::cout << "It's summer time!!" << std::endl;
		if (month == 6)
		{
			std::cout << "It's time to get ready for my birthday!! It's June!!" << std::endl;
		}
		else if (month == 7)
		{
			std::cout << "It's the hottest time of the year!! It's July!!" << std::endl;
		}
		else
		{
			std::cout << "It's the last month of holidays!! It's August!!" << std::endl;
		}
	}

	if (month == 9 || month == 10 || month == 11)
	{
		std::cout << "It's autumn time!!" << std::endl;
		if (month == 9)
		{
			std::cout << "It's time to get ready for the Beard Day!! It's September!!" << std::endl;
		}
		else if (month == 10)
		{
			std::cout << "It's time to get ready for the Halloween!! It's October!!" << std::endl;
		}
		else
		{
			std::cout << "It's time to get ready for the Mother's Day!! It's November!!" << std::endl;
		}
	}
	
}

void Happy_Number(int numb)// ����������� ����������� �����
{
	int a = numb % 10;//�����, ������� �� ������ �����
	int b = (numb / 10) % 10;//�����, ������� �� ����� �����
	int c = (numb / 100) % 10;//�����, ������� �� ��������� �����
	int sum1 = a + b + c;

	int a1 = (numb / 1000) % 10;//�����, ������� �� ������� �����
	int b1 = (numb / 10000) % 10;//�����, ������� �� ������ �����
	int c1 = (numb / 100000) % 10;//�����, ������� �� ������ �����
	int sum2 = a1 + b1 + c1;

	if (sum1 == sum2)//���� ����� ������ ���� ���� ����� ����� ��������� ��� ����, �� ����� ����������
	{
		std::cout << "Your number is lucky" << std::endl;
	}
	else
	{
		std::cout << "Your number is not lucky" << std::endl;
	}

}

void Kopeyki(int n)
{
	int a = n % 10;

	if (n == 11 || n == 12 || n == 13 || n == 14)
	{
		std::cout << "You have " << n << " kopeek" << std::endl;//������
	}
	if (a == 0 || a == 5 || a == 6 || a == 7 || a == 8 || a == 9)
	{
		std::cout << "You have " << n << " kopeek" << std::endl;//������
	}
	if ((a == 2 && n != 12) || (a == 3 && n != 13) || (a == 4 && n != 14))
	{
		std::cout << "You have " << n << " kopeyki" << std::endl;//�������
	}
}

void Palindrom(int n)// ����������� �����-����������
{
	int a = n % 10;//�����, ������� �� ��������� �����
	int b = (n / 10) % 10;//�����, ������� �� ������� �����
	int c = (n / 100) % 10;//�����, ������� �� ������ �����
	int d = (n / 1000) % 10;//�����, ������� �� ������ �����
	int n1 = a * 1000 + b * 100 + c * 10 + d;

	if (n == n1)//���� �������� ����� � ������ ���������, �� ����� �������� �����������
	{
		std::cout << "Your number is a palindrome" << std::endl;
	}
	else
	{
		std::cout << "Your number is not a palindrome" << std::endl;
	}
}

void Proizv_3(int n, int d)// �������� �� ������������ ���� ������ ����� b
{
	int a = n % 10;//�����, ������� �� ������� �����
	int b = (n / 10) % 10;//�����, ������� �� ������ �����
	int c = (n / 100) % 10;//�����, ������� �� ������ �����
	int p = a * b * c;

	if (p > d)
	{
		std::cout << "The product is bigger than b" << std::endl;
	}
	else
	{
		std::cout << "The product is smaller than b" << std::endl;
	}
}

void Krat_7(int n)
{
	int a = n % 10;//�����, ������� �� ������� �����
	int b = (n / 10) % 10;//�����, ������� �� ������ �����
	int c = (n / 100) % 10;//�����, ������� �� ������ �����
	int sum = a + b + c;

	if (sum % 7 == 0)
	{
		std::cout << "The sum is a multiple of 7" << std::endl;
	}
	else
	{
		std::cout << "The sum is not a multiple of 7" << std::endl;
	}
}


void Figures(double a, double b, double c, double d)//���������� �� ���� ������������� � ������
{
	if (((a < c) && (b < d)) || (a < d && b < c))
	{
		std::cout << "Box (a, b) can be placed in the box (c, d)";
	}
	else
	{
		std::cout << "Box (a, b) can not be placed in the box (c, d)";
	}
}

int main()
{
	//task 1
	std::cout << "task 1." << std::endl;
	std::cout << "Write the first base of the trapezoid a =  " ;
	double a = 0.0;
	std::cin >> a;//���� ������� ���������
	std::cout << "Write the second base of the trapezoid b =  ";
	double b = 0.0;
	std::cin >> b;//���� ������� ���������
	std::cout << "Write height of the trapezoid h =  ";
	double h = 0.0;
	std::cin >> h;//���� ������
	std::cout << std::endl;

	std::cout << "The square of the trapezoid = " << Strap(a,b,h) << std::endl;
	std::cout << std::endl;


	//task 2
	std::cout << "task 2." << std::endl;
	std::cout << "Write the radius of the circle r =  ";
	double r = 0.0;
	std::cin >> r;//���� �������
	std::cout << std::endl;

	std::cout << "The square of the circle = " << Scircle(r) << std::endl;
	std::cout << "The length of the circle = " << Lcircle(r) << std::endl;
	std::cout << std::endl;


	//task 3
	std::cout << "task 3." << std::endl;
	std::cout << "Write the first leg of the triangle k1 =  ";
	double k1 = 0.0;
	std::cin >> k1;//���� ������� ������
	std::cout << "Write the second leg of the triangle k2 =  ";
	double k2 = 0.0;
	std::cin >> k2;//���� ������� ������
	std::cout << std::endl;

	std::cout << "The square of the triangle = " << Striangle(k1,k2) << std::endl;
	std::cout << "The hypotenuse og the triangle = " << Hypotenuse(k1,k2) << std::endl;
	std::cout << std::endl;


	//task 4
	std::cout << "task 4." << std::endl;
	std::cout << "Write the number =  ";
	int Numb = 0;
	std::cin >> Numb;//���� �����, ����� ���� �������� �� ����� ���������
	std::cout << std::endl;

	std::cout << "The sum of the numbers of your amount = " << NumSum(Numb) << std::endl;
	std::cout << std::endl;

	//task 7
	std::cout << "task 7." << std::endl;
	std::cout << "Write the number before x^2 k =  ";
	double k = 0.0;
	std::cin >> k;//���� ������������, �������� ����� ��������� x
	std::cout << "Write the the number before x d =  ";
	double d = 0.0;
	std::cin >> d;//���� ���� ������������, �������� ����� x
	std::cout << "Write the free term n =  ";
	double n = 0.0;
	std::cin >> n;//���� ���������� �����
	std::cout << std::endl;

	Roots(k, d, n);
	std::cout << std::endl;

	//task 8
	std::cout << "task 8." << std::endl;
	std::cout << "Write the first side of the triangle A =  ";
	double A = 0.0;
	std::cin >> A;//���� ������ ������� ������������
	std::cout << "Write the second side of the triangle B =  ";
	double B = 0.0;
	std::cin >> B;//���� ������ ������� ������������
	std::cout << "Write third side of the triangle C =  ";
	double C = 0.0;
	std::cin >> C;//���� ������� ������� ������������
	std::cout << std::endl;

	Med(A, B, C);
	std::cout << std::endl;


	//task 9
	std::cout << "task 9." << std::endl;
	std::cout << "Write how many seconds have passed from the beginning of the day: ";
	int sec = 0;
	std::cin >> sec;//���� ���������� ������, ������� ������ � ������ �����
	std::cout << std::endl;

	time(sec);
	std::cout << std::endl;

	
	//task 10
	std::cout << "task 10." << std::endl;
	std::cout << "Write the first side of the triangle s1 =  ";
	double s1 = 0.0;
	std::cin >> s1;//���� ������ ������� ������������
	std::cout << "Write the second side of the triangle s2 =  ";
	double s2 = 0.0;
	std::cin >> s2;//���� ������ ������� ������������
	std::cout << "Write third side of the triangle s3 =  ";
	double s3 = 0.0;
	std::cin >> s3;//���� ������� ������� ������������
	std::cout << std::endl;

	EqualTri(s1, s2, s3);
	std::cout << std::endl;


	//task 11
	std::cout << "task 11." << std::endl;
	std::cout << "Write amount of your purchase - ";
	int Num = 0;
	std::cin >> Num;//���� ����� �������
	std::cout << std::endl;

	sale(Num);
	std::cout << std::endl;
	

	//task 12
	std::cout << "task 12." << std::endl;
	std::cout << "Write your height ";
	double height = 0.0;
	std::cin >> height;//���� �����
	std::cout << "Write your weight ";
	double weight = 0.0;
	std::cin >> weight;//���� ����

	idealperson(height, weight);
	std::cout << std::endl;


	//task 13
	std::cout << "task 13." << std::endl;
	int r_numb1 = 1 + rand() % 9;
	int r_numb2 = 1 + rand() % 9;

	std::cout << "Write your number ";
	int proizv = 0;
	std::cin >> proizv;// ���� ����� �� ������������
	std::cout << std::endl;

	rand_proizv(r_numb1, r_numb2, proizv);
	std::cout << std::endl;


	//task 14
	std::cout << "task 14." << std::endl;
	std::cout << "Write the cost per minute ";// ���� ���� �� ������ ���������
	int cost = 0;
	std::cin >> cost;
	std::cout << "Write the length of the dialogue in minutes ";// ���� ������������ ���������
	double length = 0.0;
	std::cin >> length;
	std::cout << "Write the day of the week (1-7) ";// ���� ��� ������
	int day = 0;
	std::cin >> day;
	std::cout << std::endl;

	Time_cost(cost, length, day);
	std::cout << std::endl;


	//task 15
	std::cout << "task 15." << std::endl;
	std::cout << "Write the number of the month ";// ���� ������ ������
	int month = 0;
	std::cin >> month;
	std::cout << std::endl;

	TimeOFtheYEAR(month);
	std::cout << std::endl;


	//task 16
	std::cout << "task 16." << std::endl;
	std::cout << "Write the number to test if it's happy ";// ���� �����
	int Hnumb = 0;
	std::cin >> Hnumb;
	std::cout << std::endl;

	Happy_Number(Hnumb);
	std::cout << std::endl;


	//task 17
	std::cout << "task 17." << std::endl;
	std::cout << "Write the number of pennies ";// ���� �����
	int Nkop = 0;
	std::cin >> Nkop;
	std::cout << std::endl;

	Kopeyki(Nkop);
	std::cout << std::endl;


	//task 18
	std::cout << "task 18." << std::endl;
	std::cout << "Write the number to test if this is a palindrom ";// ���� �����
	int Pnumb = 0;
	std::cin >> Pnumb;
	std::cout << std::endl;

	Palindrom(Pnumb);
	std::cout << std::endl;


	//task 19
	std::cout << "task 19." << std::endl;
	std::cout << "Write the number ";// ���� �����
	int Tnumb = 0;
	std::cin >> Tnumb;
	std::cout << std::endl;

	std::cout << "Write the b number ";// ���� ����� b
	int b1 = 0;
	std::cin >> b1;
	std::cout << std::endl;

	//task 19.1
	std::cout << "task 19.1" << std::endl;//������������ ���� ����� > b
	Proizv_3(Tnumb, b1);
	std::cout << std::endl;

	//task 19.2
	std::cout << "task 19.2" << std::endl;//����� ���� ����� ������ 7
	Krat_7(Tnumb);
	std::cout << std::endl;


	//task 20
	std::cout << "task 20." << std::endl;
	std::cout << "Write sides of the first box (a, b) " << std::endl;
	double side11 = 0.0;// ���� ���������� ������� ��������������
	std::cin >> side11;
	double side12 = 0.0;
	std::cin >> side12;
	std::cout << std::endl;

	std::cout << "Write sides of the first box (c, d) " << std::endl;
	double side21 = 0.0;// ���� ���������� ������� ��������������
	std::cin >> side21;
	double side22 = 0.0;
	std::cin >> side22;
	std::cout << std::endl;

	Figures(side11, side12, side21, side22);
	std::cout << std::endl;


	//task 21
	std::cout << "task 21." << std::endl;
	std::cout << "Types: " << std::endl;

	std::cout << "	Logical type: " << std::endl;
	std::cout << "		Bool : " << sizeof(bool) << std::endl;

	std::cout << "	Symbolic type: " << std::endl;
	std::cout << "		Char : " << sizeof(char) << std::endl;
	std::cout << "		Wchar_t : " << sizeof(wchar_t) << std::endl;
	std::cout << "		Char16_t : " << sizeof(char16_t) << std::endl;
	std::cout << "		Char32_t : " << sizeof(char32_t) << std::endl;

	std::cout << "	Integral type: " << std::endl;
	std::cout << "		Short : " << sizeof(short) << std::endl;
	std::cout << "		Int : " << sizeof(int) << std::endl;
	std::cout << "		Long : " << sizeof(long) << std::endl;
	std::cout << "		Long long: " << sizeof(long long) << std::endl;

	std::cout << "	Floating point type: " << std::endl;
	std::cout << "		Float : " << sizeof(float) << std::endl;
	std::cout << "		Double : " << sizeof(double) << std::endl;
	std::cout << "		Long double : " << sizeof(long double) << std::endl;
	return 0;
}