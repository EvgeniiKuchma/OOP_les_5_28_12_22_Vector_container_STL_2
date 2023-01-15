#include <iostream>
#include <vector>
#include <map>
#include <string>
#include "HOSPITAL.h"
#include <set>
#include <unordered_map>
int main()
{
	setlocale(LC_ALL, "Russian");
	/*std::vector<int> vec;
	vec.push_back(5);//5
	vec.push_back(3);//5 3

	//инициализаци¤ с помощью листа инициализации
	//(initialized list)

	std::vector<std::string> vec2{ "alex", "john" };

	vec2.erase(vec2.begin() + 1); // john deleted

	//push_back 0(1) - константна¤ сложность
	//добавление в конец вектора всегда одинаковое число
	//emplace - добавление в середину 0(n) n = size [1][1][1] [2] [1][1][1], [2][1][1][1][1][1][1] - худший случай
	//erase - 0(n)


	//инвалидаци¤ итераторов
	for (std::vector<std::string>::const_iterator it = vec2.begin(); it != vec2.end(); it++)
	{
		std::cout << *it << std::endl;//разименование дл¤
		vec2.erase(it);//итератор инвалидируетс¤ так как продолжает указвать на первый элемент, а после удалени¤ первой части Alex John встает на его место в 0 позицию и т.д. по пор¤дку
	}
		std::vector<std::string>::const_iterator it = vec2.begin();//итератор ит создан до удалани¤ и после удалени¤
		//елемента инвалидируетс¤ так указывает прошлую ¤чейку пам¤ти в которой ничего нет
		vec2.erase(vec2.begin());
		//map - контейнер который содержит пары ключ значени¤ и ключ об¤зан быть уникальным
		std::map<int, std::string> mymap;
		std::map<int, std::vector<std::string>> bigMap;
		bigMap.insert({ 1, {"Alex","John"} });
			std::vector<std::string> someVec{ "Harry", "Alice" };
			bigMap.insert({ 2,someVec });
		mymap.insert({ 1,"tom" });
		mymap.insert(std::make_pair(2, "abc"));
		mymap.emplace();

		for(const auto &[key, value] : mymap)
		{
			std::cout << key << " " << value;
		}*/
	Hospital hosp;
	hosp.AppPacient("Yppy Arik");
	hosp.AppPacient("Alexx Lessli");
	hosp.AppPacient("Tod Govard");
	hosp.ConclusionPacient();
	hosp.DeletePacient(2);
	std::cout << "==================\n";
	hosp.ConclusionPacient();

	std::set<int> myset;// коллекци¤.хранит только ключи.Log2(n) - сложность map Log2(8) = 3;
	//удобно дл¤ поиска
	//unordered map
	std::unordered_map<int, std::string> umap;//не упор¤доченнна¤ мапа, она не сортируетс¤, сложность O(1)
	//худший вариант O(n), key -> Hash () -> unique_hash for key
	//hash for key value
	return 0;

}