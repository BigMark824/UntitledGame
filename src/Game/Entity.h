#pragma once
#include <string>
#include <atomic>
#include <spdlog/spdlog.h>

namespace Game {
    class Entity {
    protected:
        static std::atomic<int> s_nextId;
        int m_Id;
        std::string m_strEntityName;

    public:
        Entity(const std::string& entityName = "");
        virtual ~Entity();
    };
}
