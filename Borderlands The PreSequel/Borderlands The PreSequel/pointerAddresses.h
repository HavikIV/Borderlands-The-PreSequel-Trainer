//Header file to contain all of the pointers
//The pointers will be stored as arrays within a bigger array (2D arrays)
//All of the arrays will be of type int, even for those that read a float value.
//The format of each pointer containing array is of the following
//{ VALUE, MEMORY LOCATION, OFFSET1, OFFSET2, ...}
//store the read value in the VALUE, the memory address of where to read the value from,
//then followed by the offsets
//sample array:
//int sampleArray[3][4] = {{0, 0, 0x24, 02A0}, {0, 0, 0x24, 02c8}, {0, 0, 0x30, 0x1bc}}
//sampleArray contains 3 arrays that contains 4 values each
//hex values are written as the following: 0x(hex number) ex. 0x24
//In other words 3 pointers with it's read value, memory location, and 2 offsets
//				Value		Memory Location		Offset1		Offset2
//pointer1			0				0			  0x24		 0x2a0
//pointer2			0				0			  0x24		 0x2c8
//pointer3			0				0			  0x30		 0x1bc

//pointers for the stats tab
//{money, moon shards, credits, EXP to Next Level, weapon decks, backpack space, bp used space, bp limit}
int stats[8][4] = {{0, 0, 0x24, 0x2ac}, {0, 0, 0x24, 0x2c0}, {0, 0, 0x24, 0x310}, {0, 0, 0x24, 0x268},
					{0, 0, 0x30, 0x1dc}, {0, 0, 0x30, 0x1d8}, {0, 0, 0x30, 0x1f8}, {0, 0, 0x30, 0x200}};
//{health, hSwitch, shield, sSwitch, oz, ozSwitch, bank size}
int stats2[7][5] = {{0, 0, 0x24, 0x3b8, 0x6c}, {0, 0, 0x24, 0x3b8, 0x108}, {0, 0, 0x24, 0x3c4, 0x6c},
					{0, 0, 0x24, 0x3c4, 0x108}, {0, 0, 0x24, 0x3d0, 0x6c}, {0, 0, 0x24, 0x3d0, 0x108},
					{0, 0, 0x30, 0x230, 0x40}};
//{level, EXP, EXP multiplier}
int stats3[3][6] = {{0, 0, 0x10, 0x1c4, 0x0, 0x258}, {0, 0, 0x24, 0x3b0, 0x1b0, 0x6c}, {0, 0, 0x24, 0xa4, 0xc4c, 0x144}};
//Gold Keys --> pbaseAddress - 0xc = golden keys base address
//{base golden keys used, SHIFT gold keys used, gold keys total, SHIFT gold keys total}
int goldKeys[4][7] = {{0, 0, 0x0, 0x134, 0x48, 0x640, 0x2}, {0, 0, 0x0, 0x134, 0x48, 0x640, 0x5},
						{0, 0, 0x0, 0x134, 0x48, 0x640, 0x1}, {0, 0, 0x0, 0x134, 0x48, 0x640, 0x4}};
						
//pointers for the Skills tab
//skill points -- maybe move into stats array
int skillPoints[1][4] = {{0, 0, 0x24, 0x280}};
//class skill cooldown timer
int skillCDTimer[1][6] = { {0, 0, 0x24, 0xa4, 0xc58, 0x6c} };
//{class skill status, skill1, skill2, ...}
//maybe use skills[39][2] to store the read values and memory location for skills
//as pointer is the almost the same except the last offset is 0x24 more than for the
//previous pointer
//could make a special function to specifically to read only skills values
//use array skill[5] = {0x2c, 0xa4, 0xc98, 0x58, 0x1c} with a for loop
//with each loop, increment skill[4] by 0x24, store the read values and memory in
//skills[39][2] array, afterwards when the for loop completely finishes, reset the skill[4] back to 0x1c 
int loadSkills[39][2] = { { 0, 0 },{ 0, 0 }, { 0, 0 },{ 0, 0 }, { 0, 0 },{ 0, 0 }, { 0, 0 },{ 0, 0 },
						{ 0, 0 },{ 0, 0 }, { 0, 0 },{ 0, 0 }, { 0, 0 },{ 0, 0 }, { 0, 0 },{ 0, 0 },
						{ 0, 0 },{ 0, 0 }, { 0, 0 },{ 0, 0 }, { 0, 0 },{ 0, 0 }, { 0, 0 },{ 0, 0 },
						{ 0, 0 },{ 0, 0 }, { 0, 0 },{ 0, 0 }, { 0, 0 },{ 0, 0 }, { 0, 0 },{ 0, 0 },
						{ 0, 0 },{ 0, 0 }, { 0, 0 },{ 0, 0 }, { 0, 0 },{ 0, 0 }, { 0, 0 } };

//int skills[39][7] = {{0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x1c}, {0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x40},
//					{0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x64}, {0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x88},
//					{0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0xac}, {0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0xd0},
//					{0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0xf4}, {0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x118},
//					{0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x13c}, {0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x160},
//					{0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x184}, {0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x1a8},
//					{0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x1cc}, {0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x1f0},
//					{0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x214}, {0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x238},
//					{0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x25c}, {0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x280},
//					{0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x2a4}, {0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x2c8},
//					{0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x2ec}, {0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x310},
//					{0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x334}, {0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x358},
//					{0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x37c}, {0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x3a0},
//					{0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x3c4}, {0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x3e8},
//					{0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x40c}, {0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x430},
//					{0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x454}, {0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x478},
//					{0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x49c}, {0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x4c0},
//					{0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x4e4}, {0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x508},
//					{0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x52c}, {0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x550},
//					{0, 0, 0x2c, 0xa4, 0xc98, 0x58, 0x574}};

