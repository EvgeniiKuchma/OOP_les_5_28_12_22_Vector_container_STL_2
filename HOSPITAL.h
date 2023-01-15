#pragma once
#pragma once
#include <string>
#include <iostream>
#include <map>
class Hospital
{
public:
	Hospital();
	void AppPacient(const std::string& name);
	void DeletePacient(int id);
	void ConclusionPacient();

private:
	std::map <int, std::string > _patient;
	int idCount = 0;
};