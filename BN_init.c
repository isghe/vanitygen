#include "BN_init.h"

void BN_init (BIGNUM ** bn);
void BN_init (BIGNUM ** bn){
	*bn = BN_new ();
}