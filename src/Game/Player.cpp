#include "Player.h"

namespace Game {
    Player::Player(std::string playerName) : Entity("Player")
    {
        m_strPlayerName = playerName;
        spdlog::info("Player {} has been created, Entity ID: ", m_strPlayerName.c_str(), m_Id);
    }
    Player::~Player()
    {
        spdlog::info("Player {} has been destroyed", m_strPlayerName.c_str());
    }
}