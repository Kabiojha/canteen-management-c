#include <iostream>
#include <conio.h>
// #include <fstream> //for file handling
#include <stdlib.h>
#include <string>
#include <windows.h> //for Sleep() function

using namespace std;
// int linecount(int num)		// this function is used to count the lines of the file item.txt
// {
// 	string line;
// 	int noi=0;
// 	ifstream lines;			// opening a input stream to read the data stored in the file
// 	lines.open("dmt/items.dat");	// opening the file items.txt. in this program items.dat holds all the item list of a canteen.
// 	while (!lines.eof())		//this line of code is a while loop, and it helps to check every lines in the file until the pointer reaches the end of the file. eof means end of file.

// 	{
// 		lines>>line;			// this line of code reads a line from the file.
// 		noi++;					// this is used as counter
// 		num=noi;				// the value obtained by the counter at eof is stored to num.

// 	}
// 	lines.close();				// closing the input filestream
// 	return num;					// this returns the value stored in num, whenever the function linecount() is called.
//}

int main()
{
	system("Color 03");
	string review;
	string user; // user name
	char check;	 // checking to continue order

	int table_no; // table number
	int order_first;
	int order_second;
	int order_third;
	int order_fourth;
	int order_fifth;
	int rate_first = 20;
	int rate_second = 30;
	int rate_third = 80;
	int rate_fourth = 100;
	int rate_fifth = 90;

	cout << "\n\n\n\n||========================================================================================================||\n";
	Sleep(100); // Sleep(200) pauses the output for 200 miliseconds helping the output to look graphical... this function is called from the library "windows.h"
	cout << "||                                                                                                        ||\n";
	Sleep(100);
	cout << "||  __        __  ____________  __               ________    _________      __          __  ____________  ||\n";
	cout << "||  WW        WW  EEEEEEEEEEEE  LL              CCCCCCCCC   OOOOOOOOOOO     MM          MM  EEEEEEEEEEEE  ||\n";
	Sleep(100);
	cout << "||  WW        WW  EE            LL            CCC          OO         OO    MMMM      MMMM  EE            ||\n";
	Sleep(100);
	cout << "||  WW   __   WW  EE            LL           CCC          OO           OO   MM MM    MM MM  EE            ||\n";
	Sleep(100);
	cout << "||  WW   WW   WW  EE______      LL          CCC          OO             OO  MM  MM  MM  MM  EE________    ||\n";
	Sleep(100);
	cout << "||  WW  WWWW  WW  EEEEEEEE      LL          CCC          OO             OO  MM   MMMM   MM  EEEEEEEEEE    ||\n";
	Sleep(100);
	cout << "||  WW WW  WW WW  EE            LL           CCC          OO           OO   MM    MM    MM  EE            ||\n";
	Sleep(100);
	cout << "||  WWWW    WWWW  EE__________  LL__________  CCC________  OO_________OO    MM          MM  EE__________  ||\n";
	Sleep(100);
	cout << "||  WW        WW  EEEEEEEEEEEE  LLLLLLLLLLLL    CCCCCCCCC    OOOOOOOOO      MM          MM  EEEEEEEEEEEE  ||\n";
	Sleep(100);
	cout << "||                                                                                                        ||\n";
	Sleep(100);
	cout << "===============================================================================================================" << endl;
	system("Color 0E");
	cout << "Enter your name : ";
	cin >> user;
	system("Color 0C");
	cout << endl;
	cout << "Enter your table number : ";
	cin >> table_no;
	cout << endl;
	system("Color 03");
	Sleep(50);
	cout << "Please ";
	Sleep(50);
	cout << "enter ";
	Sleep(50);
	cout << "the ";
	Sleep(50);
	cout << "following ";
	Sleep(50);
	cout << "number ";
	Sleep(50);
	cout << "to ";
	Sleep(50);
	cout << "order ";
	Sleep(50);
	cout << endl;
	Sleep(50);
	system("Color 04");
	cout << "========================================" << endl;
	cout << "1 "
		 << "Black tea-20" << endl;
	cout << "2 "
		 << "Milk tea-30" << endl;
	cout << "3 "
		 << "Mo:Mo(Veg)-80" << endl;
	cout << "4 "
		 << "Mo:Mo(Chicken)-100" << endl;
	cout << "5 "
		 << "Mo:Mo(Buff)-90" << endl;
	cout << "========================================" << endl;
	cout << "Enter 1 to 5 for first order" << endl;
	cin >> order_first;
	//  switch (rate)
	//     {
	//     case 1:
	//      cout<<"your order is kalo chiya"<<endl;
	//         break;
	//      case 2:
	//       cout<<"your order is dudh chiyaa"<<endl;
	//         break;
	//      case 3:
	//       cout<<"your order is veg momm"<<endl;
	//         break;
	//      case 4:
	//       cout<<"your order is chicken momo"<<endl;
	//         break;
	//      case 5:
	//       cout<<"your order is buff momo"<<endl;
	//         break;
	//     }

	if (order_first == 1)
	{
		cout << "Black tea --Rs. " << rate_first << endl;
	}
	else if (order_first == 2)
	{
		cout << "Milk Tea --Rs. " << rate_second << endl;
	}
	else if (order_first == 3)
	{
		cout << "Mo:Mo(Veg) --Rs. " << rate_third << endl;
	}
	else if (order_first == 4)
	{
		cout << "Mo:Mo(Chicken) --Rs. " << rate_fourth << endl;
	}
	else if (order_first == 5)
	{
		cout << "Mo:Mo(Buff) --Rs. " << rate_fifth << endl;
	}
	else
	{
		cout << "Ivalid" << endl;
	}

	Sleep(50);
	cout << "Please ";
	Sleep(50);
	cout << "enter ";
	Sleep(50);
	cout << "'f' ";
	Sleep(50);
	cout << "to ";
	Sleep(50);
	cout << "continue ";
	Sleep(50);
	cout << "your ";
	Sleep(50);
	cout << "order ";
	Sleep(50);
	cout << endl;
	Sleep(50);
	Sleep(100);
	cout << "OR ";
	Sleep(100);
	cout << endl;
	Sleep(50);
	cout << "Enter ";
	Sleep(50);
	cout << "'x' ";
	Sleep(50);
	cout << "to ";
	Sleep(50);
	cout << "end ";
	Sleep(50);
	cout << "your ";
	Sleep(50);
	cout << "order ";
	Sleep(50);
	cout << endl;
	Sleep(50);
	cin >> check;

	if (check == 'f')
	{
		Sleep(50);
		cout << "Please ";
		Sleep(50);
		cout << "enter ";
		Sleep(50);
		cout << "the ";
		Sleep(50);
		cout << "following ";
		Sleep(50);
		cout << "number ";
		Sleep(50);
		cout << "to ";
		Sleep(50);
		cout << "order ";
		Sleep(50);
		cout << endl;
		Sleep(50);
		cout << "========================================" << endl;
		cout << "1 "
			 << "Black tea-20" << endl;
		cout << "2 "
			 << "Milk tea-30" << endl;
		cout << "3 "
			 << "Mo:Mo(Veg)-80" << endl;
		cout << "4 "
			 << "Mo:Mo(Chicken)-100" << endl;
		cout << "5 "
			 << "Mo:Mo(Buff)-90" << endl;
		cout << "========================================" << endl;
		cout << "Enter 1 to 5 for second order" << endl;
		cin >> order_second;

		if (order_second == 1)
		{
			cout << "Black tea --Rs. " << rate_first << endl;
		}
		else if (order_second == 2)
		{
			cout << "Milk Tea --Rs. " << rate_second << endl;
		}
		else if (order_second == 3)
		{
			cout << "Mo:Mo(Veg) --Rs. " << rate_third << endl;
		}
		else if (order_second == 4)
		{
			cout << "Mo:Mo(Chicken) --Rs. " << rate_fourth << endl;
		}
		else if (order_second == 5)
		{
			cout << "Mo:Mo(Buff) --Rs. " << rate_fifth << endl;
		}
		else
		{
			cout << "Ivalid" << endl;
		}

		Sleep(50);
		cout << "Please ";
		Sleep(50);
		cout << "enter ";
		Sleep(50);
		cout << "'f' ";
		Sleep(50);
		cout << "to ";
		Sleep(50);
		cout << "continue ";
		Sleep(50);
		cout << "your ";
		Sleep(50);
		cout << "order ";
		Sleep(50);
		cout << endl;
		Sleep(50);
		Sleep(100);
		cout << "OR ";
		Sleep(100);
		cout << endl;
		Sleep(50);
		cout << "Enter ";
		Sleep(50);
		cout << "'x' ";
		Sleep(50);
		cout << "to ";
		Sleep(50);
		cout << "end ";
		Sleep(50);
		cout << "your ";
		Sleep(50);
		cout << "order ";
		Sleep(50);
		cout << endl;
		Sleep(50);
		cin >> check;
		if (check == 'f')
		{
			Sleep(50);
			cout << "Please ";
			Sleep(50);
			cout << "enter ";
			Sleep(50);
			cout << "the ";
			Sleep(50);
			cout << "following ";
			Sleep(50);
			cout << "number ";
			Sleep(50);
			cout << "to ";
			Sleep(50);
			cout << "order ";
			Sleep(50);
			cout << endl;
			Sleep(50);
			cout << "========================================" << endl;
			cout << "1 "
				 << "Black tea-20" << endl;
			cout << "2 "
				 << "Milk tea-30" << endl;
			cout << "3 "
				 << "Mo:Mo(Veg)-80" << endl;
			cout << "4 "
				 << "Mo:Mo(Chicken)-100" << endl;
			cout << "5 "
				 << "Mo:Mo(Buff)-90" << endl;
			cout << "========================================" << endl;
			cout << "Enter 1 to 5 for third order" << endl;
			cin >> order_third;

			if (order_third == 1)
			{
				cout << "Black tea --Rs. " << rate_first << endl;
			}
			else if (order_third == 2)
			{
				cout << "Milk Tea --Rs. " << rate_second << endl;
			}
			else if (order_third == 3)
			{
				cout << "Mo:Mo(Veg) --Rs. " << rate_third << endl;
			}
			else if (order_third == 4)
			{
				cout << "Mo:Mo(Chicken) --Rs. " << rate_fourth << endl;
			}
			else if (order_third == 5)
			{
				cout << "Mo:Mo(Buff) --Rs. " << rate_fifth << endl;
			}
			else
			{
				cout << "Ivalid" << endl;
			}
			Sleep(50);
			cout << "Please ";
			Sleep(50);
			cout << "enter ";
			Sleep(50);
			cout << "'f' ";
			Sleep(50);
			cout << "to ";
			Sleep(50);
			cout << "continue ";
			Sleep(50);
			cout << "your ";
			Sleep(50);
			cout << "order ";
			Sleep(50);
			cout << endl;
			Sleep(50);
			Sleep(100);
			cout << "OR ";
			Sleep(100);
			cout << endl;
			Sleep(50);
			cout << "Enter ";
			Sleep(50);
			cout << "'x' ";
			Sleep(50);
			cout << "to ";
			Sleep(50);
			cout << "end ";
			Sleep(50);
			cout << "your ";
			Sleep(50);
			cout << "order ";
			Sleep(50);
			cout << endl;
			Sleep(50);
			cin >> check;
			if (check == 'f')
			{
				Sleep(50);
				cout << "Please ";
				Sleep(50);
				cout << "enter ";
				Sleep(50);
				cout << "the ";
				Sleep(50);
				cout << "following ";
				Sleep(50);
				cout << "number ";
				Sleep(50);
				cout << "to ";
				Sleep(50);
				cout << "order ";
				Sleep(50);
				cout << endl;
				Sleep(50);
				cout << "========================================" << endl;
				cout << "1 "
					 << "Black tea-20" << endl;
				cout << "2 "
					 << "Milk tea-30" << endl;
				cout << "3 "
					 << "Mo:Mo(Veg)-80" << endl;
				cout << "4 "
					 << "Mo:Mo(Chicken)-100" << endl;
				cout << "5 "
					 << "Mo:Mo(Buff)-90" << endl;
				cout << "========================================" << endl;
				cout << "Enter 1 to 5 for fourth order" << endl;
				cin >> order_fourth;

				if (order_fourth == 1)
				{
					cout << "Black tea --Rs. " << rate_first << endl;
				}
				else if (order_fourth == 2)
				{
					cout << "Milk Tea --Rs. " << rate_second << endl;
				}
				else if (order_fourth == 3)
				{
					cout << "Mo:Mo(Veg) --Rs. " << rate_third << endl;
				}
				else if (order_fourth == 4)
				{
					cout << "Mo:Mo(Chicken) --Rs. " << rate_fourth << endl;
				}
				else if (order_fourth == 5)
				{
					cout << "Mo:Mo(Buff) --Rs. " << rate_fifth << endl;
				}
				else
				{
					cout << "Ivalid" << endl;
				}
				Sleep(50);
				cout << "Please ";
				Sleep(50);
				cout << "enter ";
				Sleep(50);
				cout << "'f' ";
				Sleep(50);
				cout << "to ";
				Sleep(50);
				cout << "continue ";
				Sleep(50);
				cout << "your ";
				Sleep(50);
				cout << "order ";
				Sleep(50);
				cout << endl;
				Sleep(50);
				Sleep(100);
				cout << "OR ";
				Sleep(100);
				cout << endl;
				Sleep(50);
				cout << "Enter ";
				Sleep(50);
				cout << "'x' ";
				Sleep(50);
				cout << "to ";
				Sleep(50);
				cout << "end ";
				Sleep(50);
				cout << "your ";
				Sleep(50);
				cout << "order ";
				Sleep(50);
				cout << endl;
				Sleep(50);
				cin >> check;
				if (check == 'f')
				{
					Sleep(50);
					cout << "Please ";
					Sleep(50);
					cout << "enter ";
					Sleep(50);
					cout << "the ";
					Sleep(50);
					cout << "following ";
					Sleep(50);
					cout << "number ";
					Sleep(50);
					cout << "to ";
					Sleep(50);
					cout << "order ";
					Sleep(50);
					cout << endl;
					Sleep(50);
					cout << "========================================" << endl;
					cout << "1 "
						 << "Black tea-20" << endl;
					cout << "2 "
						 << "Milk tea-30" << endl;
					cout << "3 "
						 << "Mo:Mo(Veg)-80" << endl;
					cout << "4 "
						 << "Mo:Mo(Chicken)-100" << endl;
					cout << "5 "
						 << "Mo:Mo(Buff)-90" << endl;
					cout << "========================================" << endl;
					cout << "Enter 1 to 5 for fifth order" << endl;
					cin >> order_fourth;

					if (order_fifth == 1)
					{
						cout << "Black tea --Rs. " << rate_first << endl;
					}
					else if (order_fifth == 2)
					{
						cout << "Milk Tea --Rs. " << rate_second << endl;
					}
					else if (order_fifth == 3)
					{
						cout << "Mo:Mo(Veg) --Rs. " << rate_third << endl;
					}
					else if (order_fifth == 4)
					{
						cout << "Mo:Mo(Chicken) --Rs. " << rate_fourth << endl;
					}
					else if (order_fifth == 5)
					{
						cout << "Mo:Mo(Buff) --Rs. " << rate_fifth << endl;
					}
					else
					{
						cout << "Ivalid" << endl;
					}
					cout << "Please Press 'x' to exit" << endl;
					cin >> check;
					system("Color 04");
					if (check == 'x')
					{
						cout << "Your thoughts on this food" << endl;
						cin >> review;
						cout << "review" << endl;

						cout<<"\n\n\n";
				cout<< "TTTTTTTTTTTT  HH        HH         AA         NN       NN   KK   KKK    YY      YY      000000000     UU         UU  \n";
				Sleep(20); //Sleep pauses the program for certain time... here for 20 ms
				cout<< "     TT       HH        HH        AAAA        NNNN     NN   KK  KK       YY    YY     O0         00   UU         UU  \n";
				Sleep(20);
				cout<< "     TT       HH        HH       AA  AA       NN NN    NN   KK KK         YY  YY     OO           00  UU         UU  \n";
				Sleep(20);
				cout<< "     TT	      HH________HH      AA____AA      NN  NN   NN   KKKK           YYYY      OO           00  UU         UU  \n";
				Sleep(20);
				cout<< "     TT       HHHHHHHHHHHH     AAAAAAAAAA     NN   NN  NN   KKKK    ====    YY       OO           00  UU         UU  \n";
				Sleep(20);
				cout<< "     TT       HH        HH    AA        AA    NN    NN NN   KK KK   ====    YY       OO           00  UU         UU  \n";
				Sleep(20);
				cout<< "     TT       HH        HH   AA          AA   NN     NNNN   KK  KK          YY        O0_________00   UUU_______UUU  \n";
				Sleep(20);
				cout<< "     TT       HH        HH  AA            AA  NN       NN   KK   KKK        YY          000000000       UUUUUUUUU    \n";
						cout << "Thank you for ordering visit again";
					}
					else
					{
						cout << "program Coming to an end...";
					}
				}
				else if (check == 'x')
				{
					cout << "========================================" << endl;
					cout << "Ordered By: ";
					cout << user << endl;
					cout << "Table No:";
					cout << table_no << endl;
					cout << "========================================" << endl;

					cout << "Your thoughts on this food" << endl;
					cin >> review;
					cout << "review" << endl;

					cout<<"\n\n\n";
				cout<< "TTTTTTTTTTTT  HH        HH         AA         NN       NN   KK   KKK    YY      YY      000000000     UU         UU  \n";
				Sleep(20); //Sleep pauses the program for certain time... here for 20 ms
				cout<< "     TT       HH        HH        AAAA        NNNN     NN   KK  KK       YY    YY     O0         00   UU         UU  \n";
				Sleep(20);
				cout<< "     TT       HH        HH       AA  AA       NN NN    NN   KK KK         YY  YY     OO           00  UU         UU  \n";
				Sleep(20);
				cout<< "     TT	      HH________HH      AA____AA      NN  NN   NN   KKKK           YYYY      OO           00  UU         UU  \n";
				Sleep(20);
				cout<< "     TT       HHHHHHHHHHHH     AAAAAAAAAA     NN   NN  NN   KKKK    ====    YY       OO           00  UU         UU  \n";
				Sleep(20);
				cout<< "     TT       HH        HH    AA        AA    NN    NN NN   KK KK   ====    YY       OO           00  UU         UU  \n";
				Sleep(20);
				cout<< "     TT       HH        HH   AA          AA   NN     NNNN   KK  KK          YY        O0_________00   UUU_______UUU  \n";
				Sleep(20);
				cout<< "     TT       HH        HH  AA            AA  NN       NN   KK   KKK        YY          000000000       UUUUUUUUU    \n";
				}
				else
				{
					cout << "Order gone wrong";
				}
			}
			else if (check == 'x')
			{
				cout << "========================================" << endl;
				cout << "Ordered By: ";
				cout << user << endl;
				cout << "Table No:";
				cout << table_no << endl;
				cout << "========================================" << endl;

				cout << "Your thoughts on this food" << endl;
				cin >> review;
				cout << "review" << endl;

				cout<<"\n\n\n";
				cout<< "TTTTTTTTTTTT  HH        HH         AA         NN       NN   KK   KKK    YY      YY      000000000     UU         UU  \n";
				Sleep(20); //Sleep pauses the program for certain time... here for 20 ms
				cout<< "     TT       HH        HH        AAAA        NNNN     NN   KK  KK       YY    YY     O0         00   UU         UU  \n";
				Sleep(20);
				cout<< "     TT       HH        HH       AA  AA       NN NN    NN   KK KK         YY  YY     OO           00  UU         UU  \n";
				Sleep(20);
				cout<< "     TT	      HH________HH      AA____AA      NN  NN   NN   KKKK           YYYY      OO           00  UU         UU  \n";
				Sleep(20);
				cout<< "     TT       HHHHHHHHHHHH     AAAAAAAAAA     NN   NN  NN   KKKK    ====    YY       OO           00  UU         UU  \n";
				Sleep(20);
				cout<< "     TT       HH        HH    AA        AA    NN    NN NN   KK KK   ====    YY       OO           00  UU         UU  \n";
				Sleep(20);
				cout<< "     TT       HH        HH   AA          AA   NN     NNNN   KK  KK          YY        O0_________00   UUU_______UUU  \n";
				Sleep(20);
				cout<< "     TT       HH        HH  AA            AA  NN       NN   KK   KKK        YY          000000000       UUUUUUUUU    \n";
			}
			else
			{
				cout << "Order gone wrong";
			}
		}
		else if (check == 'x')
		{
			cout << "========================================" << endl;
			cout << "Ordered By: ";
			cout << user << endl;
			cout << "Table No:";
			cout << table_no << endl;
			cout << "========================================" << endl;

			cout << "Your thoughts on this food" << endl;
			cin >> review;
			cout << "review" << endl;

			cout<<"\n\n\n";
				cout<< "TTTTTTTTTTTT  HH        HH         AA         NN       NN   KK   KKK    YY      YY      000000000     UU         UU  \n";
				Sleep(20); //Sleep pauses the program for certain time... here for 20 ms
				cout<< "     TT       HH        HH        AAAA        NNNN     NN   KK  KK       YY    YY     O0         00   UU         UU  \n";
				Sleep(20);
				cout<< "     TT       HH        HH       AA  AA       NN NN    NN   KK KK         YY  YY     OO           00  UU         UU  \n";
				Sleep(20);
				cout<< "     TT	      HH________HH      AA____AA      NN  NN   NN   KKKK           YYYY      OO           00  UU         UU  \n";
				Sleep(20);
				cout<< "     TT       HHHHHHHHHHHH     AAAAAAAAAA     NN   NN  NN   KKKK    ====    YY       OO           00  UU         UU  \n";
				Sleep(20);
				cout<< "     TT       HH        HH    AA        AA    NN    NN NN   KK KK   ====    YY       OO           00  UU         UU  \n";
				Sleep(20);
				cout<< "     TT       HH        HH   AA          AA   NN     NNNN   KK  KK          YY        O0_________00   UUU_______UUU  \n";
				Sleep(20);
				cout<< "     TT       HH        HH  AA            AA  NN       NN   KK   KKK        YY          000000000       UUUUUUUUU    \n";
		}
		else
		{
			cout << "Order gone wrong";
		}
	}
	else if (check == 'x')
	{

		cout << "========================================" << endl;
		cout << "Ordered By: ";
		cout << user << endl;
		cout << "Table No:";
		cout << table_no << endl;
		cout << "========================================" << endl;

		cout << "Your thoughts on this food" << endl;
		cin >> review;
		cout << "review" << endl;

		cout<<"\n\n\n";
				cout<< "TTTTTTTTTTTT  HH        HH         AA         NN       NN   KK   KKK    YY      YY      000000000     UU         UU  \n";
				Sleep(20); //Sleep pauses the program for certain time... here for 20 ms
				cout<< "     TT       HH        HH        AAAA        NNNN     NN   KK  KK       YY    YY     O0         00   UU         UU  \n";
				Sleep(20);
				cout<< "     TT       HH        HH       AA  AA       NN NN    NN   KK KK         YY  YY     OO           00  UU         UU  \n";
				Sleep(20);
				cout<< "     TT	      HH________HH      AA____AA      NN  NN   NN   KKKK           YYYY      OO           00  UU         UU  \n";
				Sleep(20);
				cout<< "     TT       HHHHHHHHHHHH     AAAAAAAAAA     NN   NN  NN   KKKK    ====    YY       OO           00  UU         UU  \n";
				Sleep(20);
				cout<< "     TT       HH        HH    AA        AA    NN    NN NN   KK KK   ====    YY       OO           00  UU         UU  \n";
				Sleep(20);
				cout<< "     TT       HH        HH   AA          AA   NN     NNNN   KK  KK          YY        O0_________00   UUU_______UUU  \n";
				Sleep(20);
				cout<< "     TT       HH        HH  AA            AA  NN       NN   KK   KKK        YY          000000000       UUUUUUUUU    \n";
	}
	else
	{
		cout << "Order gone wrong";
	}
getch();
	return 0;
}