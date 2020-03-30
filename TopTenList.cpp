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
	_list.insert(_list.begin()+index, link);
}

Hyperlink TopTenList::get(int index)
{
	return _list[index];
}

void TopTenList::display_forward(){
	for (int i=0;i<_list.size();i++){
		std::cout << i <<": " << _list[i].text << std::endl;
	}
}
void TopTenList::display_vackwards(){
	for (int i=_list.size();i>0;i--){
		std::cout << i+1 <<": " << _list[i].text << std::endl;
	}
}