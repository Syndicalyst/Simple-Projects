#include "WerewolfAbility.hpp"

WerewolfAbility::WerewolfAbility() {
    debugPrint("Werewolf Ability created");
}
WerewolfAbility::~WerewolfAbility() {
    debugPrint("Werewolf Ability destroyed");
}

void WerewolfAbility::useAbility(Unit& unit) {
    infect(unit);
}
void WerewolfAbility::useSelfAbility(Unit& unit) {
    selfTransform(unit);
}
void WerewolfAbility::selfTransform(Unit& unit) {
    if ( !unit.isAlive() ) {
        std::cout << "Unit " << unit.getName() << " is dead" << std::endl;
    }
    
    if ( unit.getType() == UnitType::WEREWOLF ) {
        int newHp = unit.getState().getHitPointsLimit() * TRANSFORM_COEF;
        int newDmg = unit.getState().getDamage() * TRANSFORM_COEF;
        std::stringstream oldType;
        std::string oldTypeString;
        
        oldType << unit.getType();
        oldTypeString = oldType.str();
        
        unit.setAltState(&unit.getState());
        unit.setState(new WolfState(newHp, newDmg));
        unit.setType(UnitType::WOLF);
        
        std::cout << "\033[35m" << unit.getName() << " " << oldTypeString << " transformed into " << unit.getType() << "\033[30m" << std::endl;
    } else if ( unit.getType() == UnitType::WOLF ) {
        State *temp = &unit.getState();
        std::stringstream oldType;
        std::string oldTypeString;
        
        oldType << unit.getType();
        oldTypeString = oldType.str();
        
        unit.setState(&unit.getAltState());
        unit.setAltState(temp);
        unit.setType(UnitType::WEREWOLF);
        
        std::cout << "\033[35m" << unit.getName() << " " << oldTypeString  << " transformed into " << unit.getType() << "\033[30m" << std::endl;
    }
}
void WerewolfAbility::infect(Unit& unit) {
    std::cout << "\033[35m" <<  "Werewolf try to infect " << unit.getName() << " " << unit.getType() << "\033[30m" <<  std::endl;
    
    if ( !unit.isAlive() ) {
        std::cout << unit.getName() << " is dead and can't transform" << std::endl;
        return;
    } else if ( unit.getType() == UnitType::WEREWOLF ||
                unit.getType() == UnitType::WOLF ||
                unit.getType() == UnitType::VAMPIRE ) {
        std::cout << unit.getName() << " " << unit.getType() << " can't transform into Werewolf" << std::endl;
        return;
    }
    
    int newHp = unit.getState().getHitPoints();
    int newHpLimit = (int)unit.getState().getHitPointsLimit();
    int newDmg = unit.getState().getDamage();
    std::stringstream oldType;
    std::string oldTypeString;
    
    oldType << unit.getType();
    oldTypeString = oldType.str();
    
    if ( isSpellCaster(unit) ) {
        infectSpellCaster(unit);
    }
    
    unit.setType(UnitType::WEREWOLF);
    unit.setStateType(UnitType::ALIVE);
    setPoint(unit);
    
    delete(unit.getAttack());
    delete(&(unit.getState()));
    
    unit.setAttack(new WerewolfAttack());
    unit.setState(new State(newHp, newDmg));
    unit.setAbility(new WerewolfAbility());
    
    std::cout << "\033[35m" << unit.getName() << " " << oldTypeString << " transformed into Werewolf" << "\033[30m" << std::endl;
}

void WerewolfAbility::infectSpellCaster(Unit& unit) {
    SpellCaster &spellCaster = dynamic_cast<SpellCaster&>(unit);
    spellCaster.setCantCast();
}

void WerewolfAbility::setPoint(Unit& unit) {
    Point point = unit.getLocation().getPoint();
    std::map<Point,char> &occupiedLocations = unit.getLocation().getOccupiedLocations();
    occupiedLocations.at(point) = unit.typeToChar(unit.getType());
}