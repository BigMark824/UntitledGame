#include <Entity.h>

namespace Game {
	std::atomic<int> Entity::s_nextId(1);
	Entity::Entity(const std::string& entityName) : m_strEntityName(entityName), m_Id(s_nextId.fetch_add(1))
	{
		spdlog::info("Instantiated Entity: <{}>, ID: {}", m_strEntityName.c_str(), m_Id);
	}
	Entity::~Entity() {};
}