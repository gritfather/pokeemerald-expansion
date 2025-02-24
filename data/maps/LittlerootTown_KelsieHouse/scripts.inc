LittlerootTown_KelsieHouse_MapScripts::
# 2 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_KelsieHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LittlerootTown_KelsieHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call_if_unset KELSIE_HOUSE_BALL, LittlerootTown_KelsieHouse_SetUpBall
	return


LittlerootTown_KelsieHouse_SetUpBall::
# 8 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	goto_if_unset TALKED_TO_KELSIE, LittlerootTown_KelsieHouse_SetUpBall_3
LittlerootTown_KelsieHouse_SetUpBall_2:
# 8 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	goto_if_unset TALKED_TO_KELSIE, LittlerootTown_KelsieHouse_SetUpBall_1
	return

LittlerootTown_KelsieHouse_SetUpBall_1:
# 9 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag KELSIE_HOUSE_BALL
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
	compare VAR_TEMP_1, 2
	goto_if_ge LittlerootTown_KelsieHouse_Kelsie_1
# 19 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare KELSIE_HOUSE_BALL_GET, 1 ,
	goto_if_eq LittlerootTown_KelsieHouse_Kelsie_17
LittlerootTown_KelsieHouse_Kelsie_16:
# 29 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare KELSIE_HOUSE_BALL_GET, 1
	goto_if_eq LittlerootTown_KelsieHouse_Kelsie_3
# 34 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	goto_if_unset TALKED_TO_KELSIE, LittlerootTown_KelsieHouse_Kelsie_10
LittlerootTown_KelsieHouse_Kelsie_9:
# 34 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	goto_if_unset TALKED_TO_KELSIE, LittlerootTown_KelsieHouse_Kelsie_4
	checkitem ITEM_LEMONADE
# 0 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootTown_KelsieHouse_Kelsie_4
# 42 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	goto_if_set TALKED_TO_KELSIE, LittlerootTown_KelsieHouse_Kelsie_6
	return

LittlerootTown_KelsieHouse_Kelsie_1:
# 17 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_StillHereText, MSGBOX_NPC
	return

LittlerootTown_KelsieHouse_Kelsie_2:
# 20 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	switch KELSIE_HOUSE_MON
# 21 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 0, LittlerootTown_KelsieHouse_Kelsie_23
# 22 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 1, LittlerootTown_KelsieHouse_Kelsie_24
# 23 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 2, LittlerootTown_KelsieHouse_Kelsie_25
LittlerootTown_KelsieHouse_Kelsie_21:
# 25 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	addvar VAR_TEMP_1, 1
# 26 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end

LittlerootTown_KelsieHouse_Kelsie_3:
# 30 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_Kelsie_Text_0, MSGBOX_NPC
# 31 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end

LittlerootTown_KelsieHouse_Kelsie_4:
# 35 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	speakername LittlerootTown_KelsieHouse_Kelsie_Text_1
# 36 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_Kelsie_Text_2, MSGBOX_NPC
# 37 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	closemessage
# 38 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag TALKED_TO_KELSIE
# 39 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end

LittlerootTown_KelsieHouse_Kelsie_5:
# 43 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_Kelsie_Text_3, MSGBOX_YESNO
# 44 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_KelsieHouse_Kelsie_26
# 55 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end

LittlerootTown_KelsieHouse_Kelsie_6:
	checkitem ITEM_LEMONADE
# 0 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LittlerootTown_KelsieHouse_Kelsie_5
	return

LittlerootTown_KelsieHouse_Kelsie_10:
	checkitem ITEM_LEMONADE
# 0 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootTown_KelsieHouse_Kelsie_4
	goto LittlerootTown_KelsieHouse_Kelsie_9

LittlerootTown_KelsieHouse_Kelsie_17:
# 19 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	goto_if_set KELSIE_HOUSE_BALL, LittlerootTown_KelsieHouse_Kelsie_2
	goto LittlerootTown_KelsieHouse_Kelsie_16

LittlerootTown_KelsieHouse_Kelsie_23:
# 21 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_Dreepy, MSGBOX_NPC
	goto LittlerootTown_KelsieHouse_Kelsie_21

LittlerootTown_KelsieHouse_Kelsie_24:
# 22 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_Gible, MSGBOX_NPC
	goto LittlerootTown_KelsieHouse_Kelsie_21

LittlerootTown_KelsieHouse_Kelsie_25:
# 23 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_Axew, MSGBOX_NPC
	goto LittlerootTown_KelsieHouse_Kelsie_21

LittlerootTown_KelsieHouse_Kelsie_26:
# 45 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeitem ITEM_LEMONADE
# 46 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	clearflag KELSIE_HOUSE_BALL
# 47 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	addobject 2
# 48 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setvar KELSIE_HOUSE_BALL_GET, 1
# 49 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_Kelsie_Text_0, MSGBOX_AUTOCLOSE
# 50 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	waitmessage
# 51 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end


LittlerootTown_KelsieHouse_BallTest::
# 67 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	lock
# 68 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	faceplayer
# 69 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_BallTest_Text_0
# 70 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_POKE_BALL
# 71 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_1, 1
# 72 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_ABILITY_CAPSULE
# 73 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_2, 79
# 74 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferitemname STR_VAR_3, ITEM_ABILITY_PATCH
# 75 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_3, 80
# 76 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, TRUE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 77 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	switch VAR_RESULT
# 78 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 1, LittlerootTown_KelsieHouse_BallTest_3
# 79 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 79, LittlerootTown_KelsieHouse_BallTest_4
# 80 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 80, LittlerootTown_KelsieHouse_BallTest_5
LittlerootTown_KelsieHouse_BallTest_1:
# 82 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 83 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag KELSIE_HOUSE_BALL
# 84 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end

LittlerootTown_KelsieHouse_BallTest_3:
# 78 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	giveitem ITEM_POKE_BALL
	goto LittlerootTown_KelsieHouse_BallTest_1

LittlerootTown_KelsieHouse_BallTest_4:
# 79 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
	goto LittlerootTown_KelsieHouse_BallTest_1

LittlerootTown_KelsieHouse_BallTest_5:
# 80 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	giveitem ITEM_ABILITY_PATCH
	goto LittlerootTown_KelsieHouse_BallTest_1


LittlerootTown_KelsieHouse_BallTest2::
# 89 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	lock
# 90 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	faceplayer
# 91 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_BallTest_Text_0
# 92 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DREEPY
# 93 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_1, 885
# 94 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_GIBLE
# 95 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_2, 443
# 96 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_AXEW
# 97 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_3, 610
# 98 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 99 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	switch VAR_RESULT
# 100 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 885, LittlerootTown_KelsieHouse_BallTest2_3
# 111 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 443, LittlerootTown_KelsieHouse_BallTest2_4
# 122 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 610, LittlerootTown_KelsieHouse_BallTest2_5
LittlerootTown_KelsieHouse_BallTest2_1:
# 134 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 135 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag KELSIE_HOUSE_BALL
# 136 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end

LittlerootTown_KelsieHouse_BallTest2_3:
# 101 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	showmonpic 885, 9, 3
# 102 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_YouSureAboutThatText, MSGBOX_YESNO
# 103 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_KelsieHouse_BallTest2_6
# 107 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	hidemonpic
# 108 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	closemessage
	end

LittlerootTown_KelsieHouse_BallTest2_4:
# 112 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	showmonpic 443, 9, 3
# 113 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_YouSureAboutThatText, MSGBOX_YESNO
# 114 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_KelsieHouse_BallTest2_9
# 118 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	hidemonpic
# 119 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	closemessage
	end

LittlerootTown_KelsieHouse_BallTest2_5:
# 123 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	showmonpic 610, 9, 3
# 124 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_YouSureAboutThatText, MSGBOX_YESNO
# 125 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_KelsieHouse_BallTest2_12
# 129 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	hidemonpic
# 130 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	closemessage
	end

LittlerootTown_KelsieHouse_BallTest2_6:
# 104 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call placeholder_EventScript_Dreepy
	goto LittlerootTown_KelsieHouse_BallTest2_1

LittlerootTown_KelsieHouse_BallTest2_9:
# 115 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call placeholder_EventScript_Gible
	goto LittlerootTown_KelsieHouse_BallTest2_1

LittlerootTown_KelsieHouse_BallTest2_12:
# 126 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call placeholder_EventScript_Axew
	goto LittlerootTown_KelsieHouse_BallTest2_1


placeholder_EventScript_Dreepy::
# 142 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	givemon SPECIES_DREEPY, 5
# 143 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq placeholder_EventScript_Dreepy_2
# 151 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq placeholder_EventScript_Dreepy_3
# 160 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_1
placeholder_EventScript_Dreepy_1:
	return

placeholder_EventScript_Dreepy_2:
# 144 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 145 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_0
# 146 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 147 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setvar KELSIE_HOUSE_MON, 0
# 148 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag KELSIE_HOUSE_BALL
# 149 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknamePartyMon
	goto placeholder_EventScript_Dreepy_1

placeholder_EventScript_Dreepy_3:
# 152 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 153 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_0
# 154 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 155 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setvar KELSIE_HOUSE_MON, 0
# 156 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag KELSIE_HOUSE_BALL
# 157 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknameBoxMon
	goto placeholder_EventScript_Dreepy_1


placeholder_EventScript_Gible::
# 166 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	givemon SPECIES_GIBLE, 5
# 167 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq placeholder_EventScript_Gible_2
# 175 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq placeholder_EventScript_Gible_3
# 184 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_1
placeholder_EventScript_Gible_1:
	return

placeholder_EventScript_Gible_2:
# 168 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 169 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Gible_Text_0
# 170 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 171 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setvar KELSIE_HOUSE_MON, 1
# 172 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag KELSIE_HOUSE_BALL
# 173 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknamePartyMon
	goto placeholder_EventScript_Gible_1

placeholder_EventScript_Gible_3:
# 176 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 177 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Gible_Text_0
# 178 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 179 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setvar KELSIE_HOUSE_MON, 1
# 180 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag KELSIE_HOUSE_BALL
# 181 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknameBoxMon
	goto placeholder_EventScript_Gible_1


placeholder_EventScript_Axew::
# 190 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	givemon SPECIES_AXEW, 5
# 191 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq placeholder_EventScript_Axew_2
# 199 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq placeholder_EventScript_Axew_3
# 208 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_1
placeholder_EventScript_Axew_1:
	return

placeholder_EventScript_Axew_2:
# 192 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 193 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Axew_Text_0
# 194 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 195 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setvar KELSIE_HOUSE_MON, 2
# 196 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag KELSIE_HOUSE_BALL
# 197 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknamePartyMon
	goto placeholder_EventScript_Axew_1

placeholder_EventScript_Axew_3:
# 200 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 201 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Axew_Text_0
# 202 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 203 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setvar KELSIE_HOUSE_MON, 2
# 204 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag KELSIE_HOUSE_BALL
# 205 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknameBoxMon
	goto placeholder_EventScript_Axew_1


LittlerootTown_KelsieHouse_Kelsie_Text_0:
# 30 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "Go ahead and choose a Pokemon from\n"
	.string "that ball.$"

LittlerootTown_KelsieHouse_Kelsie_Text_1:
# 35 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "Kelsie$"

LittlerootTown_KelsieHouse_Kelsie_Text_2:
# 36 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "Hello! I'm Kelsie, and I love lemonade.\n"
	.string "If you bring me a lemonade, I'll give\l"
	.string "you a POKEMON.$"

LittlerootTown_KelsieHouse_Kelsie_Text_3:
# 43 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "Oh! You brought me a Lemonade?$"

LittlerootTown_KelsieHouse_BallTest_Text_0:
# 69 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "Woah! There's more than one Pokemon\n"
	.string "in here$"

LittlerootTown_KelsieHouse_BallTest_Text_1:
# 71 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "{STR_VAR_1}$"

LittlerootTown_KelsieHouse_BallTest_Text_2:
# 73 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "{STR_VAR_2}$"

LittlerootTown_KelsieHouse_BallTest_Text_3:
# 75 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "{STR_VAR_3}$"

placeholder_EventScript_Dreepy_Text_0:
# 145 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "You received Dreepy$"

placeholder_EventScript_Dreepy_Text_1:
# 160 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "No more room$"

placeholder_EventScript_Gible_Text_0:
# 169 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "You received Gible$"

placeholder_EventScript_Axew_Text_0:
# 193 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "You received Axew$"

CommonName_Text_Kelsie::
# 62 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "Kelsie$"

LittlerootTown_KelsieHouse_YouSureAboutThatText::
# 213 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "Are you sure about that?$"

LittlerootTown_KelsieHouse_Dreepy::
# 217 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "I hope you're giving Dreepy lots of\n"
	.string "Lemonades!$"

LittlerootTown_KelsieHouse_Gible::
# 221 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "I hope you're giving Gible lots of\n"
	.string "Lemonades!$"

LittlerootTown_KelsieHouse_Axew::
# 225 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "I hope you're giving Axew lots of\n"
	.string "Lemonades!$"

LittlerootTown_KelsieHouse_StillHereText::
# 229 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "I mean this in the nicest way\n"
	.string "possible. Why are you still here?$"
