#include <stdint.h>

#define ECGD_INPUT_SIZE 32
#define ECGD_OUTPUT_SIZE 25
#define ECGD_PROCESS_BUFF_SIZE 37 
#define ECGD_FILTER_SIZE 3

int32_t input[256] =    {105051, 106112, 106969, 107554, 108116, 108561, 109098, 109517, 109895, 
                        110203, 110501, 110785, 110978, 111098, 111302, 111412, 111351, 111272, 
                        111101, 110926, 110762, 110571, 110585, 111001, 111645, 112255, 112980, 
                        113646, 114490, 115002, 115264, 115172, 115181, 115212, 115196, 115159,
                         115223, 115187, 115255, 115208, 115181, 115091, 115047, 114923, 115145, 
                         115097, 115065, 114708, 114668, 114595, 114543, 114485, 114433, 114427, 
                         114320, 114305, 114224, 114142, 114088, 114033, 114000, 113939, 113863, 
                         113800, 113700, 113627, 113552, 113405, 113534, 113487, 113354, 113223, 
                         113204, 113174, 112975, 112895, 112741, 112532, 112402, 112274, 112164, 
                         112046, 111906, 111842, 111712, 111614, 111522, 111386, 111329, 111187, 
                         111062, 110960, 110833, 110731, 110592, 110472, 110343, 110224, 110091, 
                         109929, 109854, 109675, 109544, 109386, 109265, 109111, 108974, 108756, 
                         108691, 108559, 108337, 108301, 108135, 107952, 107832, 107705, 107575, 
                         107492, 107459, 107319, 107071, 106970, 106830, 106739, 106659, 106565, 
                         106451, 106425, 106366, 106212, 106246, 106164, 106125, 106082, 106075, 
                         105984, 105981, 105966, 105909, 105881, 105843, 105783, 106004, 105980, 
                         105816, 105771, 105772, 105747, 105652, 105562, 105504, 105496, 105463, 
                         105393, 105057, 104982, 104895, 104847, 104745, 104701, 104590, 104513, 
                         104445, 104389, 104230, 104177, 104172, 104085, 104007, 103919, 103879, 
                         103751, 103670, 103576, 103540, 103479, 103386, 103263, 103265, 103147, 
                         103075, 102996, 102892, 102813, 102795, 102733, 102685, 102567, 102487, 
                         102412, 102483, 102478, 102437, 102439, 102427, 102302, 102154, 102092, 
                         102107, 102161, 101786, 101702, 101669, 101543, 101474, 101417, 101355, 
                         101335, 101267, 101233, 101083, 101119, 101047, 100967, 100954, 100880, 
                         100802, 100790, 100769, 100658, 100644, 100578, 100546, 100431, 100400, 
                         100326, 100324, 100239, 100179, 100166, 100090, 100073, 100015, 99955, 
                         99941, 99920, 99824, 99774, 99793, 99749, 99908, 99673, 99580, 99562, 
                         99478, 99457, 99403, 99398, 99348, 99255, 99245, 99176, 99150, 99178, 99062, 99039};