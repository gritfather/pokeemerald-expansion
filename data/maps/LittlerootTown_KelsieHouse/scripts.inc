LittlerootTown_KelsieHouse_MapScripts::
# 2 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_KelsieHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LittlerootTown_KelsieHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call_if_unset FLAG_UNUSED_0x020, LittlerootTown_KelsieHouse_SetUpBall
	return


LittlerootTown_KelsieHouse_SetUpBall::
# 8 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, LittlerootTown_KelsieHouse_SetUpBall_3
LittlerootTown_KelsieHouse_SetUpBall_2:
# 8 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, LittlerootTown_KelsieHouse_SetUpBall_1
	return

LittlerootTown_KelsieHouse_SetUpBall_1:
# 9 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
	return

LittlerootTown_KelsieHouse_SetUpBall_3:
	checkitem ITEM_LEMONADE
# 0 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootTown_KelsieHouse_SetUpBall_1
	goto LittlerootTown_KelsieHouse_SetUpBall_2


LittlerootTown_KelsieHouse_Kelsie::
# 14 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	lockall
# 15 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	faceplayer
# 16 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_UNUSED_0x4091, 1 ,
	goto_if_eq LittlerootTown_KelsieHouse_Kelsie_16
LittlerootTown_KelsieHouse_Kelsie_15:
# 21 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_UNUSED_0x4091, 1
	goto_if_eq LittlerootTown_KelsieHouse_Kelsie_2
# 26 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, LittlerootTown_KelsieHouse_Kelsie_9
LittlerootTown_KelsieHouse_Kelsie_8:
# 26 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, LittlerootTown_KelsieHouse_Kelsie_3
	checkitem ITEM_LEMONADE
# 0 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootTown_KelsieHouse_Kelsie_3
# 33 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	goto_if_set FLAG_UNUSED_0x021, LittlerootTown_KelsieHouse_Kelsie_5
	return

LittlerootTown_KelsieHouse_Kelsie_1:
# 17 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_Kelsie_Text_0, MSGBOX_AUTOCLOSE
# 18 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end

LittlerootTown_KelsieHouse_Kelsie_2:
# 22 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_Kelsie_Text_1, MSGBOX_AUTOCLOSE
# 23 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end

LittlerootTown_KelsieHouse_Kelsie_3:
# 27 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_Kelsie_Text_2
# 28 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	waitmessage
# 29 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 30 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end

LittlerootTown_KelsieHouse_Kelsie_4:
# 34 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_Kelsie_Text_3, MSGBOX_YESNO
# 35 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_KelsieHouse_Kelsie_19
# 46 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end

LittlerootTown_KelsieHouse_Kelsie_5:
	checkitem ITEM_LEMONADE
# 0 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LittlerootTown_KelsieHouse_Kelsie_4
	return

LittlerootTown_KelsieHouse_Kelsie_9:
	checkitem ITEM_LEMONADE
# 0 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootTown_KelsieHouse_Kelsie_3
	goto LittlerootTown_KelsieHouse_Kelsie_8

LittlerootTown_KelsieHouse_Kelsie_16:
# 16 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, LittlerootTown_KelsieHouse_Kelsie_1
	goto LittlerootTown_KelsieHouse_Kelsie_15

LittlerootTown_KelsieHouse_Kelsie_19:
# 36 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeitem ITEM_LEMONADE
# 37 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	clearflag FLAG_UNUSED_0x020
# 38 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	addobject 2
# 39 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	addvar VAR_UNUSED_0x4091, 1
# 40 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_Kelsie_Text_1
# 41 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	waitmessage
# 42 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end


LittlerootTown_KelsieHouse_BallTest::
# 55 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	lock
# 56 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	faceplayer
# 57 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_BallTest_Text_0
# 58 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_POKE_BALL
# 59 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_1, 1
# 60 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_ABILITY_CAPSULE
# 61 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_2, 79
# 62 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferitemname STR_VAR_3, ITEM_ABILITY_PATCH
# 63 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_3, 80
# 64 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, TRUE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 65 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	switch VAR_RESULT
# 66 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 1, LittlerootTown_KelsieHouse_BallTest_3
# 67 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 79, LittlerootTown_KelsieHouse_BallTest_4
# 68 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 80, LittlerootTown_KelsieHouse_BallTest_5
LittlerootTown_KelsieHouse_BallTest_1:
# 70 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 71 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 72 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end

LittlerootTown_KelsieHouse_BallTest_3:
# 66 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	giveitem ITEM_POKE_BALL
	goto LittlerootTown_KelsieHouse_BallTest_1

LittlerootTown_KelsieHouse_BallTest_4:
# 67 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
	goto LittlerootTown_KelsieHouse_BallTest_1

LittlerootTown_KelsieHouse_BallTest_5:
# 68 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	giveitem ITEM_ABILITY_PATCH
	goto LittlerootTown_KelsieHouse_BallTest_1


LittlerootTown_KelsieHouse_BallTest2::
# 77 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	lock
# 78 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	faceplayer
# 79 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_BallTest2_Text_0
# 80 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DREEPY
# 81 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_1, 885
# 82 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_GIBLE
# 83 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_2, 443
# 84 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_AXEW
# 85 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_3, 610
# 86 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 87 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	switch VAR_RESULT
# 88 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 885, LittlerootTown_KelsieHouse_BallTest2_3
# 99 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 443, LittlerootTown_KelsieHouse_BallTest2_4
# 110 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 610, LittlerootTown_KelsieHouse_BallTest2_5
LittlerootTown_KelsieHouse_BallTest2_1:
# 122 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 123 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 124 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end

LittlerootTown_KelsieHouse_BallTest2_3:
# 89 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	showmonpic 885, 8, 0
# 90 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_YouSureAboutThatText, MSGBOX_YESNO
# 91 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_KelsieHouse_BallTest2_6
# 95 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	hidemonpic
# 96 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	closemessage
	end

LittlerootTown_KelsieHouse_BallTest2_4:
# 100 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	showmonpic 443, 8, 0
# 101 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_YouSureAboutThatText, MSGBOX_YESNO
# 102 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_KelsieHouse_BallTest2_9
# 106 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	hidemonpic
# 107 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	closemessage
	end

LittlerootTown_KelsieHouse_BallTest2_5:
# 111 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	showmonpic 610, 8, 0
# 112 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_YouSureAboutThatText, MSGBOX_YESNO
# 113 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_KelsieHouse_BallTest2_12
# 117 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	hidemonpic
# 118 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	closemessage
	end

LittlerootTown_KelsieHouse_BallTest2_6:
# 92 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call placeholder_EventScript_Dreepy
	goto LittlerootTown_KelsieHouse_BallTest2_1

LittlerootTown_KelsieHouse_BallTest2_9:
# 103 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call placeholder_EventScript_Gible
	goto LittlerootTown_KelsieHouse_BallTest2_1

LittlerootTown_KelsieHouse_BallTest2_12:
# 114 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call placeholder_EventScript_Axew
	goto LittlerootTown_KelsieHouse_BallTest2_1


placeholder_EventScript_Dreepy::
# 130 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	givemon SPECIES_DREEPY, 5
# 131 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq placeholder_EventScript_Dreepy_2
# 138 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq placeholder_EventScript_Dreepy_3
# 146 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_1
placeholder_EventScript_Dreepy_1:
	return

placeholder_EventScript_Dreepy_2:
# 132 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 133 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_0
# 134 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 135 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 136 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknamePartyMon
	goto placeholder_EventScript_Dreepy_1

placeholder_EventScript_Dreepy_3:
# 139 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 140 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_0
# 141 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 142 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 143 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknameBoxMon
	goto placeholder_EventScript_Dreepy_1


placeholder_EventScript_Gible::
# 152 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	givemon SPECIES_GIBLE, 5
# 153 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq placeholder_EventScript_Gible_2
# 160 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq placeholder_EventScript_Gible_3
# 168 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_1
placeholder_EventScript_Gible_1:
	return

placeholder_EventScript_Gible_2:
# 154 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 155 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Gible_Text_0
# 156 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 157 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 158 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknamePartyMon
	goto placeholder_EventScript_Gible_1

placeholder_EventScript_Gible_3:
# 161 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 162 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Gible_Text_0
# 163 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 164 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 165 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknameBoxMon
	goto placeholder_EventScript_Gible_1


placeholder_EventScript_Axew::
# 174 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	givemon SPECIES_AXEW, 5
# 175 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq placeholder_EventScript_Axew_2
# 182 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq placeholder_EventScript_Axew_3
# 190 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_1
placeholder_EventScript_Axew_1:
	return

placeholder_EventScript_Axew_2:
# 176 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 177 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Axew_Text_0
# 178 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 179 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 180 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknamePartyMon
	goto placeholder_EventScript_Axew_1

placeholder_EventScript_Axew_3:
# 183 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 184 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Axew_Text_0
# 185 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 186 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 187 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknameBoxMon
	goto placeholder_EventScript_Axew_1


LittlerootTown_KelsieHouse_Kelsie_Text_0:
# 17 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "I really like lemonade. I like it a lot!$"

LittlerootTown_KelsieHouse_Kelsie_Text_1:
# 22 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "Go ahead and choose one from that ball.$"

LittlerootTown_KelsieHouse_Kelsie_Text_2:
# 27 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "Hello! I'm Kelsie, and I love lemonade. If\n"
	.string "you bring me a lemonade, I'll give you a\l"
	.string "POKEMON.$"

LittlerootTown_KelsieHouse_Kelsie_Text_3:
# 34 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "Oh! You brought me a Lemonade?$"

LittlerootTown_KelsieHouse_BallTest_Text_0:
# 57 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "It's a multichoice item ball$"

LittlerootTown_KelsieHouse_BallTest_Text_1:
# 59 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "{STR_VAR_1}$"

LittlerootTown_KelsieHouse_BallTest_Text_2:
# 61 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "{STR_VAR_2}$"

LittlerootTown_KelsieHouse_BallTest_Text_3:
# 63 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "{STR_VAR_3}$"

LittlerootTown_KelsieHouse_BallTest2_Text_0:
# 79 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "It's a multichoice Pokeball$"

placeholder_EventScript_Dreepy_Text_0:
# 133 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "You received Dreepy$"

placeholder_EventScript_Dreepy_Text_1:
# 146 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "No more room$"

placeholder_EventScript_Gible_Text_0:
# 155 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "You received Gible$"

placeholder_EventScript_Axew_Text_0:
# 177 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "You received Axew$"

LittlerootTown_KelsieHouse_YouSureAboutThatText::
# 195 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "Are you sure about that?$"
