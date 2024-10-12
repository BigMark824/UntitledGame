#include "Player.h"

namespace Game {
    Player::Player(std::string playerName) : Entity("Player")
    {
        m_strPlayerName = playerName;
        spdlog::info("Player {} has been created", m_strPlayerName.c_str());
    }
    Player::~Player()
    {
        spdlog::info("Player {} has been destroyed", m_strPlayerName.c_str());
    }
}