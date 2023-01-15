#include "HOSPITAL.h"

Hospital::Hospital() :idCount(0) {}
void Hospital::AppPacient(const std::string& name)
{
	idCount++;
	_patient.insert({ idCount, name });
}

void Hospital::DeletePacient(int id)
{
	_patient.erase(id);
}

void Hospital::ConclusionPacient()
{
	for (const auto& [key, value] : _patient)
	{
		std::cout << key << ". " << value << '\n';
	}
}
