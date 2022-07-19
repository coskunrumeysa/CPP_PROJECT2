// Beni Yaratan Elbet Yolumu Gösterir .Şuara/78
//Bu program dairenin  alanını ve çevresini hesapamak için yazılmıştır.Aynı zamanda dairenin yarı çapını bulmak için yazılmıştır.
//This program written for calculate perimeter and area of circle .At the same time find the radius of circle.

#include <iostream>
using namespace std;

int main()
{
	double R; // Çap
	double r; // Yarı çap
	double area; // Alan
	double perimeter; // Çevre
	const double pi = 3.14; //Pi sayısı


	cout << "Please enter diameter of circle :"; // Kullancıdan çap girmesi istenmiştir.
	cout << endl;
	cin >> R;
	cout << endl;

	r = R / 2;

	cout << "**************";
	cout << endl;

	cout << "Radius of circle:" << endl << r << endl; //  Dairenin yarı çap ekranda gösterilmiştir.

	cout << "**************";
	cout << endl;

	perimeter = 2 * pi * r;
	area = pi * r * r;


	cout << "Area of circle :" << endl << area; // Dairenin alanı ekranda gösterilmiştir.
	
	
	cout << endl;

	cout << "**************";
	cout << endl;

	cout << "Perimeter of circle:" << endl << perimeter; // Dairenin çevresi ekranda gösterilmiştir.

	cout << endl;

	system("PAUSE");
	return 0;

}

