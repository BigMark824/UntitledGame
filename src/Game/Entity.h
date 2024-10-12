#pragma once
#include <string>
#include <spdlog/spdlog.h>
namespace Game {
    class Entity {
    protected:
        std::string m_strEntityName;
    public:
        Entity(const std::string& entityName = "");
        virtual ~Entity();
    };
}
