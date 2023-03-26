#include "armor.h";
uint16_t Armor::GetCharacterArmorLevel() {
	return CharacterArmorLevel;
}
uint16_t Armor::GetCharacterArmorHealth(){
	return CharacterArmorHealth;
}
uint16_t Armor::GetCharacterArmorMagicPoints() {
	return CharacterArmorMagicPoints;
}
uint16_t Armor::GetCharacterArmorSpeed() {
	return CharacterArmorSpeed;
}

uint16_t Armor::GetCharacterArmorStrength() {
	return CharacterArmorStrength;

}
uint16_t Armor::GetCharacterArmorAttack() {
	return CharacterArmorAttack;
}
uint16_t Armor::GetCharacterArmorManaPoints() {
	return CharacterArmorManaPoints;
}
uint16_t Armor::GetCharacterArmorIntelligence() {
	return CharacterArmorIntelligence;
}
uint16_t Armor::GetCharacterArmorJobID() {
	return CharacterArmorJobID;
}
void Armor::SetCharacterArmorJobID(uint16_t job_id) {
	CharacterArmorJobID = job_id;
}
void Armor::SetCharacterArmorJobName(std::string job_name) {
	CharacterArmorJobName = job_name;
}
std::string Armor::GetCharacterArmorName() {
	return CharacterArmorJobName;
}
void Armor::SetJobArmorAttributes(uint16_t) {
	switch (GetCharacterArmorJobID()) {
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	}
}
std::string Armor::GetCharacterArmorJobName() {
	return CharacterArmorJobName;
}