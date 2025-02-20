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
# 44 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
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
	releaseall
	end


LittlerootTown_KelsieHouse_BallTest::
# 57 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	lock
# 58 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	faceplayer
# 59 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_BallTest_Text_0
# 60 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_POKE_BALL
# 61 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_1, 1
# 62 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_ABILITY_CAPSULE
# 63 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_2, 79
# 64 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferitemname STR_VAR_3, ITEM_ABILITY_PATCH
# 65 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_3, 80
# 66 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, TRUE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 67 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	switch VAR_RESULT
# 68 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 1, LittlerootTown_KelsieHouse_BallTest_3
# 69 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 79, LittlerootTown_KelsieHouse_BallTest_4
# 70 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 80, LittlerootTown_KelsieHouse_BallTest_5
LittlerootTown_KelsieHouse_BallTest_1:
# 72 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 73 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 74 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end

LittlerootTown_KelsieHouse_BallTest_3:
# 68 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	giveitem ITEM_POKE_BALL
	goto LittlerootTown_KelsieHouse_BallTest_1

LittlerootTown_KelsieHouse_BallTest_4:
# 69 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
	goto LittlerootTown_KelsieHouse_BallTest_1

LittlerootTown_KelsieHouse_BallTest_5:
# 70 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	giveitem ITEM_ABILITY_PATCH
	goto LittlerootTown_KelsieHouse_BallTest_1


LittlerootTown_KelsieHouse_BallTest2::
# 79 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	lock
# 80 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	faceplayer
# 81 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_BallTest2_Text_0
# 82 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DREEPY
# 83 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_1, 885
# 84 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_GIBLE
# 85 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_2, 443
# 86 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_AXEW
# 87 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultipush LittlerootTown_KelsieHouse_BallTest_Text_3, 610
# 88 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 89 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	switch VAR_RESULT
# 90 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 885, LittlerootTown_KelsieHouse_BallTest2_3
# 101 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 443, LittlerootTown_KelsieHouse_BallTest2_4
# 112 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	case 610, LittlerootTown_KelsieHouse_BallTest2_5
LittlerootTown_KelsieHouse_BallTest2_1:
# 124 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 125 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 126 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	releaseall
	end

LittlerootTown_KelsieHouse_BallTest2_3:
# 91 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	showmonpic 885, 8, 0
# 92 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_YouSureAboutThatText, MSGBOX_YESNO
# 93 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_KelsieHouse_BallTest2_6
# 97 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	hidemonpic
# 98 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	closemessage
	end

LittlerootTown_KelsieHouse_BallTest2_4:
# 102 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	showmonpic 443, 8, 0
# 103 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_YouSureAboutThatText, MSGBOX_YESNO
# 104 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_KelsieHouse_BallTest2_9
# 108 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	hidemonpic
# 109 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	closemessage
	end

LittlerootTown_KelsieHouse_BallTest2_5:
# 113 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	showmonpic 610, 8, 0
# 114 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox LittlerootTown_KelsieHouse_YouSureAboutThatText, MSGBOX_YESNO
# 115 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_KelsieHouse_BallTest2_12
# 119 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	hidemonpic
# 120 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	closemessage
	end

LittlerootTown_KelsieHouse_BallTest2_6:
# 94 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call placeholder_EventScript_Dreepy
	goto LittlerootTown_KelsieHouse_BallTest2_1

LittlerootTown_KelsieHouse_BallTest2_9:
# 105 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call placeholder_EventScript_Gible
	goto LittlerootTown_KelsieHouse_BallTest2_1

LittlerootTown_KelsieHouse_BallTest2_12:
# 116 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call placeholder_EventScript_Axew
	goto LittlerootTown_KelsieHouse_BallTest2_1


placeholder_EventScript_Dreepy::
# 132 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	givemon SPECIES_DREEPY, 5
# 133 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq placeholder_EventScript_Dreepy_2
# 140 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq placeholder_EventScript_Dreepy_3
# 148 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_1
placeholder_EventScript_Dreepy_1:
	return

placeholder_EventScript_Dreepy_2:
# 134 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 135 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_0
# 136 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 137 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 138 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknamePartyMon
	goto placeholder_EventScript_Dreepy_1

placeholder_EventScript_Dreepy_3:
# 141 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 142 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_0
# 143 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 144 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 145 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknameBoxMon
	goto placeholder_EventScript_Dreepy_1


placeholder_EventScript_Gible::
# 154 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	givemon SPECIES_GIBLE, 5
# 155 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq placeholder_EventScript_Gible_2
# 162 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq placeholder_EventScript_Gible_3
# 170 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_1
placeholder_EventScript_Gible_1:
	return

placeholder_EventScript_Gible_2:
# 156 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 157 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Gible_Text_0
# 158 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 159 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 160 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknamePartyMon
	goto placeholder_EventScript_Gible_1

placeholder_EventScript_Gible_3:
# 163 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 164 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Gible_Text_0
# 165 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 166 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 167 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknameBoxMon
	goto placeholder_EventScript_Gible_1


placeholder_EventScript_Axew::
# 176 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	givemon SPECIES_AXEW, 5
# 177 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq placeholder_EventScript_Axew_2
# 184 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq placeholder_EventScript_Axew_3
# 192 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Dreepy_Text_1
placeholder_EventScript_Axew_1:
	return

placeholder_EventScript_Axew_2:
# 178 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 179 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Axew_Text_0
# 180 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 181 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 182 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknamePartyMon
	goto placeholder_EventScript_Axew_1

placeholder_EventScript_Axew_3:
# 185 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 186 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	msgbox placeholder_EventScript_Axew_Text_0
# 187 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	removeobject 2
# 188 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 189 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	call NicknameBoxMon
	goto placeholder_EventScript_Axew_1


LittlerootTown_KelsieHouse_Kelsie_Text_0:
# 17 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "How's that Pokemon doing?$"

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
# 59 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "It's a multichoice item ball$"

LittlerootTown_KelsieHouse_BallTest_Text_1:
# 61 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "{STR_VAR_1}$"

LittlerootTown_KelsieHouse_BallTest_Text_2:
# 63 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "{STR_VAR_2}$"

LittlerootTown_KelsieHouse_BallTest_Text_3:
# 65 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "{STR_VAR_3}$"

LittlerootTown_KelsieHouse_BallTest2_Text_0:
# 81 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "It's a multichoice Pokeball$"

placeholder_EventScript_Dreepy_Text_0:
# 135 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "You received Dreepy$"

placeholder_EventScript_Dreepy_Text_1:
# 148 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "No more room$"

placeholder_EventScript_Gible_Text_0:
# 157 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "You received Gible$"

placeholder_EventScript_Axew_Text_0:
# 179 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "You received Axew$"

LittlerootTown_KelsieHouse_YouSureAboutThatText::
# 197 "data/maps/LittlerootTown_KelsieHouse/scripts.pory"
	.string "Are you sure about that?$"
