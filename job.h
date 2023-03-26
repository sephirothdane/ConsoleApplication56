#include "character.h";
class CharacterJobs : public Character {
private:
	uint16_t JobSelectionID;
public:
	CharacterJobs() {
		JobSelectionID = 0;
	}
	void JobClassification(uint16_t);
};