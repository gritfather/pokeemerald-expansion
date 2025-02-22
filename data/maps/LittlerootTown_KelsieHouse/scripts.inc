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
	compare KELSIE_HOUSE_BALL_GET, 1 ,
	goto_if_eq LittlerootTown_KelsieHouse_Kelsie_16
LittlerootTown_KelsieHouse_Kelsie_15:
# 25 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare KELSIE_HOUSE_BALL_GET, 1
	goto_if_eq LittlerootTown_KelsieHouse_Kelsie_2
# 30 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	goto_if_unset TALKED_TO_KELSIE, LittlerootTown_KelsieHouse_Kelsie_9
LittlerootTown_KelsieHouse_Kelsie_8:
# 30 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	goto_if_unset TALKED_TO_KELSIE, LittlerootTown_KelsieHouse_Kelsie_3
	checkitem ITEM_LEMONADE
# 0 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootTown_KelsieHouse_Kelsie_3
# 37 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	goto_if_set TALKED_TO_KELSIE, LittlerootTown_KelsieHouse_Kelsie_5
	return

LittlerootTown_KelsieHouse_Kelsie_1:
# 17 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	switch VAR_UNUSED_0x40FA
# 18 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 0, LittlerootTown_KelsieHouse_Kelsie_21
# 19 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 1, LittlerootTown_KelsieHouse_Kelsie_22
# 20 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 2, LittlerootTown_KelsieHouse_Kelsie_23
LittlerootTown_KelsieHouse_Kelsie_19:
# 22 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end

LittlerootTown_KelsieHouse_Kelsie_2:
# 26 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_Kelsie_Text_0, MSGBOX_AUTOCLOSE
# 27 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end

LittlerootTown_KelsieHouse_Kelsie_3:
# 31 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_Kelsie_Text_1
# 32 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	waitmessage
# 33 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag TALKED_TO_KELSIE
# 34 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end

LittlerootTown_KelsieHouse_Kelsie_4:
# 38 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_Kelsie_Text_2, MSGBOX_YESNO
# 39 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_KelsieHouse_Kelsie_24
# 50 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
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
	goto_if_set KELSIE_HOUSE_BALL, LittlerootTown_KelsieHouse_Kelsie_1
	goto LittlerootTown_KelsieHouse_Kelsie_15

LittlerootTown_KelsieHouse_Kelsie_21:
# 18 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_Dreepy, MSGBOX_NPC
	goto LittlerootTown_KelsieHouse_Kelsie_19

LittlerootTown_KelsieHouse_Kelsie_22:
# 19 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_Gible, MSGBOX_NPC
	goto LittlerootTown_KelsieHouse_Kelsie_19

LittlerootTown_KelsieHouse_Kelsie_23:
# 20 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_Axew, MSGBOX_NPC
	goto LittlerootTown_KelsieHouse_Kelsie_19

LittlerootTown_KelsieHouse_Kelsie_24:
# 40 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeitem ITEM_LEMONADE
# 41 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	clearflag KELSIE_HOUSE_BALL
# 42 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	addobject 2
# 43 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setvar KELSIE_HOUSE_BALL_GET, 1
# 44 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_Kelsie_Text_0
# 45 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	waitmessage
# 46 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end


LittlerootTown_KelsieHouse_BallTest::
# 59 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	lock
# 60 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	faceplayer
# 61 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_BallTest_Text_0
# 62 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_POKE_BALL
# 63 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_1, 1
# 64 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_ABILITY_CAPSULE
# 65 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_2, 79
# 66 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferitemname STR_VAR_3, ITEM_ABILITY_PATCH
# 67 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_3, 80
# 68 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, TRUE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 69 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	switch VAR_RESULT
# 70 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 1, LittlerootTown_KelsieHouse_BallTest_3
# 71 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 79, LittlerootTown_KelsieHouse_BallTest_4
# 72 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 80, LittlerootTown_KelsieHouse_BallTest_5
LittlerootTown_KelsieHouse_BallTest_1:
# 74 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 75 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag KELSIE_HOUSE_BALL
# 76 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end

LittlerootTown_KelsieHouse_BallTest_3:
# 70 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	giveitem ITEM_POKE_BALL
	goto LittlerootTown_KelsieHouse_BallTest_1

LittlerootTown_KelsieHouse_BallTest_4:
# 71 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
	goto LittlerootTown_KelsieHouse_BallTest_1

LittlerootTown_KelsieHouse_BallTest_5:
# 72 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	giveitem ITEM_ABILITY_PATCH
	goto LittlerootTown_KelsieHouse_BallTest_1


LittlerootTown_KelsieHouse_BallTest2::
# 81 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	lock
# 82 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	faceplayer
# 83 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_BallTest_Text_0
# 84 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DREEPY
# 85 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_1, 885
# 86 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_GIBLE
# 87 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_2, 443
# 88 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_AXEW
# 89 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_3, 610
# 90 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 91 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	switch VAR_RESULT
# 92 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 885, LittlerootTown_KelsieHouse_BallTest2_3
# 103 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 443, LittlerootTown_KelsieHouse_BallTest2_4
# 114 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 610, LittlerootTown_KelsieHouse_BallTest2_5
LittlerootTown_KelsieHouse_BallTest2_1:
# 126 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 127 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag KELSIE_HOUSE_BALL
# 128 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end

LittlerootTown_KelsieHouse_BallTest2_3:
# 93 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	showmonpic 885, 8, 3
# 94 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_YouSureAboutThatText, MSGBOX_YESNO
# 95 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_KelsieHouse_BallTest2_6
# 99 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	hidemonpic
# 100 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	closemessage
	end

LittlerootTown_KelsieHouse_BallTest2_4:
# 104 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	showmonpic 443, 8, 3
# 105 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_YouSureAboutThatText, MSGBOX_YESNO
# 106 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_KelsieHouse_BallTest2_9
# 110 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	hidemonpic
# 111 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	closemessage
	end

LittlerootTown_KelsieHouse_BallTest2_5:
# 115 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	showmonpic 610, 8, 3
# 116 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_YouSureAboutThatText, MSGBOX_YESNO
# 117 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_KelsieHouse_BallTest2_12
# 121 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	hidemonpic
# 122 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	closemessage
	end

LittlerootTown_KelsieHouse_BallTest2_6:
# 96 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call placeholder_EventScript_Dreepy
	goto LittlerootTown_KelsieHouse_BallTest2_1

LittlerootTown_KelsieHouse_BallTest2_9:
# 107 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call placeholder_EventScript_Gible
	goto LittlerootTown_KelsieHouse_BallTest2_1

LittlerootTown_KelsieHouse_BallTest2_12:
# 118 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call placeholder_EventScript_Axew
	goto LittlerootTown_KelsieHouse_BallTest2_1


placeholder_EventScript_Dreepy::
# 134 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	givemon SPECIES_DREEPY, 5
# 135 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq placeholder_EventScript_Dreepy_2
# 143 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq placeholder_EventScript_Dreepy_3
# 152 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_1
placeholder_EventScript_Dreepy_1:
	return

placeholder_EventScript_Dreepy_2:
# 136 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 137 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_0
# 138 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 139 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setvar VAR_UNUSED_0x40FA, 0
# 140 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag KELSIE_HOUSE_BALL
# 141 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknamePartyMon
	goto placeholder_EventScript_Dreepy_1

placeholder_EventScript_Dreepy_3:
# 144 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 145 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_0
# 146 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 147 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setvar VAR_UNUSED_0x40FA, 0
# 148 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag KELSIE_HOUSE_BALL
# 149 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknameBoxMon
	goto placeholder_EventScript_Dreepy_1


placeholder_EventScript_Gible::
# 158 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	givemon SPECIES_GIBLE, 5
# 159 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq placeholder_EventScript_Gible_2
# 167 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq placeholder_EventScript_Gible_3
# 176 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_1
placeholder_EventScript_Gible_1:
	return

placeholder_EventScript_Gible_2:
# 160 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 161 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Gible_Text_0
# 162 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 163 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setvar VAR_UNUSED_0x40FA, 1
# 164 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag KELSIE_HOUSE_BALL
# 165 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknamePartyMon
	goto placeholder_EventScript_Gible_1

placeholder_EventScript_Gible_3:
# 168 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 169 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Gible_Text_0
# 170 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 171 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setvar VAR_UNUSED_0x40FA, 1
# 172 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag KELSIE_HOUSE_BALL
# 173 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknameBoxMon
	goto placeholder_EventScript_Gible_1


placeholder_EventScript_Axew::
# 182 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	givemon SPECIES_AXEW, 5
# 183 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq placeholder_EventScript_Axew_2
# 191 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq placeholder_EventScript_Axew_3
# 200 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_1
placeholder_EventScript_Axew_1:
	return

placeholder_EventScript_Axew_2:
# 184 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 185 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Axew_Text_0
# 186 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 187 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setvar VAR_UNUSED_0x40FA, 2
# 188 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag KELSIE_HOUSE_BALL
# 189 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknamePartyMon
	goto placeholder_EventScript_Axew_1

placeholder_EventScript_Axew_3:
# 192 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 193 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Axew_Text_0
# 194 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 195 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setvar VAR_UNUSED_0x40FA, 2
# 196 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag KELSIE_HOUSE_BALL
# 197 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknameBoxMon
	goto placeholder_EventScript_Axew_1


LittlerootTown_KelsieHouse_Kelsie_Text_0:
# 26 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "Go ahead and choose a Pokemon from\n"
	.string "that ball.$"

LittlerootTown_KelsieHouse_Kelsie_Text_1:
# 31 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "Hello! I'm Kelsie, and I love lemonade. If\n"
	.string "you bring me a lemonade, I'll give you a\l"
	.string "POKEMON.$"

LittlerootTown_KelsieHouse_Kelsie_Text_2:
# 38 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "Oh! You brought me a Lemonade?$"

LittlerootTown_KelsieHouse_BallTest_Text_0:
# 61 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "Woah! There's more than one Pokemon in\n"
	.string "here$"

LittlerootTown_KelsieHouse_BallTest_Text_1:
# 63 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "{STR_VAR_1}$"

LittlerootTown_KelsieHouse_BallTest_Text_2:
# 65 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "{STR_VAR_2}$"

LittlerootTown_KelsieHouse_BallTest_Text_3:
# 67 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "{STR_VAR_3}$"

placeholder_EventScript_Dreepy_Text_0:
# 137 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "You received Dreepy$"

placeholder_EventScript_Dreepy_Text_1:
# 152 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "No more room$"

placeholder_EventScript_Gible_Text_0:
# 161 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "You received Gible$"

placeholder_EventScript_Axew_Text_0:
# 185 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "You received Axew$"

LittlerootTown_KelsieHouse_YouSureAboutThatText::
# 205 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "Are you sure about that?$"

LittlerootTown_KelsieHouse_Dreepy::
# 209 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "I hope you're giving Dreepy lots of\n"
	.string "Lemonades!$"

LittlerootTown_KelsieHouse_Gible::
# 213 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "I hope you're giving Gible lots of\n"
	.string "Lemonades!$"

LittlerootTown_KelsieHouse_Axew::
# 217 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "I hope you're giving Axew lots of\n"
	.string "Lemonades!$"
