from Menu import menu

base = menu()
base.addWeapons("W001", "Iron Sword", 150, "A basic sword forged from standard iron.", 15)


base.addWeapons("W002", "Flame Staff", 450, "Channeling heat, it casts powerful firebolts.", 35)


base.addWeapons("W003", "Hunter's Bow", 220, "A light wooden bow favored by woodland trackers.", 22)


base.addWeapons("W004", "Excalibur", 2500, "A legendary blade imbued with divine light.", 100)




base.addHeals("H001", "Minor Health Potion", 25, "Restores a small amount of health instantly.", 50)


base.addHeals("H002", "Greater Elixir", 150, "A potent brew that restores a large chunk of health.", 200)


base.addHeals("H003", "Cooked Steak", 40, "A hearty meal that steadily recovers health.", 80)


base.addHeals("H004", "Phoenix Feather", 500, "Completely restores health and cures status ailments.", 999)




base.addBuffs("B001", "Minor Might Potion", 30, "Temporarily increases attack power slightly.", 10)


base.addBuffs("B002", "Spicy Meatball", 75, "A fiery meal that boosts attack power.", 25)


base.addBuffs("B003", "Scroll of Berserk", 200, "Channels ancient rage to grant a massive attack bonus.", 60)


base.addBuffs("B004", "Dragon's Blood Flask", 600, "Infuses the user with draconic fury, sky-rocketing attack.", 120)




base.addDebuffs("D001", "Weakening Dust", 35, "Throws a cloud of fine dust that weakens the target's attack.", -10)


base.addDebuffs("D002", "Curse Rune", 120, "Places a hex that significantly dulls the target's offensive strength.", -30)


base.addDebuffs("D003", "Rusting Bomb", 250, "Corrodes enemy weapons on contact, crippling their physical damage.", -65)


base.addDebuffs("D004", "Orb of Exhaustion", 550, "Emits an ethereal aura that severely drains the target's raw power.", -120)

base.addItems("I001", "Rusty Key", 10, "A weathered key used to unlock simple wooden doors.")


base.addItems("I002", "Magic Ore", 100, "A glowing crystal chunk used for crafting rare gear.")


base.addItems("I003", "Ancient Scroll", 0, "A mysterious parchment written in an forgotten language.")


base.addItems("I004", "Town Portal Scroll", 50, "Instantly teleports the user back to the nearest sanctuary.")

base.addHybrids("HYB001", "Gryphon", 1500, "A fierce creature with the body of a lion and head of an eagle.", 85, 20)


base.addHybrids("HYB002", "Cyber Sedan", 32000, "Dual-engine electric and hydrogen eco-sedan.", 220, 15)


base.addHybrids("HYB003", "Flame Blade", 850, "Enchanted longsword dealing both physical and fire damage.", 60, 15)


base.addHybrids("HYB004", "Scrap Drone", 250, "A lightweight hybrid drone assembled from salvaged parts.", 30, 5)
base.storage()