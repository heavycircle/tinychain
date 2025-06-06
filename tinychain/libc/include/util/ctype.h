#ifndef UTIL_CTYPE_H
#define UTIL_CTYPE_H

#define _U  0x01 /* upper */
#define _L  0x02 /* lower */
#define _D  0x04 /* digit */
#define _C  0x08 /* cntrl */
#define _P  0x10 /* punct */
#define _S  0x20 /* white space (space/lf/tab) */
#define _X  0x40 /* hex digit */
#define _SP 0x80 /* hard space (0x20) */

// Defined in the .c file
extern const unsigned char _ctype[];

#define __ismask(x) (_ctype[(int)(unsigned char)(x)])

#define isalnum(c) ((__ismask(c) & (_U | _L | _D)) != 0)
#define isalpha(c) ((__ismask(c) & (_U | _L)) != 0)
#define iscntrl(c) ((__ismask(c) & (_C)) != 0)
#define isgraph(c) ((__ismask(c) & (_P | _U | _L | _D)) != 0)
#define islower(c) ((__ismask(c) & (_L)) != 0)
#define isprint(c) ((__ismask(c) & (_P | _U | _L | _D | _SP)) != 0)
#define ispunct(c) ((__ismask(c) & (_P)) != 0)
/* Note: isspace() must return false for %NUL-terminator */
#define isspace(c)  ((__ismask(c) & (_S)) != 0)
#define isupper(c)  ((__ismask(c) & (_U)) != 0)
#define isxdigit(c) ((__ismask(c) & (_D | _X)) != 0)

#define isascii(c) (((unsigned char)(c)) <= 0x7f)
#define toascii(c) (((unsigned char)(c)) & 0x7f)

static inline int isdigit(int c)
{
    return '0' <= c && c <= '9';
}

#endif // UTIL_CTYPE_H
