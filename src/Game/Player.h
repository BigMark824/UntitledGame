#pragma once
#include "Entity.h"
namespace Game {
	class Player : Entity
	{
		protected:
			std::string m_strPlayerName;
			int m_health;
		public:
			Player(std::string playerName);
			~Player();
		};
}
