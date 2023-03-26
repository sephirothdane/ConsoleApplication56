#include <iostream>
#include <string>
#include <chrono>
#include <vector>

using namespace std;

class Character {
private:
	uint16_t  CharacterLevel;
	uint16_t  CharacterHealth;
	uint16_t  CharacterMagicPoints;
	uint16_t  CharacterSpeed;
	uint16_t  CharacterStrength;
	uint16_t  CharacterAttack;
	uint16_t  CharacterManaPoints;
	uint16_t  CharacterIntelligence;
	uint16_t  CharacterJobID;
	std::string CharacterName;
	std::string CharacterJobName;
public:
	Character() {
		CharacterLevel = 0;
		CharacterHealth = 0;
		CharacterMagicPoints = 0;
		CharacterSpeed = 0;
		CharacterStrength = 0;
		CharacterAttack = 0;
		CharacterManaPoints = 0;
		CharacterIntelligence = 0;
		CharacterName = "Default";
		CharacterJobID = 0;
		CharacterJobName = "Default";
	}

	uint16_t GetCharacterLevel();
	uint16_t GetCharacterHealth();
	uint16_t GetCharacterMagicPoints();
	uint16_t GetCharacterSpeed();
	uint16_t GetCharacterStrength();
	uint16_t GetCharacterAttack();
	uint16_t GetCharacterManaPoints();
	uint16_t GetCharacterIntelligence();
	uint16_t GetCharacterJobID();
	void SetCharacterJobID(uint16_t);
	void SetCharacterJobName(std::string);
	std::string GetCharacterName();
	void SetJobAttributes(uint16_t);
	std::string GetCharacterJobName();


};