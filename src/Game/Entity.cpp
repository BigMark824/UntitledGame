#include <Entity.h>

namespace Game {
	Entity::Entity(const std::string& entityName) : m_strEntityName(entityName)
	{
		spdlog::info("Instantiated Entity <{}>", m_strEntityName.c_str());
	}
	Entity::~Entity() {};
}