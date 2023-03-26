#include <iostream>
using namespace std;
class Armor {
private:
	uint16_t  CharacterArmorLevel;
	uint16_t  CharacterArmorHealth;
	uint16_t  CharacterArmorMagicPoints;
	uint16_t  CharacterArmorSpeed;
	uint16_t  CharacterArmorStrength;
	uint16_t  CharacterArmorAttack;
	uint16_t  CharacterArmorManaPoints;
	uint16_t  CharacterArmorIntelligence;
	uint16_t  CharacterArmorJobID;
	std::string CharacterArmorName;
	std::string CharacterArmorJobName;
public:
	Armor() {
		CharacterArmorLevel = 0;
		CharacterArmorHealth = 0;
		CharacterArmorMagicPoints = 0;
		CharacterArmorSpeed = 0;
		CharacterArmorStrength = 0;
		CharacterArmorAttack = 0;
		CharacterArmorManaPoints = 0;
		CharacterArmorIntelligence = 0;
		CharacterArmorName = "Default";
		CharacterArmorJobID = 0;
		CharacterArmorJobName = "Default";
	}

	uint16_t GetCharacterArmorLevel();
	uint16_t GetCharacterArmorHealth();
	uint16_t GetCharacterArmorMagicPoints();
	uint16_t GetCharacterArmorSpeed();
	uint16_t GetCharacterArmorStrength();
	uint16_t GetCharacterArmorAttack();
	uint16_t GetCharacterArmorManaPoints();
	uint16_t GetCharacterArmorIntelligence();
	uint16_t GetCharacterArmorJobID();
	void SetCharacterArmorJobID(uint16_t);
	void SetCharacterArmorJobName(std::string);
	std::string GetCharacterArmorName();
	void SetJobArmorAttributes(uint16_t);
	std::string GetCharacterArmorJobName();


};
