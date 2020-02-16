#include <Engine.h>

class Farmary : public HiEngine::Application
{
public:
	Farmary()
	{

	}

	~Farmary()
	{

	}

};

HiEngine::Application* HiEngine::CreateApplication()
{
	return new Farmary();
}