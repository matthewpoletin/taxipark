#include <iostream>

#include "Utilities/Log/Log.h"

#include "Taxi/Taxi.h"
#include "Taxi/TaxiManager.h"

#define OS Win

//////////////////////////////////////////////////////
void ClearScrean()
{
	#if OS==Win
	system("CLS");
	#endif
}
void ShowCommands()
{
	std::cout << "List of commands" << std::endl;
	std::cout << "list - show list of taxis" << std::endl;
	std::cout << "2. " << std::endl;
	std::cout << "q. quit " << std::endl;
}
//////////////////////////////////////////////////////

TaxiManager* g_pTM;

void Init()
{
	LOG("MainLoop", "Initializing all systems");
	g_pTM = new TaxiManager();
	system("PAUSE");
}

void Loop()
{
	ClearScrean();
	std::string input;
	bool bIsRunning = true;
	while(bIsRunning)
	{
		//ShowCommands();
		std::cin >> input;
		if (input == "list of taxis")
		{
			//g_pTM->ShowList();
		}
		else if(input == "2")
		{

		}
		else if (input == "h" || input == "help")
		{
			ShowCommands();
		}
		else if (input == "q")
		{
			std::cout << "See you soon" << std::endl;

			bIsRunning = false;
		}
		
		// fgets(Command,4,stdin);
		// if (strcmp(Command,cmd1) ==  0 )
		// {
		// 	err = 0;
		// 	printf("Number Color time\n");
		// 	for(i = 0; i <= 4; i++)
		// 	{
		// 		printf("Ñëåäóþùèé âîäèòåëü:\n");
		// 		puts(Car[i].number);
		// 		printf("      ");
		// 		puts(Car[i].color);
		// 		printf("     ");
		// 		puts(Car[i].time);
		// 	}
		// }
		// if (strcmp(Command,cmd2) ==  0 )
		// {
		// 	err = 0;
		// 	printf("2");
		//}
	};
}

void DeInit()
{
	delete g_pTM;
}

int main()
{
	Init();
	Loop();
	DeInit();

	// Taxi Car[5];
	// int n = 5;
	// int i;
	// int j;
	// int init = 0;
	// int err = 1;
	// setlocale(LC_ALL, "russian");
	// char chars[32];
	// char Command[5];
	// char cmd1[] = "see";
	// char cmd2[] = "bnd";
	// for(int i = 224, n=0; i <= 255; ++i, ++n)
	// {
	// 	chars[n] = (char) i;
	// }
	// for (int j = 0; j <= 4; j++)
	// {
	// 	for (i = 0;i<=9;i++)
	// 		Car[j].color[i] = chars[rand()%32+0];
	// 	for (i = 0;i<=5;i++)
	// 		Car[j].number[i] = chars[rand()%32+0];
	// 	for (i = 0;i<=24;i++)
	// 		Car[j].driver[i] = chars[rand()%32+0];
	// 	for (i = 0;i<=24;i++)
	// 		Car[j].adress[i] = chars[rand()%32+0];
	// 	for (i = 0;i<=29;i++)
	// 		Car[j].time[i] = 0;
	// }

	#ifdef _DEBUG
	system("PAUSE");
	#endif

	return 0;
}