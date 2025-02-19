LittlerootTown_KelsieHouse_MapScripts::
	.byte 0


LittlerootTown_KelsieHouse_Kelsie::
# 4 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	lockall
# 5 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	faceplayer
# 6 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_Kelsie_Text_0
# 7 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	waitmessage
# 8 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end


LittlerootTown_KelsieHouse_BallTest::
# 13 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	lock
# 14 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	faceplayer
# 15 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_BallTest_Text_0
# 16 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_POKE_BALL
# 17 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_1, 0
# 18 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_ABILITY_CAPSULE
# 19 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_2, 1
# 20 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferitemname STR_VAR_3, ITEM_ABILITY_PATCH
# 21 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_3, 2
# 22 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE
# 23 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	switch VAR_RESULT
# 24 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 0, LittlerootTown_KelsieHouse_BallTest_3
# 25 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 1, LittlerootTown_KelsieHouse_BallTest_4
# 26 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 2, LittlerootTown_KelsieHouse_BallTest_5
LittlerootTown_KelsieHouse_BallTest_1:
# 28 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 29 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 30 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	return

LittlerootTown_KelsieHouse_BallTest_3:
# 24 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	giveitem ITEM_POKE_BALL
	goto LittlerootTown_KelsieHouse_BallTest_1

LittlerootTown_KelsieHouse_BallTest_4:
# 25 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
	goto LittlerootTown_KelsieHouse_BallTest_1

LittlerootTown_KelsieHouse_BallTest_5:
# 26 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	giveitem ITEM_ABILITY_PATCH
	goto LittlerootTown_KelsieHouse_BallTest_1


LittlerootTown_KelsieHouse_BallTest2::
# 34 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	lock
# 35 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	faceplayer
# 36 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_BallTest_Text_0
# 37 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 38 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	switch VAR_RESULT
# 39 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 0, LittlerootTown_KelsieHouse_BallTest2_3
# 40 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 1, LittlerootTown_KelsieHouse_BallTest2_4
# 41 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 2, LittlerootTown_KelsieHouse_BallTest2_5
LittlerootTown_KelsieHouse_BallTest2_1:
# 43 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 44 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 45 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end

LittlerootTown_KelsieHouse_BallTest2_3:
# 39 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	giveitem ITEM_POKE_BALL
	goto LittlerootTown_KelsieHouse_BallTest2_1

LittlerootTown_KelsieHouse_BallTest2_4:
# 40 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
	goto LittlerootTown_KelsieHouse_BallTest2_1

LittlerootTown_KelsieHouse_BallTest2_5:
# 41 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	giveitem ITEM_ABILITY_PATCH
	goto LittlerootTown_KelsieHouse_BallTest2_1


placeholder_EventScript::
# 50 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	givemon SPECIES_DREEPY, 5
# 51 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq placeholder_EventScript_1
# 58 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq placeholder_EventScript_2
# 66 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Text_1
	return

placeholder_EventScript_1:
# 52 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 53 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Text_0
# 54 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 55 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 56 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknamePartyMon
	return

placeholder_EventScript_2:
# 59 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 60 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Text_0
# 61 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 62 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 63 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_KelsieHouse_Kelsie_Text_0:
# 6 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "Hello! I'm Kelsie, and I love coffee!$"

LittlerootTown_KelsieHouse_BallTest_Text_0:
# 15 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "It's a multichoice item ball$"

LittlerootTown_KelsieHouse_BallTest_Text_1:
# 17 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "{STR_VAR_1}$"

LittlerootTown_KelsieHouse_BallTest_Text_2:
# 19 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "{STR_VAR_2}$"

LittlerootTown_KelsieHouse_BallTest_Text_3:
# 21 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "{STR_VAR_3}$"

placeholder_EventScript_Text_0:
# 53 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "You received Dreepy$"

placeholder_EventScript_Text_1:
# 66 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "No more room$"
