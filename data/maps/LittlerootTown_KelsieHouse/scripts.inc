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
# 41 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
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
	msgbox LittlerootTown_KelsieHouse_Kelsie_Text_1, MSGBOX_NPC
# 36 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	waitmessage
# 37 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag TALKED_TO_KELSIE
# 38 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end

LittlerootTown_KelsieHouse_Kelsie_5:
# 42 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_Kelsie_Text_2, MSGBOX_YESNO
# 43 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_KelsieHouse_Kelsie_26
# 54 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
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
# 44 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeitem ITEM_LEMONADE
# 45 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	clearflag KELSIE_HOUSE_BALL
# 46 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	addobject 2
# 47 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setvar KELSIE_HOUSE_BALL_GET, 1
# 48 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_Kelsie_Text_0, MSGBOX_AUTOCLOSE
# 49 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	waitmessage
# 50 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end


LittlerootTown_KelsieHouse_BallTest::
# 63 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	lock
# 64 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	faceplayer
# 65 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_BallTest_Text_0
# 66 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_POKE_BALL
# 67 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_1, 1
# 68 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_ABILITY_CAPSULE
# 69 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_2, 79
# 70 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferitemname STR_VAR_3, ITEM_ABILITY_PATCH
# 71 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_3, 80
# 72 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, TRUE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 73 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	switch VAR_RESULT
# 74 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 1, LittlerootTown_KelsieHouse_BallTest_3
# 75 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 79, LittlerootTown_KelsieHouse_BallTest_4
# 76 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 80, LittlerootTown_KelsieHouse_BallTest_5
LittlerootTown_KelsieHouse_BallTest_1:
# 78 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 79 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag KELSIE_HOUSE_BALL
# 80 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end

LittlerootTown_KelsieHouse_BallTest_3:
# 74 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	giveitem ITEM_POKE_BALL
	goto LittlerootTown_KelsieHouse_BallTest_1

LittlerootTown_KelsieHouse_BallTest_4:
# 75 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
	goto LittlerootTown_KelsieHouse_BallTest_1

LittlerootTown_KelsieHouse_BallTest_5:
# 76 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	giveitem ITEM_ABILITY_PATCH
	goto LittlerootTown_KelsieHouse_BallTest_1


LittlerootTown_KelsieHouse_BallTest2::
# 85 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	lock
# 86 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	faceplayer
# 87 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_BallTest_Text_0
# 88 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DREEPY
# 89 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_1, 885
# 90 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_GIBLE
# 91 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_2, 443
# 92 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_AXEW
# 93 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_3, 610
# 94 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 95 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	switch VAR_RESULT
# 96 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 885, LittlerootTown_KelsieHouse_BallTest2_3
# 107 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 443, LittlerootTown_KelsieHouse_BallTest2_4
# 118 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 610, LittlerootTown_KelsieHouse_BallTest2_5
LittlerootTown_KelsieHouse_BallTest2_1:
# 130 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 131 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag KELSIE_HOUSE_BALL
# 132 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end

LittlerootTown_KelsieHouse_BallTest2_3:
# 97 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	showmonpic 885, 9, 3
# 98 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_YouSureAboutThatText, MSGBOX_YESNO
# 99 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_KelsieHouse_BallTest2_6
# 103 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	hidemonpic
# 104 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	closemessage
	end

LittlerootTown_KelsieHouse_BallTest2_4:
# 108 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	showmonpic 443, 9, 3
# 109 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_YouSureAboutThatText, MSGBOX_YESNO
# 110 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_KelsieHouse_BallTest2_9
# 114 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	hidemonpic
# 115 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	closemessage
	end

LittlerootTown_KelsieHouse_BallTest2_5:
# 119 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	showmonpic 610, 9, 3
# 120 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_YouSureAboutThatText, MSGBOX_YESNO
# 121 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_KelsieHouse_BallTest2_12
# 125 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	hidemonpic
# 126 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	closemessage
	end

LittlerootTown_KelsieHouse_BallTest2_6:
# 100 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call placeholder_EventScript_Dreepy
	goto LittlerootTown_KelsieHouse_BallTest2_1

LittlerootTown_KelsieHouse_BallTest2_9:
# 111 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call placeholder_EventScript_Gible
	goto LittlerootTown_KelsieHouse_BallTest2_1

LittlerootTown_KelsieHouse_BallTest2_12:
# 122 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call placeholder_EventScript_Axew
	goto LittlerootTown_KelsieHouse_BallTest2_1


placeholder_EventScript_Dreepy::
# 138 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	givemon SPECIES_DREEPY, 5
# 139 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq placeholder_EventScript_Dreepy_2
# 147 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq placeholder_EventScript_Dreepy_3
# 156 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_1
placeholder_EventScript_Dreepy_1:
	return

placeholder_EventScript_Dreepy_2:
# 140 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 141 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_0
# 142 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 143 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setvar KELSIE_HOUSE_MON, 0
# 144 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag KELSIE_HOUSE_BALL
# 145 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknamePartyMon
	goto placeholder_EventScript_Dreepy_1

placeholder_EventScript_Dreepy_3:
# 148 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 149 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_0
# 150 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 151 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setvar KELSIE_HOUSE_MON, 0
# 152 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag KELSIE_HOUSE_BALL
# 153 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknameBoxMon
	goto placeholder_EventScript_Dreepy_1


placeholder_EventScript_Gible::
# 162 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	givemon SPECIES_GIBLE, 5
# 163 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq placeholder_EventScript_Gible_2
# 171 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq placeholder_EventScript_Gible_3
# 180 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_1
placeholder_EventScript_Gible_1:
	return

placeholder_EventScript_Gible_2:
# 164 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 165 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Gible_Text_0
# 166 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 167 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setvar KELSIE_HOUSE_MON, 1
# 168 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag KELSIE_HOUSE_BALL
# 169 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknamePartyMon
	goto placeholder_EventScript_Gible_1

placeholder_EventScript_Gible_3:
# 172 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 173 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Gible_Text_0
# 174 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 175 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setvar KELSIE_HOUSE_MON, 1
# 176 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag KELSIE_HOUSE_BALL
# 177 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknameBoxMon
	goto placeholder_EventScript_Gible_1


placeholder_EventScript_Axew::
# 186 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	givemon SPECIES_AXEW, 5
# 187 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq placeholder_EventScript_Axew_2
# 195 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq placeholder_EventScript_Axew_3
# 204 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_1
placeholder_EventScript_Axew_1:
	return

placeholder_EventScript_Axew_2:
# 188 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 189 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Axew_Text_0
# 190 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 191 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setvar KELSIE_HOUSE_MON, 2
# 192 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag KELSIE_HOUSE_BALL
# 193 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknamePartyMon
	goto placeholder_EventScript_Axew_1

placeholder_EventScript_Axew_3:
# 196 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 197 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Axew_Text_0
# 198 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 199 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setvar KELSIE_HOUSE_MON, 2
# 200 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag KELSIE_HOUSE_BALL
# 201 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknameBoxMon
	goto placeholder_EventScript_Axew_1


LittlerootTown_KelsieHouse_Kelsie_Text_0:
# 30 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "Go ahead and choose a Pokemon from\n"
	.string "that ball.$"

LittlerootTown_KelsieHouse_Kelsie_Text_1:
# 35 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "Hello! I'm Kelsie, and I love lemonade. If\n"
	.string "you bring me a lemonade, I'll give you a\l"
	.string "POKEMON.$"

LittlerootTown_KelsieHouse_Kelsie_Text_2:
# 42 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "Oh! You brought me a Lemonade?$"

LittlerootTown_KelsieHouse_BallTest_Text_0:
# 65 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "Woah! There's more than one Pokemon in\n"
	.string "here$"

LittlerootTown_KelsieHouse_BallTest_Text_1:
# 67 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "{STR_VAR_1}$"

LittlerootTown_KelsieHouse_BallTest_Text_2:
# 69 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "{STR_VAR_2}$"

LittlerootTown_KelsieHouse_BallTest_Text_3:
# 71 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "{STR_VAR_3}$"

placeholder_EventScript_Dreepy_Text_0:
# 141 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "You received Dreepy$"

placeholder_EventScript_Dreepy_Text_1:
# 156 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "No more room$"

placeholder_EventScript_Gible_Text_0:
# 165 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "You received Gible$"

placeholder_EventScript_Axew_Text_0:
# 189 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "You received Axew$"

LittlerootTown_KelsieHouse_YouSureAboutThatText::
# 209 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "Are you sure about that?$"

LittlerootTown_KelsieHouse_Dreepy::
# 213 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "I hope you're giving Dreepy lots of\n"
	.string "Lemonades!$"

LittlerootTown_KelsieHouse_Gible::
# 217 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "I hope you're giving Gible lots of\n"
	.string "Lemonades!$"

LittlerootTown_KelsieHouse_Axew::
# 221 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "I hope you're giving Axew lots of\n"
	.string "Lemonades!$"

LittlerootTown_KelsieHouse_StillHereText::
# 225 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "I mean this in the nicest way possible.\n"
	.string "Why are you still here?$"
