//Manages a list of top ten hyperlinks
#include <string>
#include <iostream>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;

TopTenList::TopTenList()
{
	_list.resize(10);
}

void TopTenList::set_at(int index, Hyperlink link)
{	
	_list.resize(10); // Prevents vector from expanding on every insert
	_list.insert(_list.begin()+index, link);
}

Hyperlink TopTenList::get(int index)
{
	return _list[index];
}

void TopTenList::display_forward(){
	
	for (int i=1;i<_list.size();i++){
		std::cout << i << ": <a href=\"" << _list[i].url << "\">";
		std::cout << _list[i].text << "</a>" << std::endl;
	}
}
void TopTenList::display_backward(){
	
	for (int i=_list.size()-1;i>0;i--){
		std::cout << i+1 <<": " << _list[i].text << std::endl;
	}
}