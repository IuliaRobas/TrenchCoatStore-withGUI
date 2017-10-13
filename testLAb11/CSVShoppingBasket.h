#pragma once
#include "FileShoppingBasket.h"

class CSVShoppingBasket :public FileShoppingBasket
{
public:
	/*
	Writes the shopping basket to file.
	Throws: FileException - if it cannot write to file.
	*/

	//CSVShoppingBasket(std::vector<TrenchCoat> coats) { this->trenchCoats = coats; };

	void writeToFile() override;

	/*
	Displays the playlist using Notepad.
	*/
	void displayShoppingBasket() const override;
};