#include "Menu.cpp"

int main(){
    menu base = menu();
    // Example 1: Starter Sword
    base.AddWeapon("W001", "Iron Sword", 150, "A basic sword forged from standard iron.", 15);

// Example 2: Magic Staff
    base.AddWeapon("W002", "Flame Staff", 450, "Channeling heat, it casts powerful firebolts.", 35);

// Example 3: Bow
    base.AddWeapon("W003", "Hunter's Bow", 220, "A light wooden bow favored by woodland trackers.", 22);

// Example 4: Legendary Weapon
    base.AddWeapon("W004", "Excalibur", 2500, "A legendary blade imbued with divine light.", 100);



    // Example 1: Basic Health Potion
base.AddUsableHeal("H001", "Minor Health Potion", 25, "Restores a small amount of health instantly.", 50);

// Example 2: High-tier Potion
base.AddUsableHeal("H002", "Greater Elixir", 150, "A potent brew that restores a large chunk of health.", 200);

// Example 3: Food Item
base.AddUsableHeal("H003", "Cooked Steak", 40, "A hearty meal that steadily recovers health.", 80);

// Example 4: Full Restore Item
base.AddUsableHeal("H004", "Phoenix Feather", 500, "Completely restores health and cures status ailments.", 999);



// Example 1: Basic Attack Elixir
base.AddUsableBuff("B001", "Minor Might Potion", 30, "Temporarily increases attack power slightly.", 10);

// Example 2: Food Buff
base.AddUsableBuff("B002", "Spicy Meatball", 75, "A fiery meal that boosts attack power.", 25);

// Example 3: Magic Scroll
base.AddUsableBuff("B003", "Scroll of Berserk", 200, "Channels ancient rage to grant a massive attack bonus.", 60);

// Example 4: Legendary Flask
base.AddUsableBuff("B004", "Dragon's Blood Flask", 600, "Infuses the user with draconic fury, sky-rocketing attack.", 120);



// Example 1: Basic Throwing Flask
base.AddUsableDebuff("D001", "Weakening Dust", 35, "Throws a cloud of fine dust that weakens the target's attack.", -10);

// Example 2: Magic Trap / Rune
base.AddUsableDebuff("D002", "Curse Rune", 120, "Places a hex that significantly dulls the target's offensive strength.", -30);

// Example 3: Alchemical Grenade
base.AddUsableDebuff("D003", "Rusting Bomb", 250, "Corrodes enemy weapons on contact, crippling their physical damage.", -65);

// Example 4: Legendary Relic
base.AddUsableDebuff("D004", "Orb of Exhaustion", 550, "Emits an ethereal aura that severely drains the target's raw power.", -120);
// Example 1: Basic Key
base.AddItem("I001", "Rusty Key", 10, "A weathered key used to unlock simple wooden doors.");

// Example 2: Crafting Material
base.AddItem("I002", "Magic Ore", 100, "A glowing crystal chunk used for crafting rare gear.");

// Example 3: Quest Item
base.AddItem("I003", "Ancient Scroll", 0, "A mysterious parchment written in an forgotten language.");

// Example 4: Teleport / Tool
base.AddItem("I004", "Town Portal Scroll", 50, "Instantly teleports the user back to the nearest sanctuary.");
// Example 1: Basic Hybrid Character/Item
base.AddHybrid("HYB001", "Gryphon", 1500, "A fierce creature with the body of a lion and head of an eagle.", 85, 20);

// Example 2: Hybrid Vehicle
base.AddHybrid("HYB002", "Cyber Sedan", 32000, "Dual-engine electric and hydrogen eco-sedan.", 220, 15);

// Example 3: Hybrid Weapon/Equipment
base.AddHybrid("HYB003", "Flame Blade", 850, "Enchanted longsword dealing both physical and fire damage.", 60, 15);

// Example 4: Budget / Starter Hybrid
base.AddHybrid("HYB004", "Scrap Drone", 250, "A lightweight hybrid drone assembled from salvaged parts.", 30, 5);
base.storage();

    return 0;
}