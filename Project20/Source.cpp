# include <iostream>
using namespace std;

long hms_to_secs(int, int, int);

int main()
{
	int hours, min, sec;
	cout << "Please! Enter number hours:"; cin >>  hours;
	cout << "Please! Enter number minutes: "; cin >> min;
	cout << "Please! Enter number seconds: "; cin >> sec;
	long oll = hms_to_secs(hours, min, sec);
	cout << "Olly sec : " << oll << endl;
	system("pause");
	return 0;
}
long hms_to_secs(int h, int m, int s)
{
	long vid = h * 3600 + m * 60 + s;
	return   vid;
	
}
