#pragma once

// do we have additional tests: void test_perm()
#define ADDITIONAL

#define crypto_aead_encrypt crypto_aead_encrypt_ref
#define crypto_aead_encrypt_2 crypto_aead_encrypt_ref_asm
#define crypto_aead_encrypt_3 crypto_aead_encrypt_ref_c
#define crypto_aead_encrypt_4 crypto_aead_encrypt_opt64_C2_unrolled
#define crypto_aead_encrypt_5 crypto_aead_encrypt_opt64_asm
#define crypto_aead_encrypt_6 crypto_aead_encrypt_opt64_C_unrolled
#define crypto_aead_encrypt_7 crypto_aead_encrypt_opt_C6
#define crypto_aead_encrypt_8 crypto_aead_encrypt_bit_interleaving_32

#define crypto_aead_decrypt crypto_aead_decrypt_ref
#define crypto_aead_decrypt_2 crypto_aead_decrypt_ref_asm
#define crypto_aead_decrypt_3 crypto_aead_decrypt_ref_c
#define crypto_aead_decrypt_4 crypto_aead_decrypt_opt64_C2_unrolled
#define crypto_aead_decrypt_5 crypto_aead_decrypt_opt64_asm
#define crypto_aead_decrypt_6 crypto_aead_decrypt_opt64_C_unrolled
#define crypto_aead_decrypt_7 crypto_aead_decrypt_opt_C6
#define crypto_aead_decrypt_8 crypto_aead_decrypt_bit_interleaving_32

#include "Permutation/ascon.h"
#include "Permutation/test_perm.h"
#include "crypto_aead/crypto_aead.h"
#include "kat.h"