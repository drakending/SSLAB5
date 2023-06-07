#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <openssl/rsa.h>
#include <openssl/bn.h>
#include <openssl/md5.h>
#include <openssl/rand.h>


int main()
{
	char N0[0x101], E0[0x101], N1[0x101], D1[0x101], D0[0x101];
	char cipher_text[0x101], sign_hex[0x101];
	unsigned char plain_text[0x101];
	unsigned char bufin[0x101], bufout[0x101], padded_md5[0x101], md5[0x101];

	RSA* prsa = RSA_new();
	prsa->flags |= RSA_FLAG_NO_BLINDING;
	BIGNUM* n1 = BN_new(), * d1 = BN_new();
	BN_hex2bn(&n1, N1);
	BN_hex2bn(&d1, D1);
	return 0;
}


