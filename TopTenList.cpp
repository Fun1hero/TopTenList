//Manages a list of top ten hyperlinks
#include <string>
#include <iostream>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;

TopTenList::TopTenList()
{
	_list.resize(11);
}

void TopTenList::set_at(int index, Hyperlink link)
{	
	_list[index-1] = link;
}

Hyperlink TopTenList::get(int index)
{
	return _list[index];
}

void TopTenList::display_forward(){
	
	for (int i=0;i<_list.size()-1;i++){
		std::cout << i+1 << ": <a href=\"" << _list[i].url << "\">";
		std::cout << _list[i].text << "</a>" << std::endl;
	}
}
void TopTenList::display_backward(){
	
	for (int i=_list.size()-2;i>=0;i--){
		std::cout << i+ 1<< ": <a href=\"" << _list[i].url << "\">";
		std::cout << _list[i].text << "</a>" << std::endl;
	}
}