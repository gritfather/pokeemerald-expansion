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
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_1, 1
# 18 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_ABILITY_CAPSULE
# 19 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_2, 79
# 20 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferitemname STR_VAR_3, ITEM_ABILITY_PATCH
# 21 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_3, 80
# 22 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, TRUE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 23 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	switch VAR_RESULT
# 24 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 1, LittlerootTown_KelsieHouse_BallTest_3
# 25 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 79, LittlerootTown_KelsieHouse_BallTest_4
# 26 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 80, LittlerootTown_KelsieHouse_BallTest_5
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
	msgbox LittlerootTown_KelsieHouse_BallTest2_Text_0
# 37 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DREEPY
# 38 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_1, 885
# 39 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_GIBLE
# 40 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_2, 443
# 41 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_AXEW
# 42 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_3, 610
# 43 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 44 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	switch VAR_RESULT
# 45 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 885, LittlerootTown_KelsieHouse_BallTest2_3
# 56 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 443, LittlerootTown_KelsieHouse_BallTest2_4
# 59 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 610, LittlerootTown_KelsieHouse_BallTest2_5
LittlerootTown_KelsieHouse_BallTest2_1:
# 63 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 64 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 65 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	return

LittlerootTown_KelsieHouse_BallTest2_3:
# 46 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	showmonpic 885, 8, 0
# 47 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_YouSureAboutThatText, MSGBOX_YESNO
# 48 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_KelsieHouse_BallTest2_6
# 52 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	hidemonpic
# 53 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	closemessage
	end

LittlerootTown_KelsieHouse_BallTest2_4:
# 57 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	showmonpic 443, 15, 5
# 58 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call placeholder_EventScript_Gible
	goto LittlerootTown_KelsieHouse_BallTest2_1

LittlerootTown_KelsieHouse_BallTest2_5:
# 60 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	showmonpic 610, 15, 5
# 61 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call placeholder_EventScript_Axew
	goto LittlerootTown_KelsieHouse_BallTest2_1

LittlerootTown_KelsieHouse_BallTest2_6:
# 49 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call placeholder_EventScript_Dreepy
	goto LittlerootTown_KelsieHouse_BallTest2_1


placeholder_EventScript_Dreepy::
# 70 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	givemon SPECIES_DREEPY, 5
# 71 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq placeholder_EventScript_Dreepy_2
# 78 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq placeholder_EventScript_Dreepy_3
# 86 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_1
placeholder_EventScript_Dreepy_1:
	return

placeholder_EventScript_Dreepy_2:
# 72 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 73 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_0
# 74 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 75 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 76 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknamePartyMon
	goto placeholder_EventScript_Dreepy_1

placeholder_EventScript_Dreepy_3:
# 79 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 80 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_0
# 81 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 82 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 83 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknameBoxMon
	goto placeholder_EventScript_Dreepy_1


placeholder_EventScript_Gible::
# 92 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	givemon SPECIES_GIBLE, 5
# 93 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq placeholder_EventScript_Gible_2
# 100 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq placeholder_EventScript_Gible_3
# 108 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_1
placeholder_EventScript_Gible_1:
	return

placeholder_EventScript_Gible_2:
# 94 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 95 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Gible_Text_0
# 96 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 97 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 98 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknamePartyMon
	goto placeholder_EventScript_Gible_1

placeholder_EventScript_Gible_3:
# 101 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 102 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Gible_Text_0
# 103 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 104 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 105 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknameBoxMon
	goto placeholder_EventScript_Gible_1


placeholder_EventScript_Axew::
# 114 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	givemon SPECIES_AXEW, 5
# 115 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq placeholder_EventScript_Axew_2
# 122 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq placeholder_EventScript_Axew_3
# 130 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_1
placeholder_EventScript_Axew_1:
	return

placeholder_EventScript_Axew_2:
# 116 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 117 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Axew_Text_0
# 118 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 119 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 120 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknamePartyMon
	goto placeholder_EventScript_Axew_1

placeholder_EventScript_Axew_3:
# 123 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 124 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Axew_Text_0
# 125 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 126 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 127 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknameBoxMon
	goto placeholder_EventScript_Axew_1


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

LittlerootTown_KelsieHouse_BallTest2_Text_0:
# 36 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "It's a multichoice Pokeball$"

placeholder_EventScript_Dreepy_Text_0:
# 73 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "You received Dreepy$"

placeholder_EventScript_Dreepy_Text_1:
# 86 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "No more room$"

placeholder_EventScript_Gible_Text_0:
# 95 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "You received Gible$"

placeholder_EventScript_Axew_Text_0:
# 117 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "You received Axew$"

LittlerootTown_KelsieHouse_YouSureAboutThatText::
# 135 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "Are you sure about that?$"
