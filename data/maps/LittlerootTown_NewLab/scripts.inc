LittlerootTown_NewLab_MapScripts::
# 2 "data/maps/LittlerootTown_NewLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_NewLab_EventScript_BallDefault
	.byte 0


LittlerootTown_NewLab_EventScript_BallDefault::
# 6 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_UNUSED_0x40F7, 0
	return


LittlerootTown_NewLab_EventScript_Birch::
# 10 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 11 "data/maps/LittlerootTown_NewLab/scripts.pory"
	faceplayer
# 12 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x493, LittlerootTown_NewLab_EventScript_Birch_4
LittlerootTown_NewLab_EventScript_Birch_3:
# 28 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Birch_Text_2
LittlerootTown_NewLab_EventScript_Birch_1:
# 30 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmessage
# 31 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	end

LittlerootTown_NewLab_EventScript_Birch_2:
# 13 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Birch_Text_0, MSGBOX_YESNO
# 14 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Birch_9
# 24 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Birch_Text_1
	goto LittlerootTown_NewLab_EventScript_Birch_1

LittlerootTown_NewLab_EventScript_Birch_4:
# 12 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x494, LittlerootTown_NewLab_EventScript_Birch_6
	goto LittlerootTown_NewLab_EventScript_Birch_3

LittlerootTown_NewLab_EventScript_Birch_6:
# 12 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x495, LittlerootTown_NewLab_EventScript_Birch_2
	goto LittlerootTown_NewLab_EventScript_Birch_3

LittlerootTown_NewLab_EventScript_Birch_9:
# 15 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_ne LittlerootTown_NewLab_EventScript_Birch_13
# 19 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_UNUSED_0x40F7, 0
LittlerootTown_NewLab_EventScript_Birch_12:
# 21 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Birch_Text_1
	goto LittlerootTown_NewLab_EventScript_Birch_1

LittlerootTown_NewLab_EventScript_Birch_13:
# 16 "data/maps/LittlerootTown_NewLab/scripts.pory"
	addvar VAR_UNUSED_0x40F7, 1
	goto LittlerootTown_NewLab_EventScript_Birch_12


LittlerootTown_NewLab_EventScript_PokeballOne::
# 36 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 37 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x493, LittlerootTown_NewLab_EventScript_PokeballOne_4
LittlerootTown_NewLab_EventScript_PokeballOne_3:
# 49 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_PokeballOne_Text_0
LittlerootTown_NewLab_EventScript_PokeballOne_1:
# 51 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmessage
# 52 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	end

LittlerootTown_NewLab_EventScript_PokeballOne_2:
# 38 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq LittlerootTown_NewLab_EventScript_PokeballOne_9
# 41 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq LittlerootTown_NewLab_EventScript_PokeballOne_10
# 44 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq LittlerootTown_NewLab_EventScript_PokeballOne_11
	goto LittlerootTown_NewLab_EventScript_PokeballOne_1

LittlerootTown_NewLab_EventScript_PokeballOne_4:
# 37 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x494, LittlerootTown_NewLab_EventScript_PokeballOne_6
	goto LittlerootTown_NewLab_EventScript_PokeballOne_3

LittlerootTown_NewLab_EventScript_PokeballOne_6:
# 37 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x495, LittlerootTown_NewLab_EventScript_PokeballOne_2
	goto LittlerootTown_NewLab_EventScript_PokeballOne_3

LittlerootTown_NewLab_EventScript_PokeballOne_9:
# 39 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call LittlerootTown_NewLab_EventScript_Pawniard
	goto LittlerootTown_NewLab_EventScript_PokeballOne_1

LittlerootTown_NewLab_EventScript_PokeballOne_10:
# 42 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call LittlerootTown_NewLab_EventScript_Litwick
	goto LittlerootTown_NewLab_EventScript_PokeballOne_1

LittlerootTown_NewLab_EventScript_PokeballOne_11:
# 45 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call LittlerootTown_NewLab_EventScript_Tynamo
	goto LittlerootTown_NewLab_EventScript_PokeballOne_1


LittlerootTown_NewLab_EventScript_PokeballTwo::
# 57 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 58 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x493, LittlerootTown_NewLab_EventScript_PokeballTwo_4
LittlerootTown_NewLab_EventScript_PokeballTwo_3:
# 70 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_PokeballOne_Text_0
LittlerootTown_NewLab_EventScript_PokeballTwo_1:
# 72 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmessage
# 73 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	end

LittlerootTown_NewLab_EventScript_PokeballTwo_2:
# 59 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq LittlerootTown_NewLab_EventScript_PokeballTwo_9
# 62 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq LittlerootTown_NewLab_EventScript_PokeballTwo_10
# 65 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq LittlerootTown_NewLab_EventScript_PokeballTwo_11
	goto LittlerootTown_NewLab_EventScript_PokeballTwo_1

LittlerootTown_NewLab_EventScript_PokeballTwo_4:
# 58 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x494, LittlerootTown_NewLab_EventScript_PokeballTwo_6
	goto LittlerootTown_NewLab_EventScript_PokeballTwo_3

LittlerootTown_NewLab_EventScript_PokeballTwo_6:
# 58 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x495, LittlerootTown_NewLab_EventScript_PokeballTwo_2
	goto LittlerootTown_NewLab_EventScript_PokeballTwo_3

LittlerootTown_NewLab_EventScript_PokeballTwo_9:
# 60 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call LittlerootTown_NewLab_EventScript_Dreepy
	goto LittlerootTown_NewLab_EventScript_PokeballTwo_1

LittlerootTown_NewLab_EventScript_PokeballTwo_10:
# 63 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call LittlerootTown_NewLab_EventScript_Impidimp
	goto LittlerootTown_NewLab_EventScript_PokeballTwo_1

LittlerootTown_NewLab_EventScript_PokeballTwo_11:
# 66 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call LittlerootTown_NewLab_EventScript_Tinkatink
	goto LittlerootTown_NewLab_EventScript_PokeballTwo_1


LittlerootTown_NewLab_EventScript_PokeballThree::
# 78 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 79 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x493, LittlerootTown_NewLab_EventScript_PokeballThree_4
LittlerootTown_NewLab_EventScript_PokeballThree_3:
# 91 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_PokeballOne_Text_0
LittlerootTown_NewLab_EventScript_PokeballThree_1:
# 93 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmessage
# 94 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	end

LittlerootTown_NewLab_EventScript_PokeballThree_2:
# 80 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq LittlerootTown_NewLab_EventScript_PokeballThree_9
# 83 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq LittlerootTown_NewLab_EventScript_PokeballThree_10
# 86 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq LittlerootTown_NewLab_EventScript_PokeballThree_11
	goto LittlerootTown_NewLab_EventScript_PokeballThree_1

LittlerootTown_NewLab_EventScript_PokeballThree_4:
# 79 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x494, LittlerootTown_NewLab_EventScript_PokeballThree_6
	goto LittlerootTown_NewLab_EventScript_PokeballThree_3

LittlerootTown_NewLab_EventScript_PokeballThree_6:
# 79 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x495, LittlerootTown_NewLab_EventScript_PokeballThree_2
	goto LittlerootTown_NewLab_EventScript_PokeballThree_3

LittlerootTown_NewLab_EventScript_PokeballThree_9:
# 81 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call LittlerootTown_NewLab_EventScript_Solosis
	goto LittlerootTown_NewLab_EventScript_PokeballThree_1

LittlerootTown_NewLab_EventScript_PokeballThree_10:
# 84 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call LittlerootTown_NewLab_EventScript_Riolu
	goto LittlerootTown_NewLab_EventScript_PokeballThree_1

LittlerootTown_NewLab_EventScript_PokeballThree_11:
# 87 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call LittlerootTown_NewLab_EventScript_Jangmo_O
	goto LittlerootTown_NewLab_EventScript_PokeballThree_1


LittlerootTown_NewLab_EventScript_Pawniard::
# 99 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_PAWNIARD, 10, 3
# 100 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Pawniard_Text_0, MSGBOX_YESNO
# 101 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Pawniard_1
# 125 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 126 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

LittlerootTown_NewLab_EventScript_Pawniard_1:
# 102 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_PAWNIARD, 5, isShiny = YES
# 103 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_Pawniard_4
# 111 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_Pawniard_5
# 120 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 121 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Pawniard_Text_2
	return

LittlerootTown_NewLab_EventScript_Pawniard_4:
# 104 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 105 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Pawniard_Text_1
# 106 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 1
# 107 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_UNUSED_0x493
# 108 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 109 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewLab_EventScript_Pawniard_5:
# 112 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 113 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Pawniard_Text_1
# 114 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 1
# 115 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_UNUSED_0x493
# 116 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 117 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewLab_EventScript_Litwick::
# 132 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_LITWICK, 10, 3
# 133 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Litwick_Text_0, MSGBOX_YESNO
# 134 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Litwick_1
# 158 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 159 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

LittlerootTown_NewLab_EventScript_Litwick_1:
# 135 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_LITWICK, 5, isShiny = YES
# 136 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_Litwick_4
# 144 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_Litwick_5
# 153 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 154 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Pawniard_Text_2
	return

LittlerootTown_NewLab_EventScript_Litwick_4:
# 137 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 138 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Litwick_Text_1
# 139 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 1
# 140 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_UNUSED_0x493
# 141 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 142 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewLab_EventScript_Litwick_5:
# 145 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 146 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Litwick_Text_1
# 147 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 1
# 148 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_UNUSED_0x493
# 149 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 150 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewLab_EventScript_Tynamo::
# 165 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_TYNAMO, 10, 3
# 166 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Tynamo_Text_0, MSGBOX_YESNO
# 167 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Tynamo_1
# 191 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 192 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

LittlerootTown_NewLab_EventScript_Tynamo_1:
# 168 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_TYNAMO, 5, isShiny = YES
# 169 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_Tynamo_4
# 177 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_Tynamo_5
# 186 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 187 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Pawniard_Text_2
	return

LittlerootTown_NewLab_EventScript_Tynamo_4:
# 170 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 171 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Tynamo_Text_1
# 172 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 1
# 173 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_UNUSED_0x493
# 174 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 175 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewLab_EventScript_Tynamo_5:
# 178 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 179 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Tynamo_Text_1
# 180 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 1
# 181 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_UNUSED_0x493
# 182 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 183 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewLab_EventScript_Dreepy::
# 198 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_DREEPY, 10, 3
# 199 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Dreepy_Text_0, MSGBOX_YESNO
# 200 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Dreepy_1
# 224 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 225 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

LittlerootTown_NewLab_EventScript_Dreepy_1:
# 201 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_DREEPY, 5, isShiny = YES
# 202 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_Dreepy_4
# 210 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_Dreepy_5
# 219 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 220 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Pawniard_Text_2
	return

LittlerootTown_NewLab_EventScript_Dreepy_4:
# 203 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 204 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Dreepy_Text_1
# 205 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 2
# 206 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 207 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 208 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewLab_EventScript_Dreepy_5:
# 211 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 212 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Dreepy_Text_1
# 213 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 2
# 214 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 215 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 216 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewLab_EventScript_Impidimp::
# 231 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_IMPIDIMP, 10, 3
# 232 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Impidimp_Text_0, MSGBOX_YESNO
# 233 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Impidimp_1
# 257 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 258 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

LittlerootTown_NewLab_EventScript_Impidimp_1:
# 234 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_IMPIDIMP, 5, isShiny = YES
# 235 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_Impidimp_4
# 243 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_Impidimp_5
# 252 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 253 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Pawniard_Text_2
	return

LittlerootTown_NewLab_EventScript_Impidimp_4:
# 236 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 237 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Impidimp_Text_1
# 238 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 2
# 239 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 240 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 241 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewLab_EventScript_Impidimp_5:
# 244 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 245 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Impidimp_Text_1
# 246 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 2
# 247 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 248 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 249 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewLab_EventScript_Tinkatink::
# 264 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_TINKATINK, 10, 3
# 265 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Tinkatink_Text_0, MSGBOX_YESNO
# 266 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Tinkatink_1
# 290 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 291 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

LittlerootTown_NewLab_EventScript_Tinkatink_1:
# 267 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_TINKATINK, 5, isShiny = YES
# 268 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_Tinkatink_4
# 276 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_Tinkatink_5
# 285 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 286 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Pawniard_Text_2
	return

LittlerootTown_NewLab_EventScript_Tinkatink_4:
# 269 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 270 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Tinkatink_Text_1
# 271 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 2
# 272 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 273 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 274 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewLab_EventScript_Tinkatink_5:
# 277 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 278 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Tinkatink_Text_1
# 279 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 2
# 280 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 281 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 282 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewLab_EventScript_Solosis::
# 297 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_SOLOSIS, 10, 3
# 298 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Solosis_Text_0, MSGBOX_YESNO
# 299 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Solosis_1
# 323 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 324 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

LittlerootTown_NewLab_EventScript_Solosis_1:
# 300 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_SOLOSIS, 5, isShiny = YES
# 301 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_Solosis_4
# 309 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_Solosis_5
# 318 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 319 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Pawniard_Text_2
	return

LittlerootTown_NewLab_EventScript_Solosis_4:
# 302 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 303 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Solosis_Text_1
# 304 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 3
# 305 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 306 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 307 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewLab_EventScript_Solosis_5:
# 310 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 311 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Solosis_Text_1
# 312 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 3
# 313 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 314 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 315 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewLab_EventScript_Riolu::
# 330 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_RIOLU, 10, 3
# 331 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Riolu_Text_0, MSGBOX_YESNO
# 332 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Riolu_1
# 356 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 357 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

LittlerootTown_NewLab_EventScript_Riolu_1:
# 333 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_RIOLU, 5, isShiny = YES
# 334 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_Riolu_4
# 342 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_Riolu_5
# 351 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 352 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Pawniard_Text_2
	return

LittlerootTown_NewLab_EventScript_Riolu_4:
# 335 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 336 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Riolu_Text_1
# 337 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 3
# 338 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 339 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 340 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewLab_EventScript_Riolu_5:
# 343 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 344 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Riolu_Text_1
# 345 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 3
# 346 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 347 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 348 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewLab_EventScript_Jangmo_O::
# 363 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_JANGMO_O, 10, 3
# 364 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Jangmo_O_Text_0, MSGBOX_YESNO
# 365 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Jangmo_O_1
# 389 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 390 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

LittlerootTown_NewLab_EventScript_Jangmo_O_1:
# 366 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_JANGMO_O, 5, isShiny = YES
# 367 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_Jangmo_O_4
# 375 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_Jangmo_O_5
# 384 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 385 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Pawniard_Text_2
	return

LittlerootTown_NewLab_EventScript_Jangmo_O_4:
# 368 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 369 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Jangmo_O_Text_1
# 370 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 3
# 371 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 372 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 373 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewLab_EventScript_Jangmo_O_5:
# 376 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 377 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Jangmo_O_Text_1
# 378 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 3
# 379 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 380 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 381 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	return


NicknamePartyMon::
# 397 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 398 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 399 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 400 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 401 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 407 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 408 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 409 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 412 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 410 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


LittlerootTown_NewLab_EventScript_Birch_Text_0:
# 13 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Hello, would you like to see more options?$"

LittlerootTown_NewLab_EventScript_Birch_Text_1:
# 21 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Choose your starter wisely.$"

LittlerootTown_NewLab_EventScript_Birch_Text_2:
# 28 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Take care of your Pokemon!$"

LittlerootTown_NewLab_EventScript_PokeballOne_Text_0:
# 49 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Don't take another!$"

LittlerootTown_NewLab_EventScript_Pawniard_Text_0:
# 100 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose Pawniard?$"

LittlerootTown_NewLab_EventScript_Pawniard_Text_1:
# 105 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received Pawniard!$"

LittlerootTown_NewLab_EventScript_Pawniard_Text_2:
# 121 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "No more room$"

LittlerootTown_NewLab_EventScript_Litwick_Text_0:
# 133 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose Litwick?$"

LittlerootTown_NewLab_EventScript_Litwick_Text_1:
# 138 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received Litwick!$"

LittlerootTown_NewLab_EventScript_Tynamo_Text_0:
# 166 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose Tynamo?$"

LittlerootTown_NewLab_EventScript_Tynamo_Text_1:
# 171 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received Tynamo!$"

LittlerootTown_NewLab_EventScript_Dreepy_Text_0:
# 199 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose Dreepy?$"

LittlerootTown_NewLab_EventScript_Dreepy_Text_1:
# 204 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received Dreepy!$"

LittlerootTown_NewLab_EventScript_Impidimp_Text_0:
# 232 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose Impidimp?$"

LittlerootTown_NewLab_EventScript_Impidimp_Text_1:
# 237 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received Impidimp!$"

LittlerootTown_NewLab_EventScript_Tinkatink_Text_0:
# 265 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose Tinkatink?$"

LittlerootTown_NewLab_EventScript_Tinkatink_Text_1:
# 270 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received Tinkatink!$"

LittlerootTown_NewLab_EventScript_Solosis_Text_0:
# 298 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose Solosis?$"

LittlerootTown_NewLab_EventScript_Solosis_Text_1:
# 303 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received Solosis!$"

LittlerootTown_NewLab_EventScript_Riolu_Text_0:
# 331 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose Riolu?$"

LittlerootTown_NewLab_EventScript_Riolu_Text_1:
# 336 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received Riolu!$"

LittlerootTown_NewLab_EventScript_Jangmo_O_Text_0:
# 364 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose Jangmo-o?$"

LittlerootTown_NewLab_EventScript_Jangmo_O_Text_1:
# 369 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received Jangmo-o!$"

NicknamePartyMon_Text_0:
# 397 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
# 412 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Pokemon sent to PC$"

NewLab_NotChosen::
# 416 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You did not choose the Pokemon$"
