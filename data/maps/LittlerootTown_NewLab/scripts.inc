LittlerootTown_NewLab_MapScripts::
# 2 "data/maps/LittlerootTown_NewLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_NewLab_EventScript_BallDefault
	.byte 0


LittlerootTown_NewLab_EventScript_BallDefault::
# 6 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar STARTER_REGION, 0
	return


LittlerootTown_NewLab_EventScript_Birch::
# 10 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 11 "data/maps/LittlerootTown_NewLab/scripts.pory"
	faceplayer
# 12 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, LittlerootTown_NewLab_EventScript_Birch_4
LittlerootTown_NewLab_EventScript_Birch_3:
# 28 "data/maps/LittlerootTown_NewLab/scripts.pory"
	faceplayer
# 29 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Birch_Text_5, MSGBOX_NPC
LittlerootTown_NewLab_EventScript_Birch_1:
# 31 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmessage
# 32 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	end

LittlerootTown_NewLab_EventScript_Birch_2:
# 13 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Birch_Text_0, MSGBOX_NPC
# 14 "data/maps/LittlerootTown_NewLab/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, LittlerootTown_NewLab_EventScript_Birch_Text_1, LittlerootTown_NewLab_EventScript_Birch_Text_2, LittlerootTown_NewLab_EventScript_Birch_Text_3
# 15 "data/maps/LittlerootTown_NewLab/scripts.pory"
	switch VAR_RESULT
# 16 "data/maps/LittlerootTown_NewLab/scripts.pory"
	case 0, LittlerootTown_NewLab_EventScript_Birch_10
# 19 "data/maps/LittlerootTown_NewLab/scripts.pory"
	case 1, LittlerootTown_NewLab_EventScript_Birch_11
# 22 "data/maps/LittlerootTown_NewLab/scripts.pory"
	case 2, LittlerootTown_NewLab_EventScript_Birch_12
	goto LittlerootTown_NewLab_EventScript_Birch_1

LittlerootTown_NewLab_EventScript_Birch_4:
# 12 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, LittlerootTown_NewLab_EventScript_Birch_6
	goto LittlerootTown_NewLab_EventScript_Birch_3

LittlerootTown_NewLab_EventScript_Birch_6:
# 12 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, LittlerootTown_NewLab_EventScript_Birch_2
	goto LittlerootTown_NewLab_EventScript_Birch_3

LittlerootTown_NewLab_EventScript_Birch_10:
# 17 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar STARTER_REGION, 0
# 18 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Birch_Text_4, MSGBOX_NPC
	goto LittlerootTown_NewLab_EventScript_Birch_1

LittlerootTown_NewLab_EventScript_Birch_11:
# 20 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar STARTER_REGION, 1
# 21 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Birch_Text_4, MSGBOX_NPC
	goto LittlerootTown_NewLab_EventScript_Birch_1

LittlerootTown_NewLab_EventScript_Birch_12:
# 23 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar STARTER_REGION, 2
# 24 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Birch_Text_4, MSGBOX_NPC
	goto LittlerootTown_NewLab_EventScript_Birch_1


LittlerootTown_NewLab_EventScript_PokeballOne::
# 37 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 38 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, LittlerootTown_NewLab_EventScript_PokeballOne_4
LittlerootTown_NewLab_EventScript_PokeballOne_3:
# 50 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_PokeballOne_Text_0
LittlerootTown_NewLab_EventScript_PokeballOne_1:
# 52 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmessage
# 53 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	end

LittlerootTown_NewLab_EventScript_PokeballOne_2:
# 39 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare STARTER_REGION, 0
	goto_if_eq LittlerootTown_NewLab_EventScript_PokeballOne_9
# 42 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare STARTER_REGION, 1
	goto_if_eq LittlerootTown_NewLab_EventScript_PokeballOne_10
# 45 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_eq LittlerootTown_NewLab_EventScript_PokeballOne_11
	goto LittlerootTown_NewLab_EventScript_PokeballOne_1

LittlerootTown_NewLab_EventScript_PokeballOne_4:
# 38 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, LittlerootTown_NewLab_EventScript_PokeballOne_6
	goto LittlerootTown_NewLab_EventScript_PokeballOne_3

LittlerootTown_NewLab_EventScript_PokeballOne_6:
# 38 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, LittlerootTown_NewLab_EventScript_PokeballOne_2
	goto LittlerootTown_NewLab_EventScript_PokeballOne_3

LittlerootTown_NewLab_EventScript_PokeballOne_9:
# 40 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call LittlerootTown_NewLab_EventScript_ROWLET
	goto LittlerootTown_NewLab_EventScript_PokeballOne_1

LittlerootTown_NewLab_EventScript_PokeballOne_10:
# 43 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call LittlerootTown_NewLab_EventScript_CHESPIN
	goto LittlerootTown_NewLab_EventScript_PokeballOne_1

LittlerootTown_NewLab_EventScript_PokeballOne_11:
# 46 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call LittlerootTown_NewLab_EventScript_BULBASAUR
	goto LittlerootTown_NewLab_EventScript_PokeballOne_1


LittlerootTown_NewLab_EventScript_PokeballTwo::
# 58 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 59 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, LittlerootTown_NewLab_EventScript_PokeballTwo_4
LittlerootTown_NewLab_EventScript_PokeballTwo_3:
# 71 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_PokeballOne_Text_0
LittlerootTown_NewLab_EventScript_PokeballTwo_1:
# 73 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmessage
# 74 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	end

LittlerootTown_NewLab_EventScript_PokeballTwo_2:
# 60 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare STARTER_REGION, 0
	goto_if_eq LittlerootTown_NewLab_EventScript_PokeballTwo_9
# 63 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare STARTER_REGION, 1
	goto_if_eq LittlerootTown_NewLab_EventScript_PokeballTwo_10
# 66 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_eq LittlerootTown_NewLab_EventScript_PokeballTwo_11
	goto LittlerootTown_NewLab_EventScript_PokeballTwo_1

LittlerootTown_NewLab_EventScript_PokeballTwo_4:
# 59 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, LittlerootTown_NewLab_EventScript_PokeballTwo_6
	goto LittlerootTown_NewLab_EventScript_PokeballTwo_3

LittlerootTown_NewLab_EventScript_PokeballTwo_6:
# 59 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, LittlerootTown_NewLab_EventScript_PokeballTwo_2
	goto LittlerootTown_NewLab_EventScript_PokeballTwo_3

LittlerootTown_NewLab_EventScript_PokeballTwo_9:
# 61 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call LittlerootTown_NewLab_EventScript_LITTEN
	goto LittlerootTown_NewLab_EventScript_PokeballTwo_1

LittlerootTown_NewLab_EventScript_PokeballTwo_10:
# 64 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call LittlerootTown_NewLab_EventScript_FENNEKIN
	goto LittlerootTown_NewLab_EventScript_PokeballTwo_1

LittlerootTown_NewLab_EventScript_PokeballTwo_11:
# 67 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call LittlerootTown_NewLab_EventScript_CHARMANDER
	goto LittlerootTown_NewLab_EventScript_PokeballTwo_1


LittlerootTown_NewLab_EventScript_PokeballThree::
# 79 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 80 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, LittlerootTown_NewLab_EventScript_PokeballThree_4
LittlerootTown_NewLab_EventScript_PokeballThree_3:
# 92 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_PokeballOne_Text_0
LittlerootTown_NewLab_EventScript_PokeballThree_1:
# 94 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmessage
# 95 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	end

LittlerootTown_NewLab_EventScript_PokeballThree_2:
# 81 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare STARTER_REGION, 0
	goto_if_eq LittlerootTown_NewLab_EventScript_PokeballThree_9
# 84 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare STARTER_REGION, 1
	goto_if_eq LittlerootTown_NewLab_EventScript_PokeballThree_10
# 87 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_eq LittlerootTown_NewLab_EventScript_PokeballThree_11
	goto LittlerootTown_NewLab_EventScript_PokeballThree_1

LittlerootTown_NewLab_EventScript_PokeballThree_4:
# 80 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, LittlerootTown_NewLab_EventScript_PokeballThree_6
	goto LittlerootTown_NewLab_EventScript_PokeballThree_3

LittlerootTown_NewLab_EventScript_PokeballThree_6:
# 80 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, LittlerootTown_NewLab_EventScript_PokeballThree_2
	goto LittlerootTown_NewLab_EventScript_PokeballThree_3

LittlerootTown_NewLab_EventScript_PokeballThree_9:
# 82 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call LittlerootTown_NewLab_EventScript_POPPLIO
	goto LittlerootTown_NewLab_EventScript_PokeballThree_1

LittlerootTown_NewLab_EventScript_PokeballThree_10:
# 85 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call LittlerootTown_NewLab_EventScript_FROAKIE
	goto LittlerootTown_NewLab_EventScript_PokeballThree_1

LittlerootTown_NewLab_EventScript_PokeballThree_11:
# 88 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call LittlerootTown_NewLab_EventScript_SQUIRTLE
	goto LittlerootTown_NewLab_EventScript_PokeballThree_1


LittlerootTown_NewLab_EventScript_ROWLET::
# 100 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 101 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_ROWLET_Text_0, MSGBOX_YESNO
# 102 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_ROWLET_1
# 128 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 129 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

LittlerootTown_NewLab_EventScript_ROWLET_1:
# 103 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_ROWLET, 10, isShiny = YES
# 104 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar MADS_STARTER, 0
# 105 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar LITTLEROOT_STATE, 1
# 106 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_ROWLET_4
# 114 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_ROWLET_5
# 123 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 124 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_ROWLET_Text_2
	return

LittlerootTown_NewLab_EventScript_ROWLET_4:
# 107 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 108 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_ROWLET_Text_1
# 109 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 1
# 110 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 111 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 112 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewLab_EventScript_ROWLET_5:
# 115 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 116 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_ROWLET_Text_1
# 117 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 1
# 118 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 119 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 120 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewLab_EventScript_CHESPIN::
# 135 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
# 136 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_CHESPIN_Text_0, MSGBOX_YESNO
# 137 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_CHESPIN_1
# 163 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 164 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

LittlerootTown_NewLab_EventScript_CHESPIN_1:
# 138 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_CHESPIN, 10, isShiny = YES
# 139 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar MADS_STARTER, 0
# 140 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar LITTLEROOT_STATE, 1
# 141 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_CHESPIN_4
# 149 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_CHESPIN_5
# 158 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 159 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_ROWLET_Text_2
	return

LittlerootTown_NewLab_EventScript_CHESPIN_4:
# 142 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 143 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_CHESPIN_Text_1
# 144 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 1
# 145 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 146 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 147 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewLab_EventScript_CHESPIN_5:
# 150 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 151 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_CHESPIN_Text_1
# 152 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 1
# 153 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 154 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 155 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewLab_EventScript_BULBASAUR::
# 170 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 171 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_BULBASAUR_Text_0, MSGBOX_YESNO
# 172 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_BULBASAUR_1
# 198 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 199 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

LittlerootTown_NewLab_EventScript_BULBASAUR_1:
# 173 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_BULBASAUR, 10, isShiny = YES
# 174 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar MADS_STARTER, 0
# 175 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar LITTLEROOT_STATE, 1
# 176 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_BULBASAUR_4
# 184 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_BULBASAUR_5
# 193 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 194 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_ROWLET_Text_2
	return

LittlerootTown_NewLab_EventScript_BULBASAUR_4:
# 177 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 178 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_BULBASAUR_Text_1
# 179 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 1
# 180 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 181 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 182 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewLab_EventScript_BULBASAUR_5:
# 185 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 186 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_BULBASAUR_Text_1
# 187 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 1
# 188 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 189 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 190 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewLab_EventScript_LITTEN::
# 205 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 206 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_LITTEN_Text_0, MSGBOX_YESNO
# 207 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_LITTEN_1
# 233 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 234 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

LittlerootTown_NewLab_EventScript_LITTEN_1:
# 208 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_LITTEN, 10, isShiny = YES
# 209 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar MADS_STARTER, 1
# 210 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar LITTLEROOT_STATE, 1
# 211 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_LITTEN_4
# 219 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_LITTEN_5
# 228 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 229 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_ROWLET_Text_2
	return

LittlerootTown_NewLab_EventScript_LITTEN_4:
# 212 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 213 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_LITTEN_Text_1
# 214 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 2
# 215 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 216 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 217 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewLab_EventScript_LITTEN_5:
# 220 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 221 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_LITTEN_Text_1
# 222 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 2
# 223 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 224 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 225 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewLab_EventScript_FENNEKIN::
# 240 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 241 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_FENNEKIN_Text_0, MSGBOX_YESNO
# 242 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_FENNEKIN_1
# 268 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 269 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

LittlerootTown_NewLab_EventScript_FENNEKIN_1:
# 243 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_FENNEKIN, 10, isShiny = YES
# 244 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar MADS_STARTER, 1
# 245 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar LITTLEROOT_STATE, 1
# 246 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_FENNEKIN_4
# 254 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_FENNEKIN_5
# 263 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 264 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_ROWLET_Text_2
	return

LittlerootTown_NewLab_EventScript_FENNEKIN_4:
# 247 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 248 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_FENNEKIN_Text_1
# 249 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 2
# 250 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 251 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 252 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewLab_EventScript_FENNEKIN_5:
# 255 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 256 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_FENNEKIN_Text_1
# 257 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 2
# 258 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 259 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 260 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewLab_EventScript_CHARMANDER::
# 275 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 276 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_CHARMANDER_Text_0, MSGBOX_YESNO
# 277 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_CHARMANDER_1
# 303 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 304 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

LittlerootTown_NewLab_EventScript_CHARMANDER_1:
# 278 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_CHARMANDER, 10, isShiny = YES
# 279 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar MADS_STARTER, 1
# 280 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar LITTLEROOT_STATE, 1
# 281 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_CHARMANDER_4
# 289 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_CHARMANDER_5
# 298 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 299 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_ROWLET_Text_2
	return

LittlerootTown_NewLab_EventScript_CHARMANDER_4:
# 282 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 283 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_CHARMANDER_Text_1
# 284 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 2
# 285 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 286 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 287 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewLab_EventScript_CHARMANDER_5:
# 290 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 291 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_CHARMANDER_Text_1
# 292 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 2
# 293 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 294 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 295 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewLab_EventScript_POPPLIO::
# 310 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 311 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_POPPLIO_Text_0, MSGBOX_YESNO
# 312 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_POPPLIO_1
# 338 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 339 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

LittlerootTown_NewLab_EventScript_POPPLIO_1:
# 313 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_POPPLIO, 10, isShiny = YES
# 314 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar MADS_STARTER, 2
# 315 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar LITTLEROOT_STATE, 1
# 316 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_POPPLIO_4
# 324 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_POPPLIO_5
# 333 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 334 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_ROWLET_Text_2
	return

LittlerootTown_NewLab_EventScript_POPPLIO_4:
# 317 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 318 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_POPPLIO_Text_1
# 319 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 3
# 320 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 321 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 322 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewLab_EventScript_POPPLIO_5:
# 325 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 326 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_POPPLIO_Text_1
# 327 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 3
# 328 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 329 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 330 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewLab_EventScript_FROAKIE::
# 345 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 346 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_FROAKIE_Text_0, MSGBOX_YESNO
# 347 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_FROAKIE_1
# 373 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 374 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

LittlerootTown_NewLab_EventScript_FROAKIE_1:
# 348 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_FROAKIE, 10, isShiny = YES
# 349 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar MADS_STARTER, 2
# 350 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar LITTLEROOT_STATE, 1
# 351 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_FROAKIE_4
# 359 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_FROAKIE_5
# 368 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 369 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_ROWLET_Text_2
	return

LittlerootTown_NewLab_EventScript_FROAKIE_4:
# 352 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 353 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_FROAKIE_Text_1
# 354 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 3
# 355 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 356 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 357 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewLab_EventScript_FROAKIE_5:
# 360 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 361 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_FROAKIE_Text_1
# 362 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 3
# 363 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 364 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 365 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewLab_EventScript_SQUIRTLE::
# 380 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 381 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_SQUIRTLE_Text_0, MSGBOX_YESNO
# 382 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_SQUIRTLE_1
# 408 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 409 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

LittlerootTown_NewLab_EventScript_SQUIRTLE_1:
# 383 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_SQUIRTLE, 10, isShiny = YES
# 384 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar MADS_STARTER, 2
# 385 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar LITTLEROOT_STATE, 1
# 386 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_SQUIRTLE_4
# 394 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_SQUIRTLE_5
# 403 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 404 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_ROWLET_Text_2
	return

LittlerootTown_NewLab_EventScript_SQUIRTLE_4:
# 387 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 388 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_SQUIRTLE_Text_1
# 389 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 3
# 390 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 391 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 392 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewLab_EventScript_SQUIRTLE_5:
# 395 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 396 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_SQUIRTLE_Text_1
# 397 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 3
# 398 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 399 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 400 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	return


NicknamePartyMon::
# 416 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 417 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 418 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 419 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 420 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 426 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 427 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 428 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 431 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 429 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


LittlerootTown_NewLab_EventScript_Birch_Text_0:
# 13 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "What region's starters do you want to\n"
	.string "choose from?$"

LittlerootTown_NewLab_EventScript_Birch_Text_1:
# 14 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Alola$"

LittlerootTown_NewLab_EventScript_Birch_Text_2:
# 14 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Kalos$"

LittlerootTown_NewLab_EventScript_Birch_Text_3:
# 14 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Kanto$"

LittlerootTown_NewLab_EventScript_Birch_Text_4:
# 18 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Choose your starter wisely.$"

LittlerootTown_NewLab_EventScript_Birch_Text_5:
# 29 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You chose... Wisely.$"

LittlerootTown_NewLab_EventScript_PokeballOne_Text_0:
# 50 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Don't take another!$"

LittlerootTown_NewLab_EventScript_ROWLET_Text_0:
# 101 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose ROWLET?$"

LittlerootTown_NewLab_EventScript_ROWLET_Text_1:
# 108 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received ROWLET!$"

LittlerootTown_NewLab_EventScript_ROWLET_Text_2:
# 124 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "No more room$"

LittlerootTown_NewLab_EventScript_CHESPIN_Text_0:
# 136 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose CHESPIN?$"

LittlerootTown_NewLab_EventScript_CHESPIN_Text_1:
# 143 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received CHESPIN!$"

LittlerootTown_NewLab_EventScript_BULBASAUR_Text_0:
# 171 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose BULBASAUR?$"

LittlerootTown_NewLab_EventScript_BULBASAUR_Text_1:
# 178 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received BULBASAUR!$"

LittlerootTown_NewLab_EventScript_LITTEN_Text_0:
# 206 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose LITTEN?$"

LittlerootTown_NewLab_EventScript_LITTEN_Text_1:
# 213 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received LITTEN!$"

LittlerootTown_NewLab_EventScript_FENNEKIN_Text_0:
# 241 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose FENNEKIN?$"

LittlerootTown_NewLab_EventScript_FENNEKIN_Text_1:
# 248 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received FENNEKIN!$"

LittlerootTown_NewLab_EventScript_CHARMANDER_Text_0:
# 276 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose CHARMANDER?$"

LittlerootTown_NewLab_EventScript_CHARMANDER_Text_1:
# 283 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received CHARMANDER!$"

LittlerootTown_NewLab_EventScript_POPPLIO_Text_0:
# 311 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose POPPLIO?$"

LittlerootTown_NewLab_EventScript_POPPLIO_Text_1:
# 318 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received POPPLIO!$"

LittlerootTown_NewLab_EventScript_FROAKIE_Text_0:
# 346 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose FROAKIE?$"

LittlerootTown_NewLab_EventScript_FROAKIE_Text_1:
# 353 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received FROAKIE!$"

LittlerootTown_NewLab_EventScript_SQUIRTLE_Text_0:
# 381 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose Squirtle?$"

LittlerootTown_NewLab_EventScript_SQUIRTLE_Text_1:
# 388 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received Squirtle!$"

NicknamePartyMon_Text_0:
# 416 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
# 431 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Pokemon sent to PC$"

NewLab_NotChosen::
# 435 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You did not choose the Pokemon$"
