#include "../inc/header.h"

char mx_get_rand_char(void) {
    return (char)(rand() % (126 - 33 + 1)) + 33;
}

char *mx_get_rand_rune(void) {
    char *b[81] = {"ᚠ", "ᚡ", "ᚢ", "ᚣ", "ᚤ", "ᚥ", "ᚦ", "ᚧ", "ᚨ", "ᚩ", "ᚪ", "ᚫ", "ᚬ",
                   "ᚭ", "ᚮ", "ᚯ", "ᚰ", "ᚱ", "ᚲ", "ᚳ", "ᚴ", "ᚵ", "ᚶ", "ᚷ", "ᚸ", "ᚹ",
                   "ᚺ", "ᚻ", "ᚼ", "ᚽ", "ᚾ", "ᚿ", "ᛀ", "ᛁ", "ᛂ", "ᛃ", "ᛄ", "ᛅ", "ᛆ",
                   "ᛇ", "ᛈ", "ᛉ", "ᛊ", "ᛋ", "ᛌ", "ᛍ", "ᛎ", "ᛏ", "ᛐ", "ᛑ", "ᛒ", "ᛓ",
                   "ᛔ", "ᛕ", "ᛖ", "ᛗ", "ᛘ", "ᛙ", "ᛚ", "ᛛ", "ᛜ", "ᛝ", "ᛞ", "ᛟ", "ᛠ",
                   "ᛡ", "ᛢ", "ᛣ", "ᛤ", "ᛥ", "ᛦ", "ᛧ", "ᛨ", "ᛩ", "ᛪ", "᛫", "᛬", "᛭",
                   "ᛮ", "ᛯ", "ᛰ"};
   return b[(rand() % 80)];
}
