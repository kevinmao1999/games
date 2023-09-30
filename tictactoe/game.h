// tic tac toe
// ttteena
// 9/28/2023

#ifndef TTT_GAME_H
#define TTT_GAME_H

#include <string>
#include <iostream>
#include <iomanip>
#include <windows.h>

namespace ttt
{
	// represents the tic tac toe game
	class Game
	{
	private:
		unsigned turn{}; // represents which player's turn it is (can be 0 or 1)


	public:
		/// <summary>
		/// default constructor
		/// sets size of console and calls `title()` to display title screen
		/// </summary>
		Game();

		/// <summary>
		/// displays title screen and prompts for input to start (1) or display instructions (2)
		/// </summary>
		void menu();

		/// <summary>
		/// prints title ascii art to console
		/// </summary>
		void title();

		/// <summary>
		/// displays instructions to screen, prompts any key to go back to title screen
		/// </summary>
		void instructions();
	};

}

#endif