#if !defined (BC_init_h)
#define BC_init_h
#include <openssl/bn.h>
typedef BIGNUM * BIGNUMP;
extern void BN_init (BIGNUM ** bn);
#endif