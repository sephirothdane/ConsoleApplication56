#include "character.h";

uint16_t Character::GetCharacterLevel() {
	return CharacterLevel;
}
uint16_t Character::GetCharacterHealth() {
	return CharacterHealth;
}
uint16_t Character::GetCharacterMagicPoints() {
	return CharacterMagicPoints;
}
uint16_t Character::GetCharacterSpeed() {
	return CharacterSpeed;
}
uint16_t Character::GetCharacterStrength() {
	return CharacterStrength;
}
uint16_t Character::GetCharacterAttack() {
	return CharacterAttack;
}
uint16_t Character::GetCharacterManaPoints() {
	return CharacterManaPoints;
}
uint16_t Character::GetCharacterIntelligence() {
	return CharacterIntelligence;
}
uint16_t Character::GetCharacterJobID() {
	return CharacterJobID;
}
void Character::SetCharacterJobID(uint16_t job_id) {
	uint16_t jobChoice;
	std::cout << "Please choose your character's job" << std::endl;
	std::cout << "1. WARRIOR 2.WHITE MAGE 3. THIEF 4. BLACK MAGE" << std::endl;
	std::cin >> jobChoice;
	if (jobChoice == 1)
	{
		job_id = 1;
		CharacterJobID = job_id;
	}
	else if (jobChoice == 2)
	{
		job_id = 2;
		CharacterJobID = job_id;
	}
	else if (jobChoice == 3)
	{
		job_id = 3;
		CharacterJobID = job_id;
	}
	else if (jobChoice == 4)
	{
		job_id = 4;
		CharacterJobID = job_id;
	}
	else {
		std::cout << "You haven't chosen a job. Please try again." << std::endl;
		job_id = 0;
	}
}
void Character::SetCharacterJobName(std::string jobName) {
	CharacterJobName = jobName;
}
std::string Character::GetCharacterJobName() {
	return CharacterJobName;
}
void Character::SetJobAttributes(uint16_t jobAttributes_id) {
	switch (Character::GetCharacterJobID())
	{
	case 1:
		CharacterLevel =1;
		CharacterHealth += 50;
		CharacterMagicPoints += 0;
		CharacterSpeed += 2;
		CharacterStrength += 5;
		CharacterAttack += 4;
		CharacterManaPoints += 0;
		CharacterIntelligence += 0;
		CharacterJobID = 1;
	}
}
std::string Character::GetCharacterName(){
	return CharacterName;
}